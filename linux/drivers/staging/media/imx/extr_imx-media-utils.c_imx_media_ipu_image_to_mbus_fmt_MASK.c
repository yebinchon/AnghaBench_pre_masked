
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int code; int height; int width; } ;
struct TYPE_2__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int height; int width; int pixelformat; } ;
struct ipu_image {TYPE_1__ pix; } ;
struct imx_media_pixfmt {int * codes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct imx_media_pixfmt* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct v4l2_mbus_framefmt*,int ,int) ;

int FUNC_2(struct v4l2_mbus_framefmt *VAR_2,
        struct ipu_image *VAR_3)
{
 const struct imx_media_pixfmt *VAR_4;

 VAR_4 = FUNC_0(VAR_3->pix.pixelformat, VAR_0, 1);
 if (!VAR_4)
  return -VAR_1;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->width = VAR_3->pix.width;
 VAR_2->height = VAR_3->pix.height;
 VAR_2->code = VAR_4->codes[0];
 VAR_2->field = VAR_3->pix.field;
 VAR_2->colorspace = VAR_3->pix.colorspace;
 VAR_2->xfer_func = VAR_3->pix.xfer_func;
 VAR_2->ycbcr_enc = VAR_3->pix.ycbcr_enc;
 VAR_2->quantization = VAR_3->pix.quantization;

 return 0;
}
