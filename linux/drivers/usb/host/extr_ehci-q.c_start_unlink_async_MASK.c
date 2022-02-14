
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qh {scalar_t__ qh_state; } ;
struct ehci_hcd {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_1 (struct ehci_hcd*) ;

__attribute__((used)) static void FUNC_2(struct ehci_hcd *VAR_1, struct ehci_qh *VAR_2)
{

 if (VAR_2->qh_state != VAR_0)
  return;

 FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_1);
}
