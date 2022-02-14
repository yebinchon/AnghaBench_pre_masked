
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int (* cmdrsp_complete ) (struct mwifiex_adapter*,scalar_t__) ;} ;
struct mwifiex_adapter {scalar_t__ iface_type; struct cmd_ctrl_node* cmd_pool; TYPE_1__ if_ops; } ;
struct cmd_ctrl_node {scalar_t__ resp_skb; scalar_t__ skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cmd_ctrl_node*) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_adapter*,scalar_t__) ;

void FUNC_4(struct mwifiex_adapter *VAR_4)
{
 struct cmd_ctrl_node *VAR_5;
 u32 VAR_6;


 if (!VAR_4->cmd_pool) {
  FUNC_2(VAR_4, VAR_1,
       "info: FREE_CMD_BUF: cmd_pool is null\n");
  return;
 }

 VAR_5 = VAR_4->cmd_pool;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5[VAR_6].skb) {
   FUNC_2(VAR_4, VAR_0,
        "cmd: free cmd buffer %d\n", VAR_6);
   FUNC_0(VAR_5[VAR_6].skb);
  }
  if (!VAR_5[VAR_6].resp_skb)
   continue;

  if (VAR_4->iface_type == VAR_3)
   VAR_4->if_ops.cmdrsp_complete(VAR_4,
       VAR_5[VAR_6].resp_skb);
  else
   FUNC_0(VAR_5[VAR_6].resp_skb);
 }

 if (VAR_4->cmd_pool) {
  FUNC_2(VAR_4, VAR_0,
       "cmd: free cmd pool\n");
  FUNC_1(VAR_4->cmd_pool);
  VAR_4->cmd_pool = ((void*)0);
 }
}
