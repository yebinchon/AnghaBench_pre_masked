
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net2280 {int wakeup_enable; int softconnect; TYPE_3__* usb; TYPE_2__* regs; TYPE_1__* epregs; scalar_t__ bug7734_patched; } ;
struct TYPE_6__ {int usbctl; int stdrsp; } ;
struct TYPE_5__ {int pciirqenb1; int pciirqenb0; } ;
struct TYPE_4__ {int ep_rsp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct net2280 *VAR_17)
{

 if (VAR_17->bug7734_patched)
  FUNC_2(FUNC_0(VAR_0) |
         FUNC_0(VAR_9),
         &VAR_17->epregs[0].ep_rsp);







 FUNC_2(FUNC_0(VAR_10) |
        FUNC_0(VAR_11) |
        FUNC_0(VAR_12) |
        FUNC_0(VAR_8) |
        FUNC_0(VAR_4) |
        FUNC_0(VAR_3),
  &VAR_17->usb->stdrsp);
 VAR_17->wakeup_enable = 1;
 FUNC_2(FUNC_0(VAR_15) |
        (VAR_17->softconnect << VAR_14) |
        FUNC_0(VAR_1),
        &VAR_17->usb->usbctl);


 FUNC_2(FUNC_0(VAR_7) |
        FUNC_0(VAR_2),
        &VAR_17->regs->pciirqenb0);
 FUNC_2(FUNC_0(VAR_5) |
        FUNC_0(VAR_6) |
        FUNC_0(VAR_13) |
        FUNC_0(VAR_16),
        &VAR_17->regs->pciirqenb1);


 (void)FUNC_1(&VAR_17->usb->usbctl);
}
