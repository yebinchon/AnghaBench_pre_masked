
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_adapter {int cmd_pending; } ;
struct host_cmd_ds_command {int command; } ;
struct cmd_ctrl_node {TYPE_1__* cmd_skb; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,int ,int ) ;
 int FUNC_4 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;

void FUNC_5(struct mwifiex_adapter *VAR_1,
         struct cmd_ctrl_node *VAR_2)
{
 struct host_cmd_ds_command *VAR_3 = (void *)VAR_2->cmd_skb->data;

 FUNC_4(VAR_1, VAR_2);

 FUNC_0(&VAR_1->cmd_pending);
 FUNC_3(VAR_1, VAR_0,
      "cmd: FREE_CMD: cmd=%#x, cmd_pending=%d\n",
  FUNC_2(VAR_3->command),
  FUNC_1(&VAR_1->cmd_pending));
}
