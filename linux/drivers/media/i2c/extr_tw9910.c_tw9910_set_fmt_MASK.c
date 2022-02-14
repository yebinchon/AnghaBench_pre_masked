
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ field; int height; int width; int colorspace; int code; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct tw9910_scale_ctrl {int height; int width; } ;
struct tw9910_priv {int norm; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 struct tw9910_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;
 struct tw9910_scale_ctrl* FUNC_3 (int ,int ,int ) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_6,
     struct v4l2_subdev_pad_config *VAR_7,
     struct v4l2_subdev_format *VAR_8)
{
 struct v4l2_mbus_framefmt *VAR_9 = &VAR_8->format;
 struct i2c_client *VAR_10 = FUNC_4(VAR_6);
 struct tw9910_priv *VAR_11 = FUNC_1(VAR_10);
 const struct tw9910_scale_ctrl *VAR_12;

 if (VAR_8->pad)
  return -VAR_0;

 if (VAR_9->field == VAR_3) {
  VAR_9->field = VAR_4;
 } else if (VAR_9->field != VAR_4) {
  FUNC_0(&VAR_10->dev, "Field type %d invalid\n", VAR_9->field);
  return -VAR_0;
 }

 VAR_9->code = VAR_1;
 VAR_9->colorspace = VAR_2;


 VAR_12 = FUNC_3(VAR_11->norm, VAR_9->width, VAR_9->height);
 if (!VAR_12)
  return -VAR_0;

 VAR_9->width = VAR_12->width;
 VAR_9->height = VAR_12->height;

 if (VAR_8->which == VAR_5)
  return FUNC_2(VAR_6, VAR_9);

 VAR_7->try_fmt = *VAR_9;

 return 0;
}
