
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_h264_scaling_matrix {int scaling_list_4x4; int * scaling_list_8x8; } ;
struct TYPE_2__ {struct v4l2_ctrl_h264_scaling_matrix* scaling_matrix; } ;
struct cedrus_run {TYPE_1__ h264; } ;
struct cedrus_dev {int dummy; } ;
struct cedrus_ctx {struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cedrus_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct cedrus_ctx *VAR_3,
           struct cedrus_run *VAR_4)
{
 const struct v4l2_ctrl_h264_scaling_matrix *VAR_5 =
  VAR_4->h264.scaling_matrix;
 struct cedrus_dev *VAR_6 = VAR_3->dev;

 FUNC_0(VAR_6, VAR_1,
          VAR_5->scaling_list_8x8[0],
          sizeof(VAR_5->scaling_list_8x8[0]));

 FUNC_0(VAR_6, VAR_2,
          VAR_5->scaling_list_8x8[3],
          sizeof(VAR_5->scaling_list_8x8[3]));

 FUNC_0(VAR_6, VAR_0,
          VAR_5->scaling_list_4x4,
          sizeof(VAR_5->scaling_list_4x4));
}
