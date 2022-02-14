
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {scalar_t__ type; struct mlxsw_sp_nexthop_group* nh_grp; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct mlxsw_sp_nexthop *VAR_1)
{
 struct mlxsw_sp_nexthop_group *VAR_2 = VAR_1->nh_grp;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++) {
  struct mlxsw_sp_nexthop *VAR_4 = &VAR_2->nexthops[VAR_3];

  if (VAR_4->type == VAR_0)
   return 1;
 }
 return 0;
}
