
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwifiex_private {int dummy; } ;
struct cmd_ctrl_node {int wait_q_enabled; int cmd_wait_q_woken; int* condition; int skb; int cmd_skb; void* data_buf; int cmd_no; struct mwifiex_private* priv; } ;



__attribute__((used)) static void
FUNC_0(struct mwifiex_private *VAR_0,
        struct cmd_ctrl_node *VAR_1,
        u32 VAR_2, void *VAR_3, bool VAR_4)
{
 VAR_1->priv = VAR_0;
 VAR_1->cmd_no = VAR_2;

 if (VAR_4) {
  VAR_1->wait_q_enabled = 1;
  VAR_1->cmd_wait_q_woken = 0;
  VAR_1->condition = &VAR_1->cmd_wait_q_woken;
 }
 VAR_1->data_buf = VAR_3;
 VAR_1->cmd_skb = VAR_1->skb;
}
