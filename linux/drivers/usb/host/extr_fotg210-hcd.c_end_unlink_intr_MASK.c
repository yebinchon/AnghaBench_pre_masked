
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_qh_hw {int hw_next; } ;
struct fotg210_qh {int qtd_list; int qh_state; struct fotg210_qh_hw* hw; } ;
struct fotg210_hcd {scalar_t__ rh_state; int intr_count; } ;


 int FUNC_0 (struct fotg210_hcd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fotg210_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*,char*,struct fotg210_qh*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fotg210_hcd*,struct fotg210_qh*) ;
 int FUNC_5 (struct fotg210_hcd*,struct fotg210_qh*) ;

__attribute__((used)) static void FUNC_6(struct fotg210_hcd *VAR_2, struct fotg210_qh *VAR_3)
{
 struct fotg210_qh_hw *VAR_4 = VAR_3->hw;
 int VAR_5;

 VAR_3->qh_state = VAR_1;
 VAR_4->hw_next = FUNC_0(VAR_2);

 FUNC_4(VAR_2, VAR_3);


 if (!FUNC_3(&VAR_3->qtd_list) &&
   VAR_2->rh_state == VAR_0) {
  VAR_5 = FUNC_5(VAR_2, VAR_3);







  if (VAR_5 != 0)
   FUNC_2(VAR_2, "can't reschedule qh %p, err %d\n",
     VAR_3, VAR_5);
 }


 --VAR_2->intr_count;
 FUNC_1(VAR_2);
}
