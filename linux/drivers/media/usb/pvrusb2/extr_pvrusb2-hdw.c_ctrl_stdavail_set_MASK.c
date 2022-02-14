
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_6__ {int valid_bits; } ;
struct TYPE_4__ {TYPE_3__ type_bitmask; } ;
struct TYPE_5__ {TYPE_1__ def; } ;
struct pvr2_hdw {int std_mask_avail; TYPE_2__ std_info_cur; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;



__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_0,int VAR_1,int VAR_2)
{
 struct pvr2_hdw *VAR_3 = VAR_0->hdw;
 v4l2_std_id VAR_4;
 VAR_4 = VAR_3->std_mask_avail;
 VAR_4 = (VAR_4 & ~VAR_1) | (VAR_2 & VAR_1);
 if (VAR_4 == VAR_3->std_mask_avail) return 0;
 VAR_3->std_mask_avail = VAR_4;
 VAR_3->std_info_cur.def.type_bitmask.valid_bits = VAR_3->std_mask_avail;
 return 0;
}
