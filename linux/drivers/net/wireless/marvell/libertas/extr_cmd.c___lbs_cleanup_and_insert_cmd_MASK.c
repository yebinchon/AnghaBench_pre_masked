
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int cmdfreeq; } ;
struct cmd_ctrl_node {int list; int cmdbuf; scalar_t__ callback_arg; int * callback; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct lbs_private *VAR_1,
      struct cmd_ctrl_node *VAR_2)
{
 if (!VAR_2)
  return;

 VAR_2->callback = ((void*)0);
 VAR_2->callback_arg = 0;

 FUNC_1(VAR_2->cmdbuf, 0, VAR_0);

 FUNC_0(&VAR_2->list, &VAR_1->cmdfreeq);
}
