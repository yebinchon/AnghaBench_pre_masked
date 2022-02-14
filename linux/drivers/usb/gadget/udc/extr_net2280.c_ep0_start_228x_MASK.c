
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net2280 {int softconnect; TYPE_3__* usb; TYPE_2__* regs; TYPE_1__* epregs; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct net2280 *VAR_22)
{
 FUNC_2(FUNC_0(VAR_1) |
  FUNC_0(VAR_2) |
  FUNC_0(VAR_0),
  &VAR_22->epregs[0].ep_rsp);







 FUNC_2(FUNC_0(VAR_17) |
  FUNC_0(VAR_16) |
  FUNC_0(VAR_3) |
  FUNC_0(VAR_5) |
  FUNC_0(VAR_6),
  &VAR_22->usb->stdrsp);
 FUNC_2(FUNC_0(VAR_20) |
  FUNC_0(VAR_14) |
  FUNC_0(VAR_11) |
  (VAR_22->softconnect << VAR_19) |
  FUNC_0(VAR_13),
  &VAR_22->usb->usbctl);


 FUNC_2(FUNC_0(VAR_15) |
  FUNC_0(VAR_4),
  &VAR_22->regs->pciirqenb0);
 FUNC_2(FUNC_0(VAR_7) |
  FUNC_0(VAR_8) |
  FUNC_0(VAR_10) |
  FUNC_0(VAR_9) |
  FUNC_0(VAR_21) |
  FUNC_0(VAR_12) |
  FUNC_0(VAR_18),
  &VAR_22->regs->pciirqenb1);


 (void) FUNC_1(&VAR_22->usb->usbctl);
}
