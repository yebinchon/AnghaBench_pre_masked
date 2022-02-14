
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mvumi_hw_regs {int arm_to_pciea_msg1; int pciea_to_arm_drbl_reg; int enpointa_mask_reg; } ;
struct mvumi_hba {TYPE_1__* pdev; struct mvumi_hw_regs* regs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned long VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct mvumi_hba *VAR_7)
{
 struct mvumi_hw_regs *VAR_8 = VAR_7->regs;
 u32 VAR_9;
 unsigned long VAR_10;
 VAR_10 = VAR_6;

 FUNC_2(0, VAR_8->enpointa_mask_reg);
 VAR_9 = FUNC_1(VAR_8->arm_to_pciea_msg1);
 while (VAR_9 != VAR_3) {
  FUNC_2(VAR_0, VAR_8->pciea_to_arm_drbl_reg);
  if (FUNC_5(VAR_6, VAR_10 + VAR_2 * VAR_4)) {
   FUNC_0(&VAR_7->pdev->dev,
    "FW reset failed [0x%x].\n", VAR_9);
   return VAR_1;
  }

  FUNC_3(500);
  FUNC_4();
  VAR_9 = FUNC_1(VAR_8->arm_to_pciea_msg1);
 }

 return VAR_5;
}
