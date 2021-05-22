#pragma once

namespace mitools
{

struct MediaFileInfo
{
	void*	cookie = nullptr;		// resevered

	const char*	FileName = nullptr;
	const char*	FileType = nullptr;

	double		Duration = 0;

	int			CoverLen = 0;
	const char*	CoverPtr = nullptr;
};

extern MediaFileInfo* GetMediaFileInfo(const char* path);
extern void FreeMediaFileInfo(MediaFileInfo*);

} // namespace mitools