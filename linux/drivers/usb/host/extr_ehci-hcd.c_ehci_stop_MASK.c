
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct ehci_hcd {int amd_pll_fix; TYPE_1__* regs; int lock; int hrtimer; scalar_t__ enabled_hrtimer_events; } ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (struct ehci_hcd*,char*,int ) ;
 int FUNC_1 (struct ehci_hcd*,char*) ;
 int FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (struct ehci_hcd*) ;
 int FUNC_4 (struct ehci_hcd*,int *) ;
 int FUNC_5 (struct ehci_hcd*) ;
 int FUNC_6 (struct ehci_hcd*) ;
 int FUNC_7 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ehci_hcd*) ;
 int FUNC_11 (struct ehci_hcd*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15 (struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_8 (VAR_0);

 FUNC_1 (VAR_1, "stop\n");



 FUNC_12(&VAR_1->lock);
 VAR_1->enabled_hrtimer_events = 0;
 FUNC_13(&VAR_1->lock);

 FUNC_3(VAR_1);
 FUNC_6(VAR_1);
 FUNC_5 (VAR_1);

 FUNC_9(&VAR_1->hrtimer);
 FUNC_11(VAR_1);
 FUNC_10 (VAR_1);


 FUNC_12 (&VAR_1->lock);
 FUNC_7(VAR_1);
 FUNC_13 (&VAR_1->lock);
 FUNC_2 (VAR_1);

 if (VAR_1->amd_pll_fix == 1)
  FUNC_14();

 FUNC_0 (VAR_1, "ehci_stop completed",
      FUNC_4(VAR_1, &VAR_1->regs->status));
}
