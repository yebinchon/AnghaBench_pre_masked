
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iscsi_conn {int nopin_timer_flags; int nopin_timer_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iscsi_conn* VAR_2 ;
 struct iscsi_conn* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct iscsi_conn*,int) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_conn*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct timer_list *VAR_4)
{
 struct iscsi_conn *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 FUNC_3(VAR_5);

 FUNC_4(&VAR_5->nopin_timer_lock);
 if (VAR_5->nopin_timer_flags & VAR_1) {
  FUNC_5(&VAR_5->nopin_timer_lock);
  FUNC_2(VAR_5);
  return;
 }
 VAR_5->nopin_timer_flags &= ~VAR_0;
 FUNC_5(&VAR_5->nopin_timer_lock);

 FUNC_1(VAR_5, 1);
 FUNC_2(VAR_5);
}
