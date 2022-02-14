
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int sizeimage; int bytesperline; int height; int width; int pixelformat; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; int type; } ;
struct file {int dummy; } ;
struct coda_q_data {int sizeimage; int bytesperline; int height; int width; int fourcc; } ;
struct coda_ctx {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct coda_ctx* FUNC_0 (void*) ;
 struct coda_q_data* FUNC_1 (struct coda_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
        struct v4l2_format *VAR_4)
{
 struct coda_q_data *VAR_5;
 struct coda_ctx *VAR_6 = FUNC_0(VAR_3);

 VAR_5 = FUNC_1(VAR_6, VAR_4->type);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->fmt.pix.field = VAR_1;
 VAR_4->fmt.pix.pixelformat = VAR_5->fourcc;
 VAR_4->fmt.pix.width = VAR_5->width;
 VAR_4->fmt.pix.height = VAR_5->height;
 VAR_4->fmt.pix.bytesperline = VAR_5->bytesperline;

 VAR_4->fmt.pix.sizeimage = VAR_5->sizeimage;
 VAR_4->fmt.pix.colorspace = VAR_6->colorspace;
 VAR_4->fmt.pix.xfer_func = VAR_6->xfer_func;
 VAR_4->fmt.pix.ycbcr_enc = VAR_6->ycbcr_enc;
 VAR_4->fmt.pix.quantization = VAR_6->quantization;

 return 0;
}
