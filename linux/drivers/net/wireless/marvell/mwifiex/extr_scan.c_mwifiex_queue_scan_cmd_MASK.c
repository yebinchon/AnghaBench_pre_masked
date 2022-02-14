
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int scan_pending_q_lock; int scan_pending_q; int scan_wait_q_woken; } ;
struct cmd_ctrl_node {int wait_q_enabled; int list; int * condition; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct mwifiex_private *VAR_0,
         struct cmd_ctrl_node *VAR_1)
{
 struct mwifiex_adapter *VAR_2 = VAR_0->adapter;

 VAR_1->wait_q_enabled = 1;
 VAR_1->condition = &VAR_2->scan_wait_q_woken;
 FUNC_1(&VAR_2->scan_pending_q_lock);
 FUNC_0(&VAR_1->list, &VAR_2->scan_pending_q);
 FUNC_2(&VAR_2->scan_pending_q_lock);
}
