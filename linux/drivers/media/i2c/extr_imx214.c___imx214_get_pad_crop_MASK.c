
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_rect {int dummy; } ;
struct imx214 {struct v4l2_rect crop; int sd; } ;
typedef enum v4l2_subdev_format_whence { ____Placeholder_v4l2_subdev_format_whence } v4l2_subdev_format_whence ;




 struct v4l2_rect* FUNC_0 (int *,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static struct v4l2_rect *
FUNC_1(struct imx214 *VAR_0, struct v4l2_subdev_pad_config *VAR_1,
        unsigned int VAR_2, enum v4l2_subdev_format_whence VAR_3)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(&VAR_0->sd, VAR_1, VAR_2);
 case 129:
  return &VAR_0->crop;
 default:
  return ((void*)0);
 }
}
