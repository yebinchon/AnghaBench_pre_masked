
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int height; int field; int width; int code; int xfer_func; int colorspace; } ;
struct v4l2_subdev_format {int pad; TYPE_1__ format; int which; } ;
struct v4l2_rect {int height; int width; int top; int left; } ;
struct v4l2_mbus_framefmt {int xfer_func; int colorspace; int code; } ;
struct v4l2_fwnode_endpoint {int dummy; } ;
struct imx_media_pixfmt {int * codes; int cs; } ;
struct csi_priv {int const active_output_pad; } ;





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
 struct v4l2_mbus_framefmt* FUNC_0 (struct csi_priv*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_1 (struct csi_priv*,struct v4l2_rect*,struct v4l2_subdev_pad_config*,TYPE_1__*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_2 (struct csi_priv*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;
 struct imx_media_pixfmt* FUNC_5 (int ,int ) ;
 struct imx_media_pixfmt* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct v4l2_fwnode_endpoint*,struct v4l2_mbus_framefmt*,struct imx_media_pixfmt const*) ;
 int FUNC_9 (int *,int ,int ,int ,int*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct csi_priv *VAR_12,
   struct v4l2_fwnode_endpoint *VAR_13,
   struct v4l2_subdev_pad_config *VAR_14,
   struct v4l2_subdev_format *VAR_15,
   struct v4l2_rect *VAR_16,
   struct v4l2_rect *VAR_17,
   const struct imx_media_pixfmt **VAR_18)
{
 const struct imx_media_pixfmt *VAR_19;
 struct v4l2_mbus_framefmt *VAR_20;
 u32 VAR_21;

 VAR_20 = FUNC_0(VAR_12, VAR_14, 130, VAR_15->which);

 switch (VAR_15->pad) {
 case 129:
 case 128:
  VAR_19 = FUNC_6(VAR_20->code,
        VAR_0, 1);

  VAR_15->format.width = VAR_17->width;
  VAR_15->format.height = VAR_17->height;

  if (FUNC_8(VAR_13, VAR_20, VAR_19)) {
   VAR_15->format.code = VAR_20->code;
   *VAR_18 = VAR_19;
  } else {
   u32 VAR_22 = (VAR_19->cs == VAR_4) ?
    VAR_2 : VAR_1;

   *VAR_18 = FUNC_5(VAR_15->format.code,
       VAR_22);
   if (!*VAR_18) {
    FUNC_3(&VAR_21, 0, VAR_22);
    *VAR_18 = FUNC_5(VAR_21, VAR_22);
    VAR_15->format.code = (*VAR_18)->codes[0];
   }
  }

  FUNC_2(VAR_12, VAR_14, VAR_15);


  VAR_15->format.colorspace = VAR_20->colorspace;
  VAR_15->format.xfer_func = VAR_20->xfer_func;

  break;
 case 130:
  FUNC_9(&VAR_15->format.width, VAR_8, VAR_6,
          VAR_11, &VAR_15->format.height,
          VAR_7, VAR_5, VAR_3, VAR_9);

  *VAR_18 = FUNC_6(VAR_15->format.code,
       VAR_0, 1);
  if (!*VAR_18) {
   FUNC_4(&VAR_21, 0,
         VAR_0, 0);
   *VAR_18 = FUNC_6(VAR_21,
       VAR_0, 0);
   VAR_15->format.code = (*VAR_18)->codes[0];
  }

  FUNC_2(VAR_12, VAR_14, VAR_15);


  VAR_16->left = 0;
  VAR_16->top = 0;
  VAR_16->width = VAR_15->format.width;
  VAR_16->height = VAR_15->format.height;
  if (VAR_15->format.field == VAR_10)
   VAR_16->height *= 2;
  FUNC_1(VAR_12, VAR_16, VAR_14, &VAR_15->format, VAR_13);
  VAR_17->left = 0;
  VAR_17->top = 0;
  VAR_17->width = VAR_16->width;
  VAR_17->height = VAR_16->height;

  break;
 }

 FUNC_7(&VAR_15->format,
   VAR_12->active_output_pad == 129);
}
