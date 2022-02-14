
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct oxu_hcd {int scanning; int next_uframe; scalar_t__ periodic_sched; TYPE_2__* async; scalar_t__ reclaim_ready; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_4__ {int * ptr; } ;
struct TYPE_5__ {TYPE_1__ qh_next; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct oxu_hcd*) ;
 TYPE_3__* FUNC_2 (struct oxu_hcd*) ;
 int FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (struct oxu_hcd*) ;
 int FUNC_5 (struct oxu_hcd*,int ) ;
 int FUNC_6 (struct oxu_hcd*,int ) ;

__attribute__((used)) static void FUNC_7(struct oxu_hcd *VAR_1)
{
 FUNC_6(VAR_1, VAR_0);
 if (VAR_1->reclaim_ready)
  FUNC_1(VAR_1);





 if (VAR_1->scanning)
  return;
 VAR_1->scanning = 1;
 FUNC_3(VAR_1);
 if (VAR_1->next_uframe != -1)
  FUNC_4(VAR_1);
 VAR_1->scanning = 0;





 if (FUNC_0(FUNC_2(VAR_1)->state) &&
   (VAR_1->async->qh_next.ptr != ((void*)0) ||
    VAR_1->periodic_sched != 0))
  FUNC_5(VAR_1, VAR_0);
}
