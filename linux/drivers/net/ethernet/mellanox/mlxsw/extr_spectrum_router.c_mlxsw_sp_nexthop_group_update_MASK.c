
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; int adj_index; } ;
struct mlxsw_sp_nexthop {int offloaded; int type; scalar_t__ num_adj_entries; scalar_t__ update; int should_offload; } ;
struct mlxsw_sp {int dummy; } ;




 int FUNC_0 (struct mlxsw_sp*,int ,struct mlxsw_sp_nexthop*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,struct mlxsw_sp_nexthop*) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_nexthop_group *VAR_1,
         bool VAR_2)
{
 u32 VAR_3 = VAR_1->adj_index;
 struct mlxsw_sp_nexthop *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++) {
  VAR_4 = &VAR_1->nexthops[VAR_5];

  if (!VAR_4->should_offload) {
   VAR_4->offloaded = 0;
   continue;
  }

  if (VAR_4->update || VAR_2) {
   switch (VAR_4->type) {
   case 129:
    VAR_6 = FUNC_1
         (VAR_0, VAR_3, VAR_4);
    break;
   case 128:
    VAR_6 = FUNC_0
         (VAR_0, VAR_3, VAR_4);
    break;
   }
   if (VAR_6)
    return VAR_6;
   VAR_4->update = 0;
   VAR_4->offloaded = 1;
  }
  VAR_3 += VAR_4->num_adj_entries;
 }
 return 0;
}
