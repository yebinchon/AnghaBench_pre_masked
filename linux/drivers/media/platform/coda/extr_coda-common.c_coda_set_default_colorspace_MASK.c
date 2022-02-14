
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_pix_format {scalar_t__ pixelformat; int width; int height; int colorspace; int quantization; int ycbcr_enc; int xfer_func; } ;
typedef enum v4l2_colorspace { ____Placeholder_v4l2_colorspace } v4l2_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(struct v4l2_pix_format *VAR_7)
{
 enum v4l2_colorspace VAR_8;

 if (VAR_7->pixelformat == VAR_3)
  VAR_8 = VAR_0;
 else if (VAR_7->width <= 720 && VAR_7->height <= 576)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_1;

 VAR_7->colorspace = VAR_8;
 VAR_7->xfer_func = VAR_5;
 VAR_7->ycbcr_enc = VAR_6;
 VAR_7->quantization = VAR_4;
}
