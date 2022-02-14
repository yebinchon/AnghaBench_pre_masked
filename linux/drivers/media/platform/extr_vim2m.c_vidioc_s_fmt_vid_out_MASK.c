
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vim2m_ctx {int quant; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_3__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 struct vim2m_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vim2m_ctx*,struct v4l2_format*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
    struct v4l2_format *VAR_2)
{
 struct vim2m_ctx *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(FUNC_0(VAR_0), VAR_2);
 if (!VAR_4) {
  VAR_3->colorspace = VAR_2->fmt.pix.colorspace;
  VAR_3->xfer_func = VAR_2->fmt.pix.xfer_func;
  VAR_3->ycbcr_enc = VAR_2->fmt.pix.ycbcr_enc;
  VAR_3->quant = VAR_2->fmt.pix.quantization;
 }
 return VAR_4;
}
