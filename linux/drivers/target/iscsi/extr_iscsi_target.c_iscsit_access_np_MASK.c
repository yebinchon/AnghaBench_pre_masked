
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_portal_group {scalar_t__ tpg_state; int tpg_state_lock; int np_login_sem; } ;
struct iscsi_np {scalar_t__ np_thread_state; int np_thread_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iscsi_np *VAR_2, struct iscsi_portal_group *VAR_3)
{
 int VAR_4;



 FUNC_1(&VAR_2->np_thread_lock);
 if (VAR_2->np_thread_state != VAR_0) {
  FUNC_2(&VAR_2->np_thread_lock);
  return -1;
 }
 FUNC_2(&VAR_2->np_thread_lock);



 FUNC_1(&VAR_3->tpg_state_lock);
 if (VAR_3->tpg_state != VAR_1) {
  FUNC_2(&VAR_3->tpg_state_lock);
  return -1;
 }
 FUNC_2(&VAR_3->tpg_state_lock);




 VAR_4 = FUNC_0(&VAR_3->np_login_sem);
 if (VAR_4 != 0)
  return -1;

 FUNC_1(&VAR_3->tpg_state_lock);
 if (VAR_3->tpg_state != VAR_1) {
  FUNC_2(&VAR_3->tpg_state_lock);
  FUNC_3(&VAR_3->np_login_sem);
  return -1;
 }
 FUNC_2(&VAR_3->tpg_state_lock);

 return 0;
}
