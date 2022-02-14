
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2640_priv {int cfmt_code; TYPE_1__* win; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ov2640_priv* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_7,
  struct v4l2_subdev_pad_config *VAR_8,
  struct v4l2_subdev_format *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_9->format;
 struct i2c_client *VAR_11 = FUNC_1(VAR_7);
 struct ov2640_priv *VAR_12 = FUNC_0(VAR_11);

 if (VAR_9->pad)
  return -VAR_0;

 if (VAR_9->which == VAR_4) {





  return -VAR_0;

 }

 VAR_10->width = VAR_12->win->width;
 VAR_10->height = VAR_12->win->height;
 VAR_10->code = VAR_12->cfmt_code;
 VAR_10->colorspace = VAR_1;
 VAR_10->field = VAR_2;
 VAR_10->ycbcr_enc = VAR_6;
 VAR_10->quantization = VAR_3;
 VAR_10->xfer_func = VAR_5;

 return 0;
}
