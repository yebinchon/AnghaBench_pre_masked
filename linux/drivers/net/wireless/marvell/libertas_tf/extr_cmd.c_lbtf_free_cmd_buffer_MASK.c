
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {struct cmd_ctrl_node* cmd_array; } ;
struct cmd_ctrl_node {struct cmd_ctrl_node* cmdbuf; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmd_ctrl_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct lbtf_private *VAR_2)
{
 struct cmd_ctrl_node *VAR_3;
 unsigned int VAR_4;

 FUNC_1(VAR_1);


 if (VAR_2->cmd_array == ((void*)0)) {
  FUNC_2("FREE_CMD_BUF: cmd_array is NULL\n");
  goto done;
 }

 VAR_3 = VAR_2->cmd_array;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_3[VAR_4].cmdbuf);
  VAR_3[VAR_4].cmdbuf = ((void*)0);
 }


 FUNC_0(VAR_2->cmd_array);
 VAR_2->cmd_array = ((void*)0);

done:
 FUNC_3(VAR_1);
 return 0;
}
