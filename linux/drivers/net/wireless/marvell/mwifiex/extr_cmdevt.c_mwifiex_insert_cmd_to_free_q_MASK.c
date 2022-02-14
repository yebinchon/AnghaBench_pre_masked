
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int cmd_free_q_lock; int cmd_free_q; } ;
struct cmd_ctrl_node {int list; scalar_t__ wait_q_enabled; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_2 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct mwifiex_adapter *VAR_0,
        struct cmd_ctrl_node *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->wait_q_enabled)
  FUNC_2(VAR_0, VAR_1);

 FUNC_1(VAR_0, VAR_1);


 FUNC_3(&VAR_0->cmd_free_q_lock);
 FUNC_0(&VAR_1->list, &VAR_0->cmd_free_q);
 FUNC_4(&VAR_0->cmd_free_q_lock);
}
