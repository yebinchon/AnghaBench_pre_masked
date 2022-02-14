
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cmdrsp_complete ) (struct mwifiex_adapter*,int *) ;} ;
struct mwifiex_adapter {TYPE_1__ if_ops; } ;
struct cmd_ctrl_node {int wait_q_enabled; int * resp_skb; scalar_t__ cmd_skb; int * data_buf; scalar_t__ cmd_flag; scalar_t__ cmd_no; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int *) ;

__attribute__((used)) static void
FUNC_2(struct mwifiex_adapter *VAR_0,
         struct cmd_ctrl_node *VAR_1)
{
 VAR_1->cmd_no = 0;
 VAR_1->cmd_flag = 0;
 VAR_1->data_buf = ((void*)0);
 VAR_1->wait_q_enabled = 0;

 if (VAR_1->cmd_skb)
  FUNC_0(VAR_1->cmd_skb, 0);

 if (VAR_1->resp_skb) {
  VAR_0->if_ops.cmdrsp_complete(VAR_0, VAR_1->resp_skb);
  VAR_1->resp_skb = ((void*)0);
 }
}
