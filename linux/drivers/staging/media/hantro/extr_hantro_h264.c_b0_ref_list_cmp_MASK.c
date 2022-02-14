
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct v4l2_h264_dpb_entry {int flags; int pic_num; } ;
struct hantro_h264_reflist_builder {scalar_t__* pocs; scalar_t__ curpoc; struct v4l2_h264_dpb_entry* dpb; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, const void *VAR_2, const void *VAR_3)
{
 const struct hantro_h264_reflist_builder *VAR_4 = VAR_3;
 const struct v4l2_h264_dpb_entry *VAR_5, *VAR_6;
 s32 VAR_7, VAR_8;
 u8 VAR_9, VAR_10;

 VAR_9 = *((u8 *)VAR_1);
 VAR_10 = *((u8 *)VAR_2);
 VAR_5 = &VAR_4->dpb[VAR_9];
 VAR_6 = &VAR_4->dpb[VAR_10];

 if ((VAR_5->flags & VAR_0) !=
     (VAR_6->flags & VAR_0)) {

  if (!(VAR_5->flags & VAR_0))
   return -1;
  else
   return 1;
 }


 if (VAR_5->flags & VAR_0)
  return VAR_5->pic_num - VAR_6->pic_num;

 VAR_7 = VAR_4->pocs[VAR_9];
 VAR_8 = VAR_4->pocs[VAR_10];






 if ((VAR_7 < VAR_4->curpoc) != (VAR_8 < VAR_4->curpoc))
  return FUNC_0(VAR_7, VAR_8);
 else if (VAR_7 < VAR_4->curpoc)
  return FUNC_0(VAR_8, VAR_7);

 return FUNC_0(VAR_7, VAR_8);
}
