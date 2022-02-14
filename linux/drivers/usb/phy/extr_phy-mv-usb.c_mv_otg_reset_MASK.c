
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_otg {TYPE_2__* op_regs; TYPE_1__* pdev; } ;
struct TYPE_4__ {int usbsts; int usbintr; int usbcmd; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct mv_otg *VAR_3)
{
 unsigned int VAR_4;
 u32 VAR_5;


 VAR_5 = FUNC_1(&VAR_3->op_regs->usbcmd);
 VAR_5 &= ~VAR_2;
 FUNC_3(VAR_5, &VAR_3->op_regs->usbcmd);


 FUNC_3(VAR_1, &VAR_3->op_regs->usbcmd);

 VAR_4 = 500;
 while (FUNC_1(&VAR_3->op_regs->usbcmd) & VAR_1) {
  if (VAR_4 == 0) {
   FUNC_0(&VAR_3->pdev->dev,
    "Wait for RESET completed TIMEOUT\n");
   return -VAR_0;
  }
  VAR_4--;
  FUNC_2(20);
 }

 FUNC_3(0x0, &VAR_3->op_regs->usbintr);
 VAR_5 = FUNC_1(&VAR_3->op_regs->usbsts);
 FUNC_3(VAR_5, &VAR_3->op_regs->usbsts);

 return 0;
}
