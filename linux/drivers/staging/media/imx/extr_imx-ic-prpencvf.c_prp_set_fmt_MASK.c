
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {size_t pad; int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct prp_priv {scalar_t__ stream_count; int lock; struct imx_media_pixfmt const** cc; } ;
struct imx_media_pixfmt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct prp_priv*,struct v4l2_subdev_pad_config*,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct prp_priv*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,struct imx_media_pixfmt const**) ;
 struct prp_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_6,
         struct v4l2_subdev_pad_config *VAR_7,
         struct v4l2_subdev_format *VAR_8)
{
 struct prp_priv *VAR_9 = FUNC_4(VAR_6);
 const struct imx_media_pixfmt *VAR_10;
 struct v4l2_mbus_framefmt *VAR_11;
 int VAR_12 = 0;

 if (VAR_8->pad >= VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_9->lock);

 if (VAR_9->stream_count > 0) {
  VAR_12 = -VAR_0;
  goto out;
 }

 FUNC_3(VAR_9, VAR_7, VAR_8, &VAR_10);

 VAR_11 = FUNC_0(VAR_9, VAR_7, VAR_8->pad, VAR_8->which);
 *VAR_11 = VAR_8->format;


 if (VAR_8->pad == VAR_3) {
  const struct imx_media_pixfmt *VAR_13;
  struct v4l2_mbus_framefmt *VAR_14;
  struct v4l2_subdev_format VAR_15;

  VAR_15.pad = VAR_4;
  VAR_15.which = VAR_8->which;
  VAR_15.format = VAR_8->format;
  FUNC_3(VAR_9, VAR_7, &VAR_15, &VAR_13);

  VAR_14 = FUNC_0(VAR_9, VAR_7, VAR_4,
           VAR_8->which);
  *VAR_14 = VAR_15.format;
  if (VAR_8->which == VAR_5)
   VAR_9->cc[VAR_4] = VAR_13;
 }

 if (VAR_8->which == VAR_5)
  VAR_9->cc[VAR_8->pad] = VAR_10;

out:
 FUNC_2(&VAR_9->lock);
 return VAR_12;
}
