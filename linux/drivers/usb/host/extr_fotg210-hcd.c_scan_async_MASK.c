
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct fotg210_qh* qh; } ;
struct fotg210_qh {scalar_t__ qh_state; int unlink_cycle; int qtd_list; scalar_t__ needs_rescan; TYPE_3__ qh_next; } ;
struct fotg210_hcd {scalar_t__ rh_state; int enabled_hrtimer_events; int async_unlink_cycle; struct fotg210_qh* qh_scan_next; TYPE_2__* async; } ;
struct TYPE_4__ {struct fotg210_qh* qh; } ;
struct TYPE_5__ {TYPE_1__ qh_next; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct fotg210_hcd*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_4 (struct fotg210_hcd*,struct fotg210_qh*) ;

__attribute__((used)) static void FUNC_5(struct fotg210_hcd *VAR_3)
{
 struct fotg210_qh *VAR_4;
 bool VAR_5 = 0;

 VAR_3->qh_scan_next = VAR_3->async->qh_next.qh;
 while (VAR_3->qh_scan_next) {
  VAR_4 = VAR_3->qh_scan_next;
  VAR_3->qh_scan_next = VAR_4->qh_next.qh;
rescan:

  if (!FUNC_2(&VAR_4->qtd_list)) {
   int VAR_6;
   VAR_6 = FUNC_3(VAR_3, VAR_4);
   if (VAR_4->needs_rescan) {
    FUNC_4(VAR_3, VAR_4);
   } else if (FUNC_2(&VAR_4->qtd_list)
     && VAR_4->qh_state == VAR_2) {
    VAR_4->unlink_cycle = VAR_3->async_unlink_cycle;
    VAR_5 = 1;
   } else if (VAR_6 != 0)
    goto rescan;
  }
 }







 if (VAR_5 && VAR_3->rh_state == VAR_1 &&
   !(VAR_3->enabled_hrtimer_events &
   FUNC_0(VAR_0))) {
  FUNC_1(VAR_3,
    VAR_0, 1);
  ++VAR_3->async_unlink_cycle;
 }
}
