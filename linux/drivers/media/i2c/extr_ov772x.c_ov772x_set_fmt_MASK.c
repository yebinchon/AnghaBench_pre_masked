
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int height; int width; int code; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int height; int width; } ;
struct ov772x_win_size {TYPE_1__ rect; } ;
struct ov772x_priv {scalar_t__ power_count; int lock; struct ov772x_color_format const* cfmt; struct ov772x_win_size const* win; scalar_t__ streaming; } ;
struct ov772x_color_format {int colorspace; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct v4l2_mbus_framefmt*,struct ov772x_color_format const**,struct ov772x_win_size const**) ;
 int FUNC_3 (struct ov772x_priv*,struct ov772x_color_format const*,struct ov772x_win_size const*) ;
 struct ov772x_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_7,
     struct v4l2_subdev_pad_config *VAR_8,
     struct v4l2_subdev_format *VAR_9)
{
 struct ov772x_priv *VAR_10 = FUNC_4(VAR_7);
 struct v4l2_mbus_framefmt *VAR_11 = &VAR_9->format;
 const struct ov772x_color_format *VAR_12;
 const struct ov772x_win_size *VAR_13;
 int VAR_14 = 0;

 if (VAR_9->pad)
  return -VAR_1;

 FUNC_2(VAR_11, &VAR_12, &VAR_13);

 VAR_11->code = VAR_12->code;
 VAR_11->width = VAR_13->rect.width;
 VAR_11->height = VAR_13->rect.height;
 VAR_11->field = VAR_2;
 VAR_11->colorspace = VAR_12->colorspace;
 VAR_11->ycbcr_enc = VAR_6;
 VAR_11->quantization = VAR_3;
 VAR_11->xfer_func = VAR_5;

 if (VAR_9->which == VAR_4) {
  VAR_8->try_fmt = *VAR_11;
  return 0;
 }

 FUNC_0(&VAR_10->lock);

 if (VAR_10->streaming) {
  VAR_14 = -VAR_0;
  goto error;
 }






 if (VAR_10->power_count > 0) {
  VAR_14 = FUNC_3(VAR_10, VAR_12, VAR_13);
  if (VAR_14 < 0)
   goto error;
 }
 VAR_10->win = VAR_13;
 VAR_10->cfmt = VAR_12;

error:
 FUNC_1(&VAR_10->lock);

 return VAR_14;
}
