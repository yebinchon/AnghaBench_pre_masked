
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {size_t pad; int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct imx_media_pixfmt {int dummy; } ;
struct imx7_csi {int lock; struct imx_media_pixfmt const** cc; scalar_t__ is_streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct imx7_csi*,struct v4l2_subdev_pad_config*,size_t,int ) ;
 int FUNC_1 (struct imx7_csi*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,struct imx_media_pixfmt const**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct imx7_csi* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_6,
       struct v4l2_subdev_pad_config *VAR_7,
       struct v4l2_subdev_format *VAR_8)
{
 struct imx7_csi *VAR_9 = FUNC_4(VAR_6);
 const struct imx_media_pixfmt *VAR_10;
 struct v4l2_mbus_framefmt *VAR_11;
 const struct imx_media_pixfmt *VAR_12;
 struct v4l2_mbus_framefmt *VAR_13;
 struct v4l2_subdev_format VAR_14;
 int VAR_15 = 0;

 if (VAR_8->pad >= VAR_2)
  return -VAR_1;

 FUNC_2(&VAR_9->lock);

 if (VAR_9->is_streaming) {
  VAR_15 = -VAR_0;
  goto out_unlock;
 }

 VAR_15 = FUNC_1(VAR_9, VAR_7, VAR_8, &VAR_12);
 if (VAR_15 < 0)
  goto out_unlock;

 VAR_13 = FUNC_0(VAR_9, VAR_7, VAR_8->pad, VAR_8->which);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 *VAR_13 = VAR_8->format;

 if (VAR_8->pad == VAR_3) {

  VAR_14.pad = VAR_4;
  VAR_14.which = VAR_8->which;
  VAR_14.format = VAR_8->format;
  if (FUNC_1(VAR_9, VAR_7, &VAR_14, &VAR_10)) {
   VAR_15 = -VAR_1;
   goto out_unlock;
  }
  VAR_11 = FUNC_0(VAR_9, VAR_7, VAR_4,
          VAR_8->which);
  *VAR_11 = VAR_14.format;

  if (VAR_8->which == VAR_5)
   VAR_9->cc[VAR_4] = VAR_10;
 }

 if (VAR_8->which == VAR_5)
  VAR_9->cc[VAR_8->pad] = VAR_12;

out_unlock:
 FUNC_3(&VAR_9->lock);

 return VAR_15;
}
