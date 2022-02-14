
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_h264_slice_params {scalar_t__ num_ref_idx_l0_active_minus1; int ref_pic_list0; } ;
struct TYPE_2__ {struct v4l2_ctrl_h264_slice_params* slice_params; } ;
struct cedrus_run {TYPE_1__ h264; } ;
struct cedrus_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cedrus_ctx*,struct cedrus_run*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct cedrus_ctx *VAR_1,
       struct cedrus_run *VAR_2)
{
 const struct v4l2_ctrl_h264_slice_params *VAR_3 = VAR_2->h264.slice_params;

 FUNC_0(VAR_1, VAR_2,
          VAR_3->ref_pic_list0,
          VAR_3->num_ref_idx_l0_active_minus1 + 1,
          VAR_0);
}
