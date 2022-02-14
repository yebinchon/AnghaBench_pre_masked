
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_virt_ep {int ep_state; int stop_cmd_timer; struct xhci_hcd* xhci; } ;
struct xhci_hcd {int lock; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 struct xhci_virt_ep* VAR_1 ;
 struct xhci_virt_ep* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct xhci_hcd*,char*) ;
 int FUNC_5 (struct xhci_hcd*,int ,char*) ;
 int FUNC_6 (struct xhci_hcd*) ;
 int FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*,char*) ;

void FUNC_9(struct timer_list *VAR_4)
{
 struct xhci_virt_ep *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);
 struct xhci_hcd *VAR_6 = VAR_5->xhci;
 unsigned long VAR_7;

 FUNC_1(&VAR_6->lock, VAR_7);


 if (!(VAR_5->ep_state & VAR_0) ||
     FUNC_3(&VAR_5->stop_cmd_timer)) {
  FUNC_2(&VAR_6->lock, VAR_7);
  FUNC_4(VAR_6, "Stop EP timer raced with cmd completion, exit");
  return;
 }

 FUNC_8(VAR_6, "xHCI host not responding to stop endpoint command.\n");
 VAR_5->ep_state &= ~VAR_0;

 FUNC_6(VAR_6);






 FUNC_7(VAR_6);

 FUNC_2(&VAR_6->lock, VAR_7);
 FUNC_5(VAR_6, VAR_3,
   "xHCI host controller is dead.");
}
