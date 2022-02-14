
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; int ecmp_size; int adj_index; int adj_index_valid; } ;
struct mlxsw_sp_nexthop {scalar_t__ num_adj_entries; scalar_t__ offloaded; struct mlxsw_sp_nexthop_group* nh_grp; } ;


 int VAR_0 ;

int FUNC_0(struct mlxsw_sp_nexthop *VAR_1, u32 *VAR_2,
        u32 *VAR_3, u32 *VAR_4)
{
 struct mlxsw_sp_nexthop_group *VAR_5 = VAR_1->nh_grp;
 u32 VAR_6 = 0;
 int VAR_7;

 if (!VAR_1->offloaded || !VAR_5->adj_index_valid)
  return -VAR_0;

 *VAR_2 = VAR_5->adj_index;
 *VAR_3 = VAR_5->ecmp_size;

 for (VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++) {
  struct mlxsw_sp_nexthop *VAR_8 = &VAR_5->nexthops[VAR_7];

  if (VAR_8 == VAR_1)
   break;
  if (VAR_8->offloaded)
   VAR_6 += VAR_8->num_adj_entries;
 }

 *VAR_4 = VAR_6;
 return 0;
}
