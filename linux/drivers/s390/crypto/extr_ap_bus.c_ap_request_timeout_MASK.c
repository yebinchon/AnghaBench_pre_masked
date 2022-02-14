
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ap_queue {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ap_queue*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 struct ap_queue* VAR_2 ;
 struct ap_queue* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

void FUNC_5(struct timer_list *VAR_4)
{
 struct ap_queue *VAR_5 = FUNC_2(VAR_5, VAR_4, VAR_3);

 if (VAR_1)
  return;
 FUNC_3(&VAR_5->lock);
 FUNC_1(FUNC_0(VAR_5, VAR_0));
 FUNC_4(&VAR_5->lock);
}
