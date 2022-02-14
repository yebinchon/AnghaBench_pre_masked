
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int field; int quantization; int xfer_func; int ycbcr_enc; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct rj54n1 {int height; int width; TYPE_1__* fmt; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int colorspace; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rj54n1* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_5,
  struct v4l2_subdev_pad_config *VAR_6,
  struct v4l2_subdev_format *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_7->format;
 struct i2c_client *VAR_9 = FUNC_1(VAR_5);
 struct rj54n1 *VAR_10 = FUNC_0(VAR_9);

 if (VAR_7->pad)
  return -VAR_0;

 VAR_8->code = VAR_10->fmt->code;
 VAR_8->colorspace = VAR_10->fmt->colorspace;
 VAR_8->ycbcr_enc = VAR_4;
 VAR_8->xfer_func = VAR_3;
 VAR_8->quantization = VAR_2;
 VAR_8->field = VAR_1;
 VAR_8->width = VAR_10->width;
 VAR_8->height = VAR_10->height;

 return 0;
}
