
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xsk {int * umems; int refcnt; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_xsk *VAR_0)
{
 if (!--VAR_0->refcnt) {
  FUNC_0(VAR_0->umems);
  VAR_0->umems = ((void*)0);
 }
}
