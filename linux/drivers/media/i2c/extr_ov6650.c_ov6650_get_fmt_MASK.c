
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int field; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int width; int height; } ;
struct ov6650 {int half_scale; int colorspace; int code; TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ov6650* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3,
  struct v4l2_subdev_format *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 = &VAR_4->format;
 struct i2c_client *VAR_6 = FUNC_1(VAR_2);
 struct ov6650 *VAR_7 = FUNC_0(VAR_6);

 if (VAR_4->pad)
  return -VAR_0;

 VAR_5->width = VAR_7->rect.width >> VAR_7->half_scale;
 VAR_5->height = VAR_7->rect.height >> VAR_7->half_scale;
 VAR_5->code = VAR_7->code;
 VAR_5->colorspace = VAR_7->colorspace;
 VAR_5->field = VAR_1;

 return 0;
}
