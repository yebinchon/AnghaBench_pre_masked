
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iscsi_np {int np_login_timer_flags; int np_thread_lock; scalar_t__ np_thread; int np_sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iscsi_np* FUNC_0 (int ,struct timer_list*,int ) ;
 struct iscsi_np* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct timer_list *VAR_5)
{
 struct iscsi_np *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);

 FUNC_3(&VAR_6->np_thread_lock);
 FUNC_1("iSCSI Login timeout on Network Portal %pISpc\n",
   &VAR_6->np_sockaddr);

 if (VAR_6->np_login_timer_flags & VAR_1) {
  FUNC_4(&VAR_6->np_thread_lock);
  return;
 }

 if (VAR_6->np_thread)
  FUNC_2(VAR_2, VAR_6->np_thread, 1);

 VAR_6->np_login_timer_flags &= ~VAR_0;
 FUNC_4(&VAR_6->np_thread_lock);
}
