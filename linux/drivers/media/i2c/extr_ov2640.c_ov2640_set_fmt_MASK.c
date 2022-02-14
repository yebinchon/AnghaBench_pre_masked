
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int code; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int height; int width; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2640_win_size {int height; int width; } ;
struct ov2640_priv {int cfmt_code; int lock; struct ov2640_win_size const* win; scalar_t__ streaming; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov2640_win_size* FUNC_2 (int ,int ) ;
 struct ov2640_priv* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_8,
  struct v4l2_subdev_pad_config *VAR_9,
  struct v4l2_subdev_format *VAR_10)
{
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_10->format;
 struct i2c_client *VAR_12 = FUNC_4(VAR_8);
 struct ov2640_priv *VAR_13 = FUNC_3(VAR_12);
 const struct ov2640_win_size *VAR_14;
 int VAR_15 = 0;

 if (VAR_10->pad)
  return -VAR_1;

 FUNC_0(&VAR_13->lock);


 VAR_14 = FUNC_2(VAR_11->width, VAR_11->height);
 VAR_11->width = VAR_14->width;
 VAR_11->height = VAR_14->height;

 VAR_11->field = VAR_3;
 VAR_11->colorspace = VAR_2;
 VAR_11->ycbcr_enc = VAR_7;
 VAR_11->quantization = VAR_4;
 VAR_11->xfer_func = VAR_6;

 switch (VAR_11->code) {
 case 133:
 case 132:
 case 129:
 case 131:
 case 128:
 case 130:
  break;
 default:
  VAR_11->code = 131;
  break;
 }

 if (VAR_10->which == VAR_5) {
  struct ov2640_priv *VAR_16 = FUNC_3(VAR_12);

  if (VAR_16->streaming) {
   VAR_15 = -VAR_0;
   goto out;
  }

  VAR_16->win = VAR_14;

  VAR_16->cfmt_code = VAR_11->code;
 } else {
  VAR_9->try_fmt = *VAR_11;
 }
out:
 FUNC_1(&VAR_13->lock);

 return VAR_15;
}
