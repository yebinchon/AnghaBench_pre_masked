
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_np {int np_thread_lock; int np_login_timer; int np_login_timer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct iscsi_np *VAR_5)
{




 FUNC_2(&VAR_5->np_thread_lock);
 VAR_5->np_login_timer_flags &= ~VAR_2;
 VAR_5->np_login_timer_flags |= VAR_1;
 FUNC_0(&VAR_5->np_login_timer, VAR_4 + VAR_3 * VAR_0);

 FUNC_1("Added timeout timer to iSCSI login request for"
   " %u seconds.\n", VAR_3);
 FUNC_3(&VAR_5->np_thread_lock);
}
