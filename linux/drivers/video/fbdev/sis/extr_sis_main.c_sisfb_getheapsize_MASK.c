
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sis_video_info {int video_size; int hwcursor_size; int cmdQueueSize; int UMAsize; int sisfb_parm_mem; int video_offset; int sisfb_mem; int heapstart; scalar_t__ LFBsize; } ;



__attribute__((used)) static u32 FUNC_0(struct sis_video_info *VAR_0)
{
 u32 VAR_1 = VAR_0->video_size - VAR_0->hwcursor_size - VAR_0->cmdQueueSize;
 u32 VAR_2 = 0;

 if(VAR_0->UMAsize && VAR_0->LFBsize) {
  if( (!VAR_0->sisfb_parm_mem) ||
      ((VAR_0->sisfb_parm_mem * 1024) > VAR_1) ||
      ((VAR_1 - (VAR_0->sisfb_parm_mem * 1024)) < VAR_0->UMAsize) ) {
   VAR_2 = VAR_0->UMAsize;
   VAR_1 -= VAR_0->UMAsize;
  } else {
   VAR_2 = VAR_1 - (VAR_0->sisfb_parm_mem * 1024);
   VAR_1 = VAR_0->sisfb_parm_mem * 1024;
  }
  VAR_0->video_offset = VAR_2;
  VAR_0->sisfb_mem = VAR_1;
 } else {
  VAR_2 = VAR_1 - VAR_0->heapstart;
  VAR_0->sisfb_mem = VAR_0->heapstart;
 }

 return VAR_2;
}
