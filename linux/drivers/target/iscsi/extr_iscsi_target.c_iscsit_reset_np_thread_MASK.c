
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tpg_np {int tpg_np_comp; int tpg_np_kref; } ;
struct iscsi_portal_group {int dummy; } ;
struct iscsi_np {scalar_t__ np_thread_state; int np_thread_lock; int np_restart_comp; scalar_t__ np_thread; int np_reset_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(
 struct iscsi_np *VAR_4,
 struct iscsi_tpg_np *VAR_5,
 struct iscsi_portal_group *VAR_6,
 bool VAR_7)
{
 FUNC_3(&VAR_4->np_thread_lock);
 if (VAR_4->np_thread_state == VAR_0) {
  FUNC_4(&VAR_4->np_thread_lock);
  return 0;
 }
 VAR_4->np_thread_state = VAR_1;
 FUNC_0(&VAR_4->np_reset_count);

 if (VAR_4->np_thread) {
  FUNC_4(&VAR_4->np_thread_lock);
  FUNC_2(VAR_2, VAR_4->np_thread, 1);
  FUNC_5(&VAR_4->np_restart_comp);
  FUNC_3(&VAR_4->np_thread_lock);
 }
 FUNC_4(&VAR_4->np_thread_lock);

 if (VAR_5 && VAR_7) {
  FUNC_1(&VAR_5->tpg_np_kref, VAR_3);

  FUNC_5(&VAR_5->tpg_np_comp);
 }

 return 0;
}
