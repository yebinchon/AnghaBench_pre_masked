
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ehci_hcd {int async_idle; int async_unlink; TYPE_2__* async; scalar_t__ async_count; } ;
struct TYPE_3__ {scalar_t__ qh; } ;
struct TYPE_4__ {TYPE_1__ qh_next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ehci_hcd *VAR_0)
{
 if (--VAR_0->async_count)
  return;


 FUNC_0(VAR_0->async->qh_next.qh || !FUNC_2(&VAR_0->async_unlink) ||
   !FUNC_2(&VAR_0->async_idle));


 FUNC_1(VAR_0);
}
