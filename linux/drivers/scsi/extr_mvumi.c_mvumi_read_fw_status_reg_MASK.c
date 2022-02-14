
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hba {TYPE_1__* regs; } ;
struct TYPE_2__ {int arm_to_pciea_drbl_reg; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct mvumi_hba *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_0(VAR_0->regs->arm_to_pciea_drbl_reg);
 if (VAR_1)
  FUNC_1(VAR_1, VAR_0->regs->arm_to_pciea_drbl_reg);
 return VAR_1;
}
