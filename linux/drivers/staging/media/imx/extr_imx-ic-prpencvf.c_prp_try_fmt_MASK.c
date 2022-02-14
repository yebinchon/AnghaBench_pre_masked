
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int field; int height; int width; int xfer_func; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; TYPE_1__ format; int which; } ;
struct v4l2_mbus_framefmt {int xfer_func; int colorspace; int field; } ;
struct prp_priv {int rot_mode; } ;
struct imx_media_pixfmt {int * codes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct prp_priv*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct imx_media_pixfmt* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,struct v4l2_mbus_framefmt*,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct prp_priv *VAR_12,
   struct v4l2_subdev_pad_config *VAR_13,
   struct v4l2_subdev_format *VAR_14,
   const struct imx_media_pixfmt **VAR_15)
{
 struct v4l2_mbus_framefmt *VAR_16;

 *VAR_15 = FUNC_2(VAR_14->format.code, VAR_0);
 if (!*VAR_15) {
  u32 VAR_17;

  FUNC_1(&VAR_17, 0, VAR_0);
  *VAR_15 = FUNC_2(VAR_17, VAR_0);
  VAR_14->format.code = (*VAR_15)->codes[0];
 }

 VAR_16 = FUNC_0(VAR_12, VAR_13, VAR_6, VAR_14->which);

 if (VAR_14->pad == VAR_7) {
  VAR_14->format.field = VAR_16->field;

  FUNC_4(&VAR_14->format, VAR_16,
           VAR_12->rot_mode);


  VAR_14->format.colorspace = VAR_16->colorspace;
  VAR_14->format.xfer_func = VAR_16->xfer_func;
 } else {
  FUNC_5(&VAR_14->format.width,
          VAR_5, VAR_3, VAR_11,
          &VAR_14->format.height,
          VAR_4, VAR_2, VAR_1,
          VAR_8);

  if (VAR_14->format.field == VAR_9)
   VAR_14->format.field = VAR_10;
 }

 FUNC_3(&VAR_14->format, 1);
}
