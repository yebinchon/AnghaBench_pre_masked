
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbtf_private {int cmdfreeq; } ;
struct cmd_ctrl_node {int list; int cmdbuf; scalar_t__ callback_arg; int * callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct lbtf_private *VAR_2,
      struct cmd_ctrl_node *VAR_3)
{
 FUNC_0(VAR_1);

 if (!VAR_3)
  goto cl_ins_out;

 VAR_3->callback = ((void*)0);
 VAR_3->callback_arg = 0;

 FUNC_3(VAR_3->cmdbuf, 0, VAR_0);

 FUNC_2(&VAR_3->list, &VAR_2->cmdfreeq);

cl_ins_out:
 FUNC_1(VAR_1);
}
