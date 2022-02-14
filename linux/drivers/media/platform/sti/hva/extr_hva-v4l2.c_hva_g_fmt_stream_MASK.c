
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizeimage; scalar_t__ bytesperline; int pixelformat; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int field; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct hva_streaminfo {int streamformat; int height; int width; } ;
struct hva_ctx {int max_stream_size; int quantization; int ycbcr_enc; int xfer_func; int colorspace; struct hva_streaminfo streaminfo; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 struct hva_ctx* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct hva_ctx *VAR_4 = FUNC_0(VAR_1->private_data);
 struct hva_streaminfo *VAR_5 = &VAR_4->streaminfo;

 VAR_3->fmt.pix.width = VAR_5->width;
 VAR_3->fmt.pix.height = VAR_5->height;
 VAR_3->fmt.pix.field = VAR_0;
 VAR_3->fmt.pix.colorspace = VAR_4->colorspace;
 VAR_3->fmt.pix.xfer_func = VAR_4->xfer_func;
 VAR_3->fmt.pix.ycbcr_enc = VAR_4->ycbcr_enc;
 VAR_3->fmt.pix.quantization = VAR_4->quantization;
 VAR_3->fmt.pix.pixelformat = VAR_5->streamformat;
 VAR_3->fmt.pix.bytesperline = 0;
 VAR_3->fmt.pix.sizeimage = VAR_4->max_stream_size;

 return 0;
}
