
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_7__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; int type; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct cedrus_ctx {TYPE_2__ dst_fmt; TYPE_3__ src_fmt; TYPE_1__ fh; } ;


 int VAR_0 ;
 struct cedrus_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 struct vb2_queue* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
    struct v4l2_format *VAR_3)
{
 struct cedrus_ctx *VAR_4 = FUNC_0(VAR_1);
 struct vb2_queue *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4->fh.m2m_ctx, VAR_3->type);
 if (FUNC_3(VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_4->src_fmt = VAR_3->fmt.pix;


 VAR_4->dst_fmt.colorspace = VAR_3->fmt.pix.colorspace;
 VAR_4->dst_fmt.xfer_func = VAR_3->fmt.pix.xfer_func;
 VAR_4->dst_fmt.ycbcr_enc = VAR_3->fmt.pix.ycbcr_enc;
 VAR_4->dst_fmt.quantization = VAR_3->fmt.pix.quantization;

 return 0;
}
