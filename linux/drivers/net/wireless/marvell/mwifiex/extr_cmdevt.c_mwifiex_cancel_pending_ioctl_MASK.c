
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int mwifiex_cmd_lock; struct cmd_ctrl_node* curr_cmd; } ;
struct cmd_ctrl_node {scalar_t__ wait_q_enabled; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mwifiex_adapter *VAR_0)
{
 struct cmd_ctrl_node *VAR_1 = ((void*)0);

 if ((VAR_0->curr_cmd) &&
     (VAR_0->curr_cmd->wait_q_enabled)) {
  FUNC_2(&VAR_0->mwifiex_cmd_lock);
  VAR_1 = VAR_0->curr_cmd;
  VAR_0->curr_cmd = ((void*)0);
  FUNC_3(&VAR_0->mwifiex_cmd_lock);

  FUNC_1(VAR_0, VAR_1);
 }

 FUNC_0(VAR_0);
}
