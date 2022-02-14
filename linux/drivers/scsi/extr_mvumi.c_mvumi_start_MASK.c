
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hw_regs {unsigned int int_drbl_int_mask; unsigned int int_dl_cpu2pciea; int enpointa_mask_reg; int arm_to_pciea_mask_reg; int arm_to_pciea_drbl_reg; } ;
struct mvumi_hba {struct mvumi_hw_regs* regs; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct mvumi_hba*) ;

__attribute__((used)) static unsigned char FUNC_4(struct mvumi_hba *VAR_0)
{
 unsigned int VAR_1;
 struct mvumi_hw_regs *VAR_2 = VAR_0->regs;


 VAR_1 = FUNC_0(VAR_2->arm_to_pciea_drbl_reg);
 FUNC_1(VAR_1, VAR_2->arm_to_pciea_drbl_reg);

 FUNC_1(VAR_2->int_drbl_int_mask, VAR_2->arm_to_pciea_mask_reg);
 VAR_1 = FUNC_0(VAR_2->enpointa_mask_reg) | VAR_2->int_dl_cpu2pciea;
 FUNC_1(VAR_1, VAR_2->enpointa_mask_reg);
 FUNC_2(100);
 if (FUNC_3(VAR_0))
  return -1;

 return 0;
}
