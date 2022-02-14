
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * qh; } ;
struct fotg210_qh {int qtd_list; TYPE_1__ qh_next; int qh_state; struct fotg210_qh* unlink_next; } ;
struct fotg210_hcd {int async_unlinking; scalar_t__ rh_state; scalar_t__ async_unlink; struct fotg210_qh* async_iaa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fotg210_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_3 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_4 (struct fotg210_hcd*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct fotg210_hcd *VAR_2)
{
 struct fotg210_qh *VAR_3;


restart:
 VAR_2->async_unlinking = 1;
 while (VAR_2->async_iaa) {
  VAR_3 = VAR_2->async_iaa;
  VAR_2->async_iaa = VAR_3->unlink_next;
  VAR_3->unlink_next = ((void*)0);

  VAR_3->qh_state = VAR_1;
  VAR_3->qh_next.qh = ((void*)0);

  FUNC_2(VAR_2, VAR_3);
  if (!FUNC_1(&VAR_3->qtd_list) &&
    VAR_2->rh_state == VAR_0)
   FUNC_3(VAR_2, VAR_3);
  FUNC_0(VAR_2);
 }
 VAR_2->async_unlinking = 0;


 if (VAR_2->async_unlink) {
  FUNC_4(VAR_2, 1);
  if (FUNC_5(VAR_2->rh_state < VAR_0))
   goto restart;
 }
}
