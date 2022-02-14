
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int code; int height; int width; } ;
struct v4l2_subdev_format {int pad; struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct prp_priv {scalar_t__ stream_count; int lock; } ;
struct imx_media_pixfmt {int * codes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct prp_priv*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct imx_media_pixfmt* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct v4l2_mbus_framefmt*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct prp_priv* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int *,int ,int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_13,
         struct v4l2_subdev_pad_config *VAR_14,
         struct v4l2_subdev_format *VAR_15)
{
 struct prp_priv *VAR_16 = FUNC_6(VAR_13);
 struct v4l2_mbus_framefmt *VAR_17, *VAR_18;
 const struct imx_media_pixfmt *VAR_19;
 int VAR_20 = 0;
 u32 VAR_21;

 if (VAR_15->pad >= VAR_8)
  return -VAR_2;

 FUNC_4(&VAR_16->lock);

 if (VAR_16->stream_count > 0) {
  VAR_20 = -VAR_1;
  goto out;
 }

 VAR_18 = FUNC_0(VAR_16, VAR_14, 130, VAR_15->which);

 switch (VAR_15->pad) {
 case 130:
  FUNC_7(&VAR_15->format.width, VAR_7, VAR_5,
          VAR_12, &VAR_15->format.height,
          VAR_6, VAR_4, VAR_3, VAR_9);

  VAR_19 = FUNC_2(VAR_15->format.code,
            VAR_0);
  if (!VAR_19) {
   FUNC_1(&VAR_21, 0, VAR_0);
   VAR_19 = FUNC_2(VAR_21, VAR_0);
   VAR_15->format.code = VAR_19->codes[0];
  }

  if (VAR_15->format.field == VAR_10)
   VAR_15->format.field = VAR_11;
  break;
 case 129:
 case 128:

  VAR_15->format = *VAR_18;
  break;
 }

 FUNC_3(&VAR_15->format, 1);

 VAR_17 = FUNC_0(VAR_16, VAR_14, VAR_15->pad, VAR_15->which);
 *VAR_17 = VAR_15->format;
out:
 FUNC_5(&VAR_16->lock);
 return VAR_20;
}
