
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct pvr2_hdw {int std_mask_cur; int std_dirty; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;



__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_0,int VAR_1,int VAR_2)
{
 struct pvr2_hdw *VAR_3 = VAR_0->hdw;
 v4l2_std_id VAR_4;
 VAR_4 = VAR_3->std_mask_cur;
 VAR_4 = (VAR_4 & ~VAR_1) | (VAR_2 & VAR_1);
 if (VAR_4 == VAR_3->std_mask_cur) return 0;
 VAR_3->std_mask_cur = VAR_4;
 VAR_3->std_dirty = !0;
 return 0;
}
