
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int nopin_response_timer_flags; int nopin_timer_lock; int nopin_response_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_conn *VAR_2)
{
 FUNC_1(&VAR_2->nopin_timer_lock);
 if (!(VAR_2->nopin_response_timer_flags & VAR_0)) {
  FUNC_2(&VAR_2->nopin_timer_lock);
  return;
 }
 VAR_2->nopin_response_timer_flags |= VAR_1;
 FUNC_2(&VAR_2->nopin_timer_lock);

 FUNC_0(&VAR_2->nopin_response_timer);

 FUNC_1(&VAR_2->nopin_timer_lock);
 VAR_2->nopin_response_timer_flags &= ~VAR_0;
 FUNC_2(&VAR_2->nopin_timer_lock);
}
