
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {int * cur_cmd; } ;
struct cmd_ctrl_node {int result; int cmdwaitqwoken; int callback; int cmdwait_q; } ;


 int FUNC_0 (struct lbtf_private*,struct cmd_ctrl_node*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct lbtf_private *VAR_0, struct cmd_ctrl_node *VAR_1,
     int VAR_2)
{
 VAR_1->result = VAR_2;
 VAR_1->cmdwaitqwoken = 1;
 FUNC_1(&VAR_1->cmdwait_q);

 if (!VAR_1->callback)
  FUNC_0(VAR_0, VAR_1);
 VAR_0->cur_cmd = ((void*)0);
}
