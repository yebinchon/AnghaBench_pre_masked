
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; scalar_t__ bytesperline; int pixelformat; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int height; int width; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct allegro_channel {int sizeimage_encoded; int codec; int xfer_func; int quantization; int ycbcr_enc; int colorspace; int height; int width; } ;


 int VAR_0 ;
 struct allegro_channel* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
     struct v4l2_format *VAR_3)
{
 struct allegro_channel *VAR_4 = FUNC_0(VAR_2);

 VAR_3->fmt.pix.field = VAR_0;
 VAR_3->fmt.pix.width = VAR_4->width;
 VAR_3->fmt.pix.height = VAR_4->height;

 VAR_3->fmt.pix.colorspace = VAR_4->colorspace;
 VAR_3->fmt.pix.ycbcr_enc = VAR_4->ycbcr_enc;
 VAR_3->fmt.pix.quantization = VAR_4->quantization;
 VAR_3->fmt.pix.xfer_func = VAR_4->xfer_func;

 VAR_3->fmt.pix.pixelformat = VAR_4->codec;
 VAR_3->fmt.pix.bytesperline = 0;
 VAR_3->fmt.pix.sizeimage = VAR_4->sizeimage_encoded;

 return 0;
}
