
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct ehci_qh* qh; } ;
struct ehci_qh {TYPE_2__ qh_next; TYPE_1__* hw; int unlink_node; int qh_state; } ;
struct ehci_hcd {struct ehci_qh* qh_scan_next; struct ehci_qh* async; int async_unlink; } ;
struct TYPE_3__ {int hw_next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ehci_hcd *VAR_1, struct ehci_qh *VAR_2)
{
 struct ehci_qh *VAR_3;


 VAR_2->qh_state = VAR_0;
 FUNC_0(&VAR_2->unlink_node, &VAR_1->async_unlink);


 VAR_3 = VAR_1->async;
 while (VAR_3->qh_next.qh != VAR_2)
  VAR_3 = VAR_3->qh_next.qh;

 VAR_3->hw->hw_next = VAR_2->hw->hw_next;
 VAR_3->qh_next = VAR_2->qh_next;
 if (VAR_1->qh_scan_next == VAR_2)
  VAR_1->qh_scan_next = VAR_2->qh_next.qh;
}
