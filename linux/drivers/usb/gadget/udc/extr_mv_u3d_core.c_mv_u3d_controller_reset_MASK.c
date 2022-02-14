
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_u3d {int ep_context_dma; TYPE_1__* op_regs; int dev; } ;
struct TYPE_2__ {int dcbaaph; int dcbaapl; int usbcmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mv_u3d *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;


 VAR_7 = FUNC_2(&VAR_5->op_regs->usbcmd);
 VAR_7 &= ~VAR_3;
 FUNC_3(VAR_7, &VAR_5->op_regs->usbcmd);


 FUNC_3(VAR_2, &VAR_5->op_regs->usbcmd);


 VAR_6 = FUNC_0(VAR_4);
 while (FUNC_2(&VAR_5->op_regs->usbcmd) & VAR_2) {
  if (VAR_6 == 0) {
   FUNC_1(VAR_5->dev,
    "Wait for RESET completed TIMEOUT\n");
   return -VAR_0;
  }
  VAR_6--;
  FUNC_4(VAR_1);
 }


 FUNC_3(VAR_5->ep_context_dma, &VAR_5->op_regs->dcbaapl);
 FUNC_3(0, &VAR_5->op_regs->dcbaaph);

 return 0;
}
