
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int height; int width; } ;
struct mt9m001 {TYPE_2__* fmt; TYPE_1__ rect; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {int colorspace; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mt9m001* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6,
  struct v4l2_subdev_pad_config *VAR_7,
  struct v4l2_subdev_format *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_1(VAR_6);
 struct mt9m001 *VAR_10 = FUNC_0(VAR_9);
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_8->format;

 if (VAR_8->pad)
  return -VAR_0;

 if (VAR_8->which == VAR_3) {
  VAR_11 = FUNC_2(VAR_6, VAR_7, 0);
  VAR_8->format = *VAR_11;
  return 0;
 }

 VAR_11->width = VAR_10->rect.width;
 VAR_11->height = VAR_10->rect.height;
 VAR_11->code = VAR_10->fmt->code;
 VAR_11->colorspace = VAR_10->fmt->colorspace;
 VAR_11->field = VAR_1;
 VAR_11->ycbcr_enc = VAR_5;
 VAR_11->quantization = VAR_2;
 VAR_11->xfer_func = VAR_4;

 return 0;
}
