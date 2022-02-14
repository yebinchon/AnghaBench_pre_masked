
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {int unreserve_pending; int qh_list_entry; int unreserve_timer; } ;
struct dwc2_hsotg {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dwc2_hsotg *VAR_2,
         struct dwc2_qh *VAR_3)
{
 bool VAR_4;

 FUNC_1(&VAR_2->lock);
 VAR_4 = FUNC_3(&VAR_3->unreserve_timer,
          VAR_1 + VAR_0 + 1);
 FUNC_0(VAR_4);
 VAR_3->unreserve_pending = 1;

 FUNC_2(&VAR_3->qh_list_entry);
}
