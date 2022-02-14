
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int field; int colorspace; int code; int height; int width; } ;
struct mt9m001 {TYPE_1__* fmts; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int colorspace; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mt9m001* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_6,
       struct v4l2_subdev_pad_config *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_1(VAR_6);
 struct mt9m001 *VAR_9 = FUNC_0(VAR_8);
 struct v4l2_mbus_framefmt *VAR_10 =
  FUNC_2(VAR_6, VAR_7, 0);

 VAR_10->width = VAR_1;
 VAR_10->height = VAR_0;
 VAR_10->code = VAR_9->fmts[0].code;
 VAR_10->colorspace = VAR_9->fmts[0].colorspace;
 VAR_10->field = VAR_2;
 VAR_10->ycbcr_enc = VAR_5;
 VAR_10->quantization = VAR_3;
 VAR_10->xfer_func = VAR_4;

 return 0;
}
