
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int rcu; int refcount; } ;


 int FUNC_0 (int *,void (*) (struct rcu_head*)) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kern_ipc_perm *VAR_0,
   void (*VAR_1)(struct rcu_head *VAR_2))
{
 if (!FUNC_1(&VAR_0->refcount))
  return;

 FUNC_0(&VAR_0->rcu, VAR_1);
}
