
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int code; int xfer_func; int colorspace; int height; int width; } ;
struct v4l2_subdev_format {int pad; TYPE_1__ format; int which; } ;
struct v4l2_mbus_framefmt {int xfer_func; int colorspace; int code; int height; int width; } ;
struct imx_media_pixfmt {int * codes; } ;
struct imx7_csi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct v4l2_mbus_framefmt* FUNC_0 (struct imx7_csi*,struct v4l2_subdev_pad_config*,int,int ) ;
 int FUNC_1 (int *,int ,int ,int) ;
 struct imx_media_pixfmt* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(struct imx7_csi *VAR_2,
       struct v4l2_subdev_pad_config *VAR_3,
       struct v4l2_subdev_format *VAR_4,
       const struct imx_media_pixfmt **VAR_5)
{
 const struct imx_media_pixfmt *VAR_6;
 struct v4l2_mbus_framefmt *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_0(VAR_2, VAR_3, 129,
         VAR_4->which);
 if (!VAR_7)
  return -VAR_1;

 switch (VAR_4->pad) {
 case 128:
  VAR_6 = FUNC_2(VAR_7->code, VAR_0,
         1);

  VAR_4->format.width = VAR_7->width;
  VAR_4->format.height = VAR_7->height;
  VAR_4->format.code = VAR_7->code;
  *VAR_5 = VAR_6;

  VAR_4->format.colorspace = VAR_7->colorspace;
  VAR_4->format.xfer_func = VAR_7->xfer_func;
  break;
 case 129:
  *VAR_5 = FUNC_2(VAR_4->format.code,
       VAR_0, 1);
  if (!*VAR_5) {
   FUNC_1(&VAR_8, 0, VAR_0, 0);
   *VAR_5 = FUNC_2(VAR_8, VAR_0,
        0);
   VAR_4->format.code = (*VAR_5)->codes[0];
  }
  break;
 default:
  return -VAR_1;
 }

 FUNC_3(&VAR_4->format, 0);

 return 0;
}
