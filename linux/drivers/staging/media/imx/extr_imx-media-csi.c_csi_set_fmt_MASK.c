
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {int pad; int which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int dummy; } ;
struct v4l2_fwnode_endpoint {int bus_type; } ;
struct imx_media_pixfmt {int dummy; } ;
struct csi_priv {scalar_t__ stream_count; int lock; struct imx_media_pixfmt const** cc; int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_rect* FUNC_0 (struct csi_priv*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_rect* FUNC_1 (struct csi_priv*,struct v4l2_subdev_pad_config*,int ) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct csi_priv*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_3 (struct csi_priv*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_4 (struct csi_priv*,struct v4l2_fwnode_endpoint*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*,struct v4l2_rect*,struct v4l2_rect*,struct imx_media_pixfmt const**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 struct csi_priv* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_5,
         struct v4l2_subdev_pad_config *VAR_6,
         struct v4l2_subdev_format *VAR_7)
{
 struct csi_priv *VAR_8 = FUNC_8(VAR_5);
 struct v4l2_fwnode_endpoint VAR_9 = { .bus_type = 0 };
 const struct imx_media_pixfmt *VAR_10;
 struct v4l2_mbus_framefmt *VAR_11;
 struct v4l2_rect *VAR_12, *VAR_13;
 int VAR_14;

 if (VAR_7->pad >= VAR_0)
  return -VAR_3;

 VAR_14 = FUNC_3(VAR_8, &VAR_9);
 if (VAR_14) {
  FUNC_7(&VAR_8->sd, "failed to find upstream endpoint\n");
  return VAR_14;
 }

 FUNC_5(&VAR_8->lock);

 if (VAR_8->stream_count > 0) {
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_12 = FUNC_1(VAR_8, VAR_6, VAR_7->which);
 VAR_13 = FUNC_0(VAR_8, VAR_6, VAR_7->which);

 FUNC_4(VAR_8, &VAR_9, VAR_6, VAR_7, VAR_12, VAR_13, &VAR_10);

 VAR_11 = FUNC_2(VAR_8, VAR_6, VAR_7->pad, VAR_7->which);
 *VAR_11 = VAR_7->format;

 if (VAR_7->pad == VAR_1) {
  int VAR_15;


  for (VAR_15 = VAR_1 + 1; VAR_15 < VAR_0; VAR_15++) {
   const struct imx_media_pixfmt *VAR_16;
   struct v4l2_mbus_framefmt *VAR_17;
   struct v4l2_subdev_format VAR_18;

   VAR_18.pad = VAR_15;
   VAR_18.which = VAR_7->which;
   VAR_18.format = VAR_7->format;
   FUNC_4(VAR_8, &VAR_9, VAR_6, &VAR_18,
        ((void*)0), VAR_13, &VAR_16);

   VAR_17 = FUNC_2(VAR_8, VAR_6, VAR_15, VAR_7->which);
   *VAR_17 = VAR_18.format;

   if (VAR_7->which == VAR_4)
    VAR_8->cc[VAR_15] = VAR_16;
  }
 }

 if (VAR_7->which == VAR_4)
  VAR_8->cc[VAR_7->pad] = VAR_10;

out:
 FUNC_6(&VAR_8->lock);
 return VAR_14;
}
