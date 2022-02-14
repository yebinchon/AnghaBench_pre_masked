
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvumi_hw_regs {unsigned int int_dl_cpu2pciea; unsigned int int_comaout; unsigned int int_comaerr; int enpointa_mask_reg; int arm_to_pciea_mask_reg; } ;
struct mvumi_hba {struct mvumi_hw_regs* regs; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct mvumi_hba *VAR_0)
{
 unsigned int VAR_1;
 struct mvumi_hw_regs *VAR_2 = VAR_0->regs;

 FUNC_1(0, VAR_2->arm_to_pciea_mask_reg);
 VAR_1 = FUNC_0(VAR_2->enpointa_mask_reg);
 VAR_1 &= ~(VAR_2->int_dl_cpu2pciea | VAR_2->int_comaout |
       VAR_2->int_comaerr);
 FUNC_1(VAR_1, VAR_2->enpointa_mask_reg);
}
