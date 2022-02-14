
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int code; int field; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct ak881x {int lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ak881x* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *,int ,int,int,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
  struct v4l2_subdev_pad_config *VAR_5,
  struct v4l2_subdev_format *VAR_6)
{
 struct v4l2_mbus_framefmt *VAR_7 = &VAR_6->format;
 struct i2c_client *VAR_8 = FUNC_1(VAR_4);
 struct ak881x *VAR_9 = FUNC_0(VAR_8);

 if (VAR_6->pad)
  return -VAR_0;

 FUNC_2(&VAR_7->width, 0, 720, 2,
         &VAR_7->height, 0, VAR_9->lines, 1, 0);
 VAR_7->field = VAR_3;
 VAR_7->code = VAR_1;
 VAR_7->colorspace = VAR_2;

 return 0;
}
