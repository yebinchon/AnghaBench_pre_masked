
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int quantization; int ycbcr_enc; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct pxp_ctx {TYPE_1__* q_data; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int quant; int ycbcr_enc; } ;


 size_t VAR_0 ;
 struct pxp_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (struct pxp_ctx*,struct v4l2_format*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
        struct v4l2_format *VAR_3)
{
 struct pxp_ctx *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(FUNC_0(VAR_1), VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4->q_data[VAR_0].ycbcr_enc = VAR_3->fmt.pix.ycbcr_enc;
 VAR_4->q_data[VAR_0].quant = VAR_3->fmt.pix.quantization;

 return 0;
}
