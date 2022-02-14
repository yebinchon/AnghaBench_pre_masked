
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; int colorspace; int field; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
  struct v4l2_subdev_pad_config *VAR_6,
  struct v4l2_subdev_format *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_7->format;

 if (VAR_7->pad || VAR_8->code != VAR_1)
  return -VAR_0;
 VAR_8->field = VAR_3;
 VAR_8->colorspace = VAR_2;
 if (VAR_7->which == VAR_4)
  return 0;
 return FUNC_0(VAR_5, VAR_8->width, VAR_8->height);
}
