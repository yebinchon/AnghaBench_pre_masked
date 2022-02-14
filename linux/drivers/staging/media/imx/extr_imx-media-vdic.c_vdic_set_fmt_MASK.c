
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdic_priv {scalar_t__ stream_count; int lock; struct imx_media_pixfmt const** cc; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {size_t pad; int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct imx_media_pixfmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct vdic_priv*,struct v4l2_subdev_pad_config*,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vdic_priv* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct vdic_priv*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,struct imx_media_pixfmt const**) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_7,
   struct v4l2_subdev_pad_config *VAR_8,
   struct v4l2_subdev_format *VAR_9)
{
 struct vdic_priv *VAR_10 = FUNC_3(VAR_7);
 const struct imx_media_pixfmt *VAR_11;
 struct v4l2_mbus_framefmt *VAR_12;
 int VAR_13 = 0;

 if (VAR_9->pad >= VAR_3)
  return -VAR_1;

 FUNC_1(&VAR_10->lock);

 if (VAR_10->stream_count > 0) {
  VAR_13 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_10, VAR_8, VAR_9, &VAR_11);

 VAR_12 = FUNC_0(VAR_10, VAR_8, VAR_9->pad, VAR_9->which);
 *VAR_12 = VAR_9->format;


 if (VAR_9->pad == VAR_4 ||
     VAR_9->pad == VAR_5) {
  const struct imx_media_pixfmt *VAR_14;
  struct v4l2_mbus_framefmt *VAR_15;
  struct v4l2_subdev_format VAR_16;

  VAR_16.pad = VAR_6;
  VAR_16.which = VAR_9->which;
  VAR_16.format = VAR_9->format;
  FUNC_4(VAR_10, VAR_8, &VAR_16, &VAR_14);

  VAR_15 = FUNC_0(VAR_10, VAR_8, VAR_6,
     VAR_9->which);
  *VAR_15 = VAR_16.format;
  if (VAR_9->which == VAR_2)
   VAR_10->cc[VAR_6] = VAR_14;
 }

 if (VAR_9->which == VAR_2)
  VAR_10->cc[VAR_9->pad] = VAR_11;
out:
 FUNC_2(&VAR_10->lock);
 return VAR_13;
}
