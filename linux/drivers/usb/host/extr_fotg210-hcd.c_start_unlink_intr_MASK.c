
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_qh {scalar_t__ qh_state; int needs_rescan; struct fotg210_qh* unlink_next; int unlink_cycle; } ;
struct fotg210_hcd {scalar_t__ rh_state; int intr_unlink_cycle; struct fotg210_qh* intr_unlink; scalar_t__ intr_unlinking; struct fotg210_qh* intr_unlink_last; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fotg210_hcd*,int ,int) ;
 int FUNC_1 (struct fotg210_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct fotg210_hcd *VAR_4,
  struct fotg210_qh *VAR_5)
{




 if (VAR_5->qh_state != VAR_3) {
  if (VAR_5->qh_state == VAR_2)
   VAR_5->needs_rescan = 1;
  return;
 }

 FUNC_2(VAR_4, VAR_5);


 FUNC_3();






 VAR_5->unlink_cycle = VAR_4->intr_unlink_cycle;


 if (VAR_4->intr_unlink)
  VAR_4->intr_unlink_last->unlink_next = VAR_5;
 else
  VAR_4->intr_unlink = VAR_5;
 VAR_4->intr_unlink_last = VAR_5;

 if (VAR_4->intr_unlinking)
  ;
 else if (VAR_4->rh_state < VAR_1)
  FUNC_1(VAR_4);
 else if (VAR_4->intr_unlink == VAR_5) {
  FUNC_0(VAR_4, VAR_0,
    1);
  ++VAR_4->intr_unlink_cycle;
 }
}
