
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct ehci_qh* qh; } ;
struct ehci_qh {scalar_t__ qh_state; scalar_t__ unlink_cycle; int unlink_reason; int qtd_list; TYPE_3__ qh_next; } ;
struct ehci_hcd {scalar_t__ async_unlink_cycle; int async_unlink; TYPE_2__* async; } ;
struct TYPE_4__ {struct ehci_qh* qh; } ;
struct TYPE_5__ {TYPE_1__ qh_next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ehci_hcd*,struct ehci_qh*) ;

__attribute__((used)) static void FUNC_3(struct ehci_hcd *VAR_3)
{
 struct ehci_qh *VAR_4;
 struct ehci_qh *VAR_5 = ((void*)0);
 int VAR_6 = 0;


 for (VAR_4 = VAR_3->async->qh_next.qh; VAR_4; VAR_4 = VAR_4->qh_next.qh) {
  if (FUNC_1(&VAR_4->qtd_list) &&
    VAR_4->qh_state == VAR_1) {
   ++VAR_6;
   if (VAR_4->unlink_cycle != VAR_3->async_unlink_cycle)
    VAR_5 = VAR_4;
  }
 }


 if (FUNC_1(&VAR_3->async_unlink) && VAR_5) {
  VAR_5->unlink_reason |= VAR_2;
  FUNC_2(VAR_3, VAR_5);
  --VAR_6;
 }


 if (VAR_6 > 0) {
  FUNC_0(VAR_3, VAR_0, 1);
  ++VAR_3->async_unlink_cycle;
 }
}
