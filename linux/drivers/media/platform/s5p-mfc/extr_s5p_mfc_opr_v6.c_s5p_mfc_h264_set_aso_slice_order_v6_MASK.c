
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {scalar_t__ e_h264_aso_slice_order_0; } ;
struct s5p_mfc_h264_enc_params {int * aso_slice_order; scalar_t__ aso; } ;
struct TYPE_2__ {struct s5p_mfc_h264_enc_params h264; } ;
struct s5p_mfc_enc_params {TYPE_1__ codec; } ;
struct s5p_mfc_dev {struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {struct s5p_mfc_enc_params enc_params; struct s5p_mfc_dev* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_ctx *VAR_0)
{
 struct s5p_mfc_dev *VAR_1 = VAR_0->dev;
 const struct s5p_mfc_regs *VAR_2 = VAR_1->mfc_regs;
 struct s5p_mfc_enc_params *VAR_3 = &VAR_0->enc_params;
 struct s5p_mfc_h264_enc_params *VAR_4 = &VAR_3->codec.h264;
 int VAR_5;

 if (VAR_4->aso) {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->aso_slice_order); VAR_5++) {
   FUNC_1(VAR_4->aso_slice_order[VAR_5],
    VAR_2->e_h264_aso_slice_order_0 + VAR_5 * 4);
  }
 }
 return 0;
}
