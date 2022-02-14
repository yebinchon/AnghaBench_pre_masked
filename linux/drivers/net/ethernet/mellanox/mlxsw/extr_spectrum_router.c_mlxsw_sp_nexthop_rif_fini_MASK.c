
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop {int * rif; int rif_list_node; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp_nexthop *VAR_0)
{
 if (!VAR_0->rif)
  return;

 FUNC_0(&VAR_0->rif_list_node);
 VAR_0->rif = ((void*)0);
}
