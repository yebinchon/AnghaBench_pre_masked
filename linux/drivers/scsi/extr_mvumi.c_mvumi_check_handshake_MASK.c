
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvumi_hba {unsigned int fw_state; TYPE_2__* pdev; TYPE_1__* regs; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int arm_to_pciea_msg1; int pciea_to_arm_drbl_reg; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_4 (struct mvumi_hba*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static unsigned char FUNC_8(struct mvumi_hba *VAR_8)
{
 unsigned int VAR_9;
 unsigned long VAR_10;

 VAR_10 = VAR_7;
 VAR_9 = FUNC_2(VAR_8->regs->arm_to_pciea_msg1);
 while ((VAR_9 != VAR_5) && (VAR_9 != VAR_4)) {
  if (VAR_9 != VAR_5)
   FUNC_3(VAR_0,
     VAR_8->regs->pciea_to_arm_drbl_reg);
  if (FUNC_6(VAR_7, VAR_10 + VAR_1 * VAR_6)) {
   FUNC_1(&VAR_8->pdev->dev,
    "invalid signature [0x%x].\n", VAR_9);
   return -1;
  }
  FUNC_7(1000, 2000);
  FUNC_5();
  VAR_9 = FUNC_2(VAR_8->regs->arm_to_pciea_msg1);
 }

 VAR_8->fw_state = VAR_3;
 FUNC_0(&VAR_8->pdev->dev, "start firmware handshake...\n");
 do {
  if (FUNC_4(VAR_8)) {
   FUNC_1(&VAR_8->pdev->dev,
     "handshake failed at state 0x%x.\n",
      VAR_8->fw_state);
   return -1;
  }
 } while (VAR_8->fw_state != VAR_2);

 FUNC_0(&VAR_8->pdev->dev, "firmware handshake done\n");

 return 0;
}
