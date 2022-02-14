
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct tw9910_priv {TYPE_1__* scale; int norm; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tw9910_priv* FUNC_0 (struct i2c_client*) ;
 TYPE_1__* FUNC_1 (int ,int,int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_format *VAR_6)
{
 struct v4l2_mbus_framefmt *VAR_7 = &VAR_6->format;
 struct i2c_client *VAR_8 = FUNC_2(VAR_4);
 struct tw9910_priv *VAR_9 = FUNC_0(VAR_8);

 if (VAR_6->pad)
  return -VAR_0;

 if (!VAR_9->scale) {
  VAR_9->scale = FUNC_1(VAR_9->norm, 640, 480);
  if (!VAR_9->scale)
   return -VAR_0;
 }

 VAR_7->width = VAR_9->scale->width;
 VAR_7->height = VAR_9->scale->height;
 VAR_7->code = VAR_1;
 VAR_7->colorspace = VAR_2;
 VAR_7->field = VAR_3;

 return 0;
}
