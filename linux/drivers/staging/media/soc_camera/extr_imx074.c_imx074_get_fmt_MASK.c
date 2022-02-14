
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int height; int width; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct imx074_datafmt {int colorspace; int code; } ;
struct imx074 {struct imx074_datafmt* fmt; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct imx074* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
  struct v4l2_subdev_pad_config *VAR_5,
  struct v4l2_subdev_format *VAR_6)
{
 struct v4l2_mbus_framefmt *VAR_7 = &VAR_6->format;
 struct i2c_client *VAR_8 = FUNC_1(VAR_4);
 struct imx074 *VAR_9 = FUNC_0(VAR_8);

 const struct imx074_datafmt *VAR_10 = VAR_9->fmt;

 if (VAR_6->pad)
  return -VAR_0;

 VAR_7->code = VAR_10->code;
 VAR_7->colorspace = VAR_10->colorspace;
 VAR_7->width = VAR_2;
 VAR_7->height = VAR_1;
 VAR_7->field = VAR_3;

 return 0;
}
