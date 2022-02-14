
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait; int status; } ;
struct mwifiex_adapter {TYPE_1__ cmd_wait_q; } ;
struct cmd_ctrl_node {int* condition; int wait_q_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mwifiex_adapter *VAR_1,
    struct cmd_ctrl_node *VAR_2)
{
 FUNC_0(!VAR_2->wait_q_enabled);
 FUNC_1(VAR_1, VAR_0, "cmd completed: status=%d\n",
      VAR_1->cmd_wait_q.status);

 *VAR_2->condition = 1;
 FUNC_2(&VAR_1->cmd_wait_q.wait);

 return 0;
}
