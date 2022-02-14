
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop_group {int count; int sum_norm_weight; struct mlxsw_sp_nexthop* nexthops; } ;
struct mlxsw_sp_nexthop {int nh_weight; int norm_nh_weight; int should_offload; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_nexthop_group *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3 = 0;
 struct mlxsw_sp_nexthop *VAR_4;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
  VAR_4 = &VAR_0->nexthops[VAR_1];

  if (!VAR_4->should_offload)
   continue;
  if (VAR_2 > 0)
   VAR_2 = FUNC_0(VAR_4->nh_weight, VAR_2);
  else
   VAR_2 = VAR_4->nh_weight;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
  VAR_4 = &VAR_0->nexthops[VAR_1];

  if (!VAR_4->should_offload)
   continue;
  VAR_4->norm_nh_weight = VAR_4->nh_weight / VAR_2;
  VAR_3 += VAR_4->norm_nh_weight;
 }

 VAR_0->sum_norm_weight = VAR_3;
}
