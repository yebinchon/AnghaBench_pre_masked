
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_np {int np_login_timer_flags; int np_thread_lock; int np_login_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct iscsi_np *VAR_2)
{
 FUNC_1(&VAR_2->np_thread_lock);
 if (!(VAR_2->np_login_timer_flags & VAR_0)) {
  FUNC_2(&VAR_2->np_thread_lock);
  return;
 }
 VAR_2->np_login_timer_flags |= VAR_1;
 FUNC_2(&VAR_2->np_thread_lock);

 FUNC_0(&VAR_2->np_login_timer);

 FUNC_1(&VAR_2->np_thread_lock);
 VAR_2->np_login_timer_flags &= ~VAR_0;
 FUNC_2(&VAR_2->np_thread_lock);
}
