
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_nexthop_group {int sum_norm_weight; int ecmp_size; int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {int num_adj_entries; scalar_t__ norm_nh_weight; int should_offload; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_nexthop_group *VAR_0)
{
 int VAR_1 = VAR_0->sum_norm_weight;
 u16 VAR_2 = VAR_0->ecmp_size;
 int VAR_3, VAR_4 = 0, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
  struct mlxsw_sp_nexthop *VAR_6 = &VAR_0->nexthops[VAR_3];
  int VAR_7;

  if (!VAR_6->should_offload)
   continue;
  VAR_4 += VAR_6->norm_nh_weight;
  VAR_7 = FUNC_0(VAR_2 * VAR_4, VAR_1);
  VAR_6->num_adj_entries = VAR_7 - VAR_5;
  VAR_5 = VAR_7;
 }
}
