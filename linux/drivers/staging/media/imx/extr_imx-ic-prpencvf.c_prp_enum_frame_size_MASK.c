
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; scalar_t__ index; scalar_t__ code; int min_width; int min_height; int max_width; int max_height; int which; } ;
struct TYPE_2__ {scalar_t__ code; int width; int height; } ;
struct v4l2_subdev_format {scalar_t__ pad; TYPE_1__ format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct prp_priv {int lock; } ;
struct imx_media_pixfmt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct prp_priv*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,struct imx_media_pixfmt const**) ;
 struct prp_priv* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
          struct v4l2_subdev_pad_config *VAR_3,
          struct v4l2_subdev_frame_size_enum *VAR_4)
{
 struct prp_priv *VAR_5 = FUNC_3(VAR_2);
 struct v4l2_subdev_format VAR_6 = {};
 const struct imx_media_pixfmt *VAR_7;
 int VAR_8 = 0;

 if (VAR_4->pad >= VAR_1 || VAR_4->index != 0)
  return -VAR_0;

 FUNC_0(&VAR_5->lock);

 VAR_6.pad = VAR_4->pad;
 VAR_6.which = VAR_4->which;
 VAR_6.format.code = VAR_4->code;
 VAR_6.format.width = 1;
 VAR_6.format.height = 1;
 FUNC_2(VAR_5, VAR_3, &VAR_6, &VAR_7);
 VAR_4->min_width = VAR_6.format.width;
 VAR_4->min_height = VAR_6.format.height;

 if (VAR_6.format.code != VAR_4->code) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_6.format.code = VAR_4->code;
 VAR_6.format.width = -1;
 VAR_6.format.height = -1;
 FUNC_2(VAR_5, VAR_3, &VAR_6, &VAR_7);
 VAR_4->max_width = VAR_6.format.width;
 VAR_4->max_height = VAR_6.format.height;
out:
 FUNC_1(&VAR_5->lock);
 return VAR_8;
}
