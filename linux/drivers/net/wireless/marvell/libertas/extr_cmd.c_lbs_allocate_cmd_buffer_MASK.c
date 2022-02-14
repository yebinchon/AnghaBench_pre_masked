
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lbs_private {struct cmd_ctrl_node* cmd_array; } ;
struct cmd_ctrl_node {int cmdwait_q; void* cmdbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct lbs_private*,struct cmd_ctrl_node*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct lbs_private *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;
 u32 VAR_6;
 struct cmd_ctrl_node *VAR_7;


 VAR_5 = sizeof(struct cmd_ctrl_node) * VAR_2;
 if (!(VAR_7 = FUNC_1(VAR_5, VAR_0))) {
  FUNC_3("ALLOC_CMD_BUF: tempcmd_array is NULL\n");
  VAR_4 = -1;
  goto done;
 }
 VAR_3->cmd_array = VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7[VAR_6].cmdbuf = FUNC_1(VAR_1, VAR_0);
  if (!VAR_7[VAR_6].cmdbuf) {
   FUNC_3("ALLOC_CMD_BUF: ptempvirtualaddr is NULL\n");
   VAR_4 = -1;
   goto done;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0(&VAR_7[VAR_6].cmdwait_q);
  FUNC_2(VAR_3, &VAR_7[VAR_6]);
 }
 VAR_4 = 0;

done:
 return VAR_4;
}
