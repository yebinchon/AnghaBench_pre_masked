
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ code; int colorspace; int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v022_datafmt {scalar_t__ code; int colorspace; } ;
struct mt9v022 {struct mt9v022_datafmt* fmt; int num_fmts; int fmts; scalar_t__ y_skip_top; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct mt9v022_datafmt* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct v4l2_subdev*,struct mt9v022_datafmt const*,struct v4l2_mbus_framefmt*) ;
 struct mt9v022* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *,int ,int ,int,int *,scalar_t__,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_8,
  struct v4l2_subdev_pad_config *VAR_9,
  struct v4l2_subdev_format *VAR_10)
{
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_10->format;
 struct i2c_client *VAR_12 = FUNC_3(VAR_8);
 struct mt9v022 *VAR_13 = FUNC_2(VAR_12);
 const struct mt9v022_datafmt *VAR_14;
 int VAR_15 = VAR_11->code == VAR_2 ||
  VAR_11->code == VAR_1;

 if (VAR_10->pad)
  return -VAR_0;

 FUNC_4(&VAR_11->width, VAR_6,
  VAR_4, VAR_15,
  &VAR_11->height, VAR_5 + VAR_13->y_skip_top,
  VAR_3 + VAR_13->y_skip_top, VAR_15, 0);

 VAR_14 = FUNC_0(VAR_11->code, VAR_13->fmts,
       VAR_13->num_fmts);
 if (!VAR_14) {
  VAR_14 = VAR_13->fmt;
  VAR_11->code = VAR_14->code;
 }

 VAR_11->colorspace = VAR_14->colorspace;

 if (VAR_10->which == VAR_7)
  return FUNC_1(VAR_8, VAR_14, VAR_11);
 VAR_9->try_fmt = *VAR_11;
 return 0;
}
