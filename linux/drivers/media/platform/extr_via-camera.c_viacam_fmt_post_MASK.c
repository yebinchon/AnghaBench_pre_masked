
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_format {int bpp; } ;
struct v4l2_pix_format {int bytesperline; int width; int sizeimage; int height; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int field; int pixelformat; } ;


 struct via_format* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_pix_format *VAR_0,
  struct v4l2_pix_format *VAR_1)
{
 struct via_format *VAR_2 = FUNC_0(VAR_0->pixelformat);

 VAR_1->bytesperline = VAR_1->width * VAR_2->bpp;
 VAR_1->sizeimage = VAR_1->height * VAR_1->bytesperline;
 VAR_0->pixelformat = VAR_1->pixelformat;
 VAR_0->field = VAR_1->field;
 VAR_0->bytesperline = 2 * VAR_0->width;
 VAR_0->sizeimage = VAR_0->bytesperline * VAR_0->height;
 VAR_0->colorspace = VAR_1->colorspace;
 VAR_0->ycbcr_enc = VAR_1->ycbcr_enc;
 VAR_0->quantization = VAR_1->quantization;
 VAR_0->xfer_func = VAR_1->xfer_func;
}
