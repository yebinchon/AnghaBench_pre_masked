
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sis_video_info {int sisfb_parm_mem; int video_size; int hwcursor_size; int cmdQueueSize; scalar_t__ sisvga_engine; scalar_t__ cardnumber; scalar_t__ LFBsize; scalar_t__ UMAsize; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct sis_video_info *VAR_1)
{
 u32 VAR_2 = VAR_1->sisfb_parm_mem * 1024;
 u32 VAR_3 = VAR_1->video_size - VAR_1->hwcursor_size - VAR_1->cmdQueueSize;
 u32 VAR_4;
 if(VAR_1->sisvga_engine == VAR_0) {
  if(VAR_1->video_size > 0x1000000) {
   VAR_4 = 0xc00000;
  } else if(VAR_1->video_size > 0x800000) {
   VAR_4 = 0x800000;
  } else {
   VAR_4 = 0x400000;
  }
 } else if(VAR_1->UMAsize && VAR_1->LFBsize) {
  VAR_2 = VAR_4 = 0;
 } else {
  VAR_4 = VAR_3 - 0x8000;
 }


 if((!VAR_2) || (VAR_2 > VAR_3) || (VAR_1->cardnumber != 0))
  VAR_2 = VAR_4;

 return VAR_2;
}
