
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {struct ehci_qh* reclaim; } ;
struct ehci_qh {scalar_t__ qh_state; struct ehci_qh* reclaim; } ;
struct TYPE_2__ {int state; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct oxu_hcd*) ;
 TYPE_1__* FUNC_2 (struct oxu_hcd*) ;
 int FUNC_3 (struct oxu_hcd*,struct ehci_qh*) ;

__attribute__((used)) static void FUNC_4(struct oxu_hcd *VAR_2, struct ehci_qh *VAR_3)
{

 if (VAR_3->qh_state == VAR_0
   && VAR_2->reclaim
   && FUNC_0(FUNC_2(VAR_2)->state)) {
  struct ehci_qh *VAR_4;

  for (VAR_4 = VAR_2->reclaim;
    VAR_4->reclaim;
    VAR_4 = VAR_4->reclaim)
   continue;
  VAR_3->qh_state = VAR_1;
  VAR_4->reclaim = VAR_3;


 } else if (!FUNC_0(FUNC_2(VAR_2)->state) && VAR_2->reclaim)
  FUNC_1(VAR_2);


 if (VAR_3->qh_state == VAR_0)
  FUNC_3(VAR_2, VAR_3);
}
