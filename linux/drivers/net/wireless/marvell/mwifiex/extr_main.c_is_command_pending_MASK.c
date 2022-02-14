
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int cmd_pending_q_lock; int cmd_pending_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mwifiex_adapter *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->cmd_pending_q_lock);
 VAR_1 = FUNC_0(&VAR_0->cmd_pending_q);
 FUNC_2(&VAR_0->cmd_pending_q_lock);

 return !VAR_1;
}
