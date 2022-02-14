
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp_nexthop {int counter_index; int counter_valid; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int *,int *) ;

int FUNC_1(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_nexthop *VAR_2, u64 *VAR_3)
{
 if (!VAR_2->counter_valid)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2->counter_index,
      VAR_3, ((void*)0));
}
