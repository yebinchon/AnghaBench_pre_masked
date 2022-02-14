
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct fotg210_qh* qh; } ;
struct fotg210_qh {TYPE_2__ qh_next; TYPE_1__* hw; struct fotg210_qh* unlink_next; int qh_state; } ;
struct fotg210_hcd {struct fotg210_qh* qh_scan_next; struct fotg210_qh* async; struct fotg210_qh* async_unlink_last; struct fotg210_qh* async_unlink; } ;
struct TYPE_3__ {int hw_next; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct fotg210_hcd *VAR_1,
  struct fotg210_qh *VAR_2)
{
 struct fotg210_qh *VAR_3;


 VAR_2->qh_state = VAR_0;
 if (VAR_1->async_unlink)
  VAR_1->async_unlink_last->unlink_next = VAR_2;
 else
  VAR_1->async_unlink = VAR_2;
 VAR_1->async_unlink_last = VAR_2;


 VAR_3 = VAR_1->async;
 while (VAR_3->qh_next.qh != VAR_2)
  VAR_3 = VAR_3->qh_next.qh;

 VAR_3->hw->hw_next = VAR_2->hw->hw_next;
 VAR_3->qh_next = VAR_2->qh_next;
 if (VAR_1->qh_scan_next == VAR_2)
  VAR_1->qh_scan_next = VAR_2->qh_next.qh;
}
