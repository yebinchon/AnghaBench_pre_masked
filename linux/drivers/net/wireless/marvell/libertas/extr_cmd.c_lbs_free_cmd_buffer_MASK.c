
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {struct cmd_ctrl_node* cmd_array; } ;
struct cmd_ctrl_node {struct cmd_ctrl_node* cmdbuf; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct cmd_ctrl_node*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct lbs_private *VAR_1)
{
 struct cmd_ctrl_node *VAR_2;
 unsigned int VAR_3;


 if (VAR_1->cmd_array == ((void*)0)) {
  FUNC_1("FREE_CMD_BUF: cmd_array is NULL\n");
  goto done;
 }

 VAR_2 = VAR_1->cmd_array;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3].cmdbuf) {
   FUNC_0(VAR_2[VAR_3].cmdbuf);
   VAR_2[VAR_3].cmdbuf = ((void*)0);
  }
 }


 if (VAR_1->cmd_array) {
  FUNC_0(VAR_1->cmd_array);
  VAR_1->cmd_array = ((void*)0);
 }

done:
 return 0;
}
