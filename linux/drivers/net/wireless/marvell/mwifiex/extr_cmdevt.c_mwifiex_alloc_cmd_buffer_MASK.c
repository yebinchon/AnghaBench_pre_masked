
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mwifiex_adapter {struct cmd_ctrl_node* cmd_pool; } ;
struct cmd_ctrl_node {int skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct cmd_ctrl_node* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_3 (struct mwifiex_adapter*,struct cmd_ctrl_node*) ;

int FUNC_4(struct mwifiex_adapter *VAR_5)
{
 struct cmd_ctrl_node *VAR_6;
 u32 VAR_7;


 VAR_6 = FUNC_1(VAR_3,
       sizeof(struct cmd_ctrl_node), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->cmd_pool = VAR_6;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6[VAR_7].skb = FUNC_0(VAR_4);
  if (!VAR_6[VAR_7].skb) {
   FUNC_2(VAR_5, VAR_1,
        "unable to allocate command buffer\n");
   return -VAR_0;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_3(VAR_5, &VAR_6[VAR_7]);

 return 0;
}
