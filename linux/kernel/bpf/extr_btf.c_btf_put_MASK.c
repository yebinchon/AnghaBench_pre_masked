
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int rcu; int refcnt; } ;


 int FUNC_0 (struct btf*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct btf *VAR_1)
{
 if (VAR_1 && FUNC_2(&VAR_1->refcnt)) {
  FUNC_0(VAR_1);
  FUNC_1(&VAR_1->rcu, VAR_0);
 }
}
