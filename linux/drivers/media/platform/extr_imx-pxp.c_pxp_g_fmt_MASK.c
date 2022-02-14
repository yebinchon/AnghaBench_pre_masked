
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; int sizeimage; int bytesperline; int pixelformat; int field; int height; int width; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct pxp_q_data {int quant; int ycbcr_enc; int sizeimage; int bytesperline; TYPE_2__* fmt; int height; int width; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct pxp_ctx {int xfer_func; int colorspace; TYPE_1__ fh; } ;
struct TYPE_6__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pxp_q_data* FUNC_0 (struct pxp_ctx*,int ) ;
 struct vb2_queue* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pxp_ctx *VAR_2, struct v4l2_format *VAR_3)
{
 struct vb2_queue *VAR_4;
 struct pxp_q_data *VAR_5;

 VAR_4 = FUNC_1(VAR_2->fh.m2m_ctx, VAR_3->type);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3->type);

 VAR_3->fmt.pix.width = VAR_5->width;
 VAR_3->fmt.pix.height = VAR_5->height;
 VAR_3->fmt.pix.field = VAR_1;
 VAR_3->fmt.pix.pixelformat = VAR_5->fmt->fourcc;
 VAR_3->fmt.pix.bytesperline = VAR_5->bytesperline;
 VAR_3->fmt.pix.sizeimage = VAR_5->sizeimage;
 VAR_3->fmt.pix.colorspace = VAR_2->colorspace;
 VAR_3->fmt.pix.xfer_func = VAR_2->xfer_func;
 VAR_3->fmt.pix.ycbcr_enc = VAR_5->ycbcr_enc;
 VAR_3->fmt.pix.quantization = VAR_5->quant;

 return 0;
}
