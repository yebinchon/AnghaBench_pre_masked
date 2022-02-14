
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int field; int colorspace; int code; int height; int width; } ;
struct ov2640_win_size {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ov2640_win_size* FUNC_0 (int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_8,
      struct v4l2_subdev_pad_config *VAR_9)
{
 return 0;
}
