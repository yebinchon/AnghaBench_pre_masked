
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vim2m_q_data {int width; int sizeimage; TYPE_2__* fmt; int height; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct vim2m_ctx {int quant; int ycbcr_enc; int xfer_func; int colorspace; TYPE_1__ fh; } ;
struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int width; int bytesperline; int quantization; int ycbcr_enc; int xfer_func; int colorspace; int sizeimage; int pixelformat; int field; int height; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct TYPE_6__ {int depth; int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vim2m_q_data* FUNC_0 (struct vim2m_ctx*,int ) ;
 struct vb2_queue* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vim2m_ctx *VAR_2, struct v4l2_format *VAR_3)
{
 struct vb2_queue *VAR_4;
 struct vim2m_q_data *VAR_5;

 VAR_4 = FUNC_1(VAR_2->fh.m2m_ctx, VAR_3->type);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_3->type);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->fmt.pix.width = VAR_5->width;
 VAR_3->fmt.pix.height = VAR_5->height;
 VAR_3->fmt.pix.field = VAR_1;
 VAR_3->fmt.pix.pixelformat = VAR_5->fmt->fourcc;
 VAR_3->fmt.pix.bytesperline = (VAR_5->width * VAR_5->fmt->depth) >> 3;
 VAR_3->fmt.pix.sizeimage = VAR_5->sizeimage;
 VAR_3->fmt.pix.colorspace = VAR_2->colorspace;
 VAR_3->fmt.pix.xfer_func = VAR_2->xfer_func;
 VAR_3->fmt.pix.ycbcr_enc = VAR_2->ycbcr_enc;
 VAR_3->fmt.pix.quantization = VAR_2->quant;

 return 0;
}
