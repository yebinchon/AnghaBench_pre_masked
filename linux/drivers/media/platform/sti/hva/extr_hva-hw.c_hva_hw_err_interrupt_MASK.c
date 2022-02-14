
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {scalar_t__ regs; void* hec_mif_err_reg; void* emi_err_reg; void* lmi_err_reg; void* sfl_reg; void* sts_reg; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_7, void *VAR_8)
{
 struct hva_dev *VAR_9 = VAR_8;


 VAR_9->sts_reg = FUNC_0(VAR_9->regs + VAR_0);
 VAR_9->sfl_reg = FUNC_0(VAR_9->regs + VAR_5);


 VAR_9->lmi_err_reg = FUNC_0(VAR_9->regs + VAR_4);
 VAR_9->emi_err_reg = FUNC_0(VAR_9->regs + VAR_1);
 VAR_9->hec_mif_err_reg = FUNC_0(VAR_9->regs +
          VAR_2);


 FUNC_1(0x1, VAR_9->regs + VAR_3);

 return VAR_6;
}
