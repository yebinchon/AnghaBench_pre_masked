
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int height; int bytesperline; int sizeimage; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixelformat; int field; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int height; int stride; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int pixfmt; int width; } ;


 int VAR_0 ;
 struct cobalt_stream* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
  struct v4l2_format *VAR_3)
{
 struct cobalt_stream *VAR_4 = FUNC_0(VAR_1);
 struct v4l2_pix_format *VAR_5 = &VAR_3->fmt.pix;

 VAR_5->width = VAR_4->width;
 VAR_5->height = VAR_4->height;
 VAR_5->bytesperline = VAR_4->stride;
 VAR_5->field = VAR_0;
 VAR_5->pixelformat = VAR_4->pixfmt;
 VAR_5->colorspace = VAR_4->colorspace;
 VAR_5->xfer_func = VAR_4->xfer_func;
 VAR_5->ycbcr_enc = VAR_4->ycbcr_enc;
 VAR_5->quantization = VAR_4->quantization;
 VAR_5->sizeimage = VAR_5->bytesperline * VAR_5->height;

 return 0;
}
