
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_notif_wait_data {int notif_waitq; int notif_waits; int notif_wait_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_notif_wait_data *VAR_0)
{
 FUNC_2(&VAR_0->notif_wait_lock);
 FUNC_0(&VAR_0->notif_waits);
 FUNC_1(&VAR_0->notif_waitq);
}
