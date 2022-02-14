
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int rcu; int rcu_users; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct task_struct *VAR_1)
{
 if (FUNC_1(&VAR_1->rcu_users))
  FUNC_0(&VAR_1->rcu, VAR_0);
}
