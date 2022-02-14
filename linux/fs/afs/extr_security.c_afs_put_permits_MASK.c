
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_permits {int rcu; int hash_node; int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct afs_permits *VAR_2)
{
 if (VAR_2 && FUNC_2(&VAR_2->usage)) {
  FUNC_3(&VAR_0);
  FUNC_1(&VAR_2->hash_node);
  FUNC_4(&VAR_0);
  FUNC_0(&VAR_2->rcu, VAR_1);
 }
}
