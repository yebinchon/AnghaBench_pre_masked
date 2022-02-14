
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsp1_entity {struct v4l2_subdev_pad_config* config; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;





struct v4l2_subdev_pad_config *
FUNC_0(struct vsp1_entity *VAR_0,
      struct v4l2_subdev_pad_config *VAR_1,
      enum v4l2_subdev_format_whence VAR_2)
{
 switch (VAR_2) {
 case 129:
  return VAR_0->config;
 case 128:
 default:
  return VAR_1;
 }
}
