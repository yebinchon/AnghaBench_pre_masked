
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int waitq; int * cur_cmd; } ;
struct cmd_ctrl_node {int result; int cmdwaitqwoken; scalar_t__ callback; int cmdwait_q; int list; } ;


 int FUNC_0 (struct lbs_private*,struct cmd_ctrl_node*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct lbs_private *VAR_1, struct cmd_ctrl_node *VAR_2,
       int VAR_3)
{






 FUNC_1(&VAR_2->list);

 VAR_2->result = VAR_3;
 VAR_2->cmdwaitqwoken = 1;
 FUNC_2(&VAR_2->cmdwait_q);

 if (!VAR_2->callback || VAR_2->callback == VAR_0)
  FUNC_0(VAR_1, VAR_2);
 VAR_1->cur_cmd = ((void*)0);
 FUNC_2(&VAR_1->waitq);
}
