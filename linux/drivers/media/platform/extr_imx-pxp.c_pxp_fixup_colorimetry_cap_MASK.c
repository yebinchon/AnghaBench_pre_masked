
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pxp_ctx {int colorspace; TYPE_2__* q_data; } ;
typedef enum v4l2_ycbcr_encoding { ____Placeholder_v4l2_ycbcr_encoding } v4l2_ycbcr_encoding ;
typedef enum v4l2_quantization { ____Placeholder_v4l2_quantization } v4l2_quantization ;
struct TYPE_4__ {int ycbcr_enc; int quant; TYPE_1__* fmt; } ;
struct TYPE_3__ {int fourcc; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct pxp_ctx *VAR_1, u32 VAR_2,
     enum v4l2_ycbcr_encoding *VAR_3,
     enum v4l2_quantization *VAR_4)
{
 bool VAR_5 = FUNC_2(VAR_2);

 if (FUNC_2(VAR_1->q_data[VAR_0].fmt->fourcc) ==
     VAR_5) {




  *VAR_3 = VAR_1->q_data[VAR_0].ycbcr_enc;
  *VAR_4 = VAR_1->q_data[VAR_0].quant;
 } else {
  *VAR_3 = FUNC_1(VAR_1->colorspace);
  *VAR_4 = FUNC_0(!VAR_5,
             VAR_1->colorspace,
             *VAR_3);
 }
}
