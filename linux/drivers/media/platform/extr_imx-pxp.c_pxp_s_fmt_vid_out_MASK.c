
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int quantization; int ycbcr_enc; int xfer_func; int colorspace; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct pxp_ctx {TYPE_4__* q_data; int xfer_func; int colorspace; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int quant; int ycbcr_enc; TYPE_3__* fmt; } ;
struct TYPE_7__ {int fourcc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct pxp_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (struct pxp_ctx*,int ,int *,int *) ;
 int FUNC_2 (struct pxp_ctx*,struct v4l2_format*) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
        struct v4l2_format *VAR_4)
{
 struct pxp_ctx *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(FUNC_0(VAR_2), VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5->colorspace = VAR_4->fmt.pix.colorspace;
 VAR_5->xfer_func = VAR_4->fmt.pix.xfer_func;
 VAR_5->q_data[VAR_1].ycbcr_enc = VAR_4->fmt.pix.ycbcr_enc;
 VAR_5->q_data[VAR_1].quant = VAR_4->fmt.pix.quantization;

 FUNC_1(VAR_5, VAR_5->q_data[VAR_0].fmt->fourcc,
      &VAR_5->q_data[VAR_0].ycbcr_enc,
      &VAR_5->q_data[VAR_0].quant);

 return 0;
}
