
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {int quirks; int cmd_ring_state; TYPE_1__* shared_hcd; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xhci_hcd*,int ,char*) ;
 int FUNC_1 (struct xhci_hcd*) ;
 int FUNC_2 (struct xhci_hcd*) ;
 scalar_t__ FUNC_3 (struct xhci_hcd*) ;

__attribute__((used)) static int FUNC_4(struct xhci_hcd *VAR_5)
{
 if (FUNC_3(VAR_5)) {
  FUNC_1(VAR_5);
  return -VAR_1;
 }
 VAR_5->shared_hcd->state = VAR_2;
 VAR_5->cmd_ring_state = VAR_0;

 if (VAR_5->quirks & VAR_3)
  FUNC_2(VAR_5);

 FUNC_0(VAR_5, VAR_4,
   "Finished xhci_run for USB3 roothub");
 return 0;
}
