
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct dwc2_qh {scalar_t__ unreserve_pending; int unreserve_timer; struct dwc2_hsotg* hsotg; } ;
struct dwc2_hsotg {int lock; } ;


 int FUNC_0 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 struct dwc2_qh* FUNC_1 (int ,struct timer_list*,int ) ;
 struct dwc2_qh* VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct dwc2_qh *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct dwc2_hsotg *VAR_4 = VAR_3->hsotg;
 unsigned long VAR_5;
 while (!FUNC_2(&VAR_4->lock, VAR_5)) {
  if (FUNC_4(&VAR_3->unreserve_timer))
   return;
 }
 if (VAR_3->unreserve_pending)
  FUNC_0(VAR_4, VAR_3);

 FUNC_3(&VAR_4->lock, VAR_5);
}
