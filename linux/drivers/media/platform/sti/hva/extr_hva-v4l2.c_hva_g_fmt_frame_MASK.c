
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; int bytesperline; int pixelformat; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct hva_frameinfo {int size; int pixelformat; int aligned_width; int height; int width; } ;
struct hva_ctx {int quantization; int ycbcr_enc; int xfer_func; int colorspace; struct hva_frameinfo frameinfo; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 struct hva_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct hva_ctx *VAR_4 = FUNC_0(VAR_1->private_data);
 struct hva_frameinfo *VAR_5 = &VAR_4->frameinfo;

 VAR_3->fmt.pix.width = VAR_5->width;
 VAR_3->fmt.pix.height = VAR_5->height;
 VAR_3->fmt.pix.field = VAR_0;
 VAR_3->fmt.pix.colorspace = VAR_4->colorspace;
 VAR_3->fmt.pix.xfer_func = VAR_4->xfer_func;
 VAR_3->fmt.pix.ycbcr_enc = VAR_4->ycbcr_enc;
 VAR_3->fmt.pix.quantization = VAR_4->quantization;
 VAR_3->fmt.pix.pixelformat = VAR_5->pixelformat;
 VAR_3->fmt.pix.bytesperline = FUNC_1(VAR_5->aligned_width,
            VAR_5->pixelformat);
 VAR_3->fmt.pix.sizeimage = VAR_5->size;

 return 0;
}
