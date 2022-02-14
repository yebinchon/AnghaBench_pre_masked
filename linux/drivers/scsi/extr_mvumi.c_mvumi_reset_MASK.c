
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hw_regs {int pciea_to_arm_drbl_reg; int arm_to_pciea_msg1; int enpointa_mask_reg; } ;
struct mvumi_hba {struct mvumi_hw_regs* regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mvumi_hba *VAR_2)
{
 struct mvumi_hw_regs *VAR_3 = VAR_2->regs;

 FUNC_1(0, VAR_3->enpointa_mask_reg);
 if (FUNC_0(VAR_3->arm_to_pciea_msg1) != VAR_1)
  return;

 FUNC_1(VAR_0, VAR_3->pciea_to_arm_drbl_reg);
}
