
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_addr_list {int rcu; int usage; } ;
typedef int rcu_callback_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct afs_addr_list *VAR_1)
{
 if (VAR_1 && FUNC_1(&VAR_1->usage))
  FUNC_0(&VAR_1->rcu, (rcu_callback_t)VAR_0);
}
