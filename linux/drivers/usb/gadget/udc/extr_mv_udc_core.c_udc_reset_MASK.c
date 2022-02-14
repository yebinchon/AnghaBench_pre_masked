
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mv_udc {int ep_dqh_dma; TYPE_3__* op_regs; scalar_t__ force_fs; TYPE_2__* cap_regs; TYPE_1__* dev; } ;
struct TYPE_6__ {int * epctrlx; int * portsc; int eplistaddr; int epsetupstat; int usbmode; int usbcmd; } ;
struct TYPE_5__ {int hcsparams; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct mv_udc *VAR_14)
{
 unsigned int VAR_15;
 u32 VAR_16, VAR_17;


 VAR_16 = FUNC_2(&VAR_14->op_regs->usbcmd);
 VAR_16 &= ~VAR_10;
 FUNC_4(VAR_16, &VAR_14->op_regs->usbcmd);


 FUNC_4(VAR_9, &VAR_14->op_regs->usbcmd);


 VAR_15 = FUNC_0(VAR_8);
 while (FUNC_2(&VAR_14->op_regs->usbcmd) & VAR_9) {
  if (VAR_15 == 0) {
   FUNC_1(&VAR_14->dev->dev,
    "Wait for RESET completed TIMEOUT\n");
   return -VAR_2;
  }
  VAR_15--;
  FUNC_3(VAR_4);
 }


 VAR_16 = FUNC_2(&VAR_14->op_regs->usbmode);
 VAR_16 |= VAR_11;


 VAR_16 |= VAR_12;

 FUNC_4(VAR_16, &VAR_14->op_regs->usbmode);

 FUNC_4(0x0, &VAR_14->op_regs->epsetupstat);


 FUNC_4(VAR_14->ep_dqh_dma & VAR_13,
  &VAR_14->op_regs->eplistaddr);

 VAR_17 = FUNC_2(&VAR_14->op_regs->portsc[0]);
 if (FUNC_2(&VAR_14->cap_regs->hcsparams) & VAR_3)
  VAR_17 &= (~VAR_7 | ~VAR_6);

 if (VAR_14->force_fs)
  VAR_17 |= VAR_5;
 else
  VAR_17 &= (~VAR_5);

 FUNC_4(VAR_17, &VAR_14->op_regs->portsc[0]);

 VAR_16 = FUNC_2(&VAR_14->op_regs->epctrlx[0]);
 VAR_16 &= ~(VAR_1 | VAR_0);
 FUNC_4(VAR_16, &VAR_14->op_regs->epctrlx[0]);

 return 0;
}
