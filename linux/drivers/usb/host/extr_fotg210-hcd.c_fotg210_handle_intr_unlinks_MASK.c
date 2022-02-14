
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_qh {scalar_t__ unlink_cycle; struct fotg210_qh* unlink_next; } ;
struct fotg210_hcd {scalar_t__ rh_state; int intr_unlinking; scalar_t__ intr_unlink_cycle; struct fotg210_qh* intr_unlink; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_1 (struct fotg210_hcd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fotg210_hcd *VAR_2)
{
 bool VAR_3 = (VAR_2->rh_state < VAR_1);
 VAR_2->intr_unlinking = 1;
 while (VAR_2->intr_unlink) {
  struct fotg210_qh *VAR_4 = VAR_2->intr_unlink;

  if (!VAR_3 && VAR_4->unlink_cycle == VAR_2->intr_unlink_cycle)
   break;
  VAR_2->intr_unlink = VAR_4->unlink_next;
  VAR_4->unlink_next = ((void*)0);
  FUNC_0(VAR_2, VAR_4);
 }


 if (VAR_2->intr_unlink) {
  FUNC_1(VAR_2, VAR_0,
    1);
  ++VAR_2->intr_unlink_cycle;
 }
 VAR_2->intr_unlinking = 0;
}
