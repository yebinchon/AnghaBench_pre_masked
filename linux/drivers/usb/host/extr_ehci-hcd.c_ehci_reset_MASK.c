
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {scalar_t__ resuming_ports; scalar_t__ suspended_ports; scalar_t__ port_c_suspend; int * debug; TYPE_1__* regs; scalar_t__ has_hostpc; int next_statechange; int rh_state; } ;
struct TYPE_2__ {int txfill_tuning; int usbmode_ex; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ehci_hcd*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ehci_hcd*,int *,int,int ,int) ;
 scalar_t__ FUNC_4 (struct ehci_hcd*) ;
 int FUNC_5 (struct ehci_hcd*,int *) ;
 int FUNC_6 (struct ehci_hcd*) ;
 int FUNC_7 (struct ehci_hcd*,int,int *) ;
 int VAR_5 ;
 int FUNC_8 (struct ehci_hcd*) ;

int FUNC_9(struct ehci_hcd *VAR_6)
{
 int VAR_7;
 u32 VAR_8 = FUNC_5(VAR_6, &VAR_6->regs->command);



 if (VAR_6->debug && !FUNC_2(FUNC_6(VAR_6)))
  VAR_6->debug = ((void*)0);

 VAR_8 |= VAR_0;
 FUNC_0 (VAR_6, "reset", VAR_8);
 FUNC_7(VAR_6, VAR_8, &VAR_6->regs->command);
 VAR_6->rh_state = VAR_1;
 VAR_6->next_statechange = VAR_5;
 VAR_7 = FUNC_3(VAR_6, &VAR_6->regs->command,
       VAR_0, 0, 250 * 1000);

 if (VAR_6->has_hostpc) {
  FUNC_7(VAR_6, VAR_3 | VAR_4,
    &VAR_6->regs->usbmode_ex);
  FUNC_7(VAR_6, VAR_2, &VAR_6->regs->txfill_tuning);
 }
 if (VAR_7)
  return VAR_7;

 if (FUNC_4(VAR_6))
  FUNC_8 (VAR_6);

 if (VAR_6->debug)
  FUNC_1(FUNC_6(VAR_6));

 VAR_6->port_c_suspend = VAR_6->suspended_ports =
   VAR_6->resuming_ports = 0;
 return VAR_7;
}
