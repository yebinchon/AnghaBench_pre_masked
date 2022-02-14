
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int field; int colorspace; int code; scalar_t__ height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9m001_datafmt {int colorspace; int code; } ;
struct mt9m001 {scalar_t__ fmts; struct mt9m001_datafmt* fmt; int num_fmts; scalar_t__ y_skip_top; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct mt9m001_datafmt* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct v4l2_subdev*,struct mt9m001_datafmt const*,struct v4l2_mbus_framefmt*) ;
 struct mt9m001* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *,int ,int ,int,scalar_t__*,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_11,
  struct v4l2_subdev_pad_config *VAR_12,
  struct v4l2_subdev_format *VAR_13)
{
 struct v4l2_mbus_framefmt *VAR_14 = &VAR_13->format;
 struct i2c_client *VAR_15 = FUNC_4(VAR_11);
 struct mt9m001 *VAR_16 = FUNC_3(VAR_15);
 const struct mt9m001_datafmt *VAR_17;

 if (VAR_13->pad)
  return -VAR_0;

 FUNC_5(&VAR_14->width, VAR_4,
  VAR_2, 1,
  &VAR_14->height, VAR_3 + VAR_16->y_skip_top,
  VAR_1 + VAR_16->y_skip_top, 0, 0);

 if (VAR_16->fmts == VAR_10)
  VAR_14->height = FUNC_0(VAR_14->height - 1, 2);

 VAR_17 = FUNC_1(VAR_14->code, VAR_16->fmts,
       VAR_16->num_fmts);
 if (!VAR_17) {
  VAR_17 = VAR_16->fmt;
  VAR_14->code = VAR_17->code;
 }

 VAR_14->colorspace = VAR_17->colorspace;
 VAR_14->field = VAR_5;
 VAR_14->ycbcr_enc = VAR_9;
 VAR_14->quantization = VAR_6;
 VAR_14->xfer_func = VAR_8;

 if (VAR_13->which == VAR_7)
  return FUNC_2(VAR_11, VAR_17, VAR_14);
 VAR_12->try_fmt = *VAR_14;
 return 0;
}
