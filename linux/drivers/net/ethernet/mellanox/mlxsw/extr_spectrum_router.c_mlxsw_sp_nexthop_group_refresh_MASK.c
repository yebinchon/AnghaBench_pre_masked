
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlxsw_sp_nexthop_group {int count; int adj_index_valid; int adj_index; scalar_t__ ecmp_size; struct mlxsw_sp_nexthop* nexthops; scalar_t__ sum_norm_weight; int gateway; } ;
struct mlxsw_sp_nexthop {scalar_t__ should_offload; scalar_t__ offloaded; int update; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*,int ,scalar_t__) ;
 int FUNC_2 (struct mlxsw_sp*,scalar_t__*) ;
 int FUNC_3 (struct mlxsw_sp*,int ,scalar_t__,int *) ;
 int FUNC_4 (struct mlxsw_sp*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*) ;
 int FUNC_7 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_8 (struct mlxsw_sp_nexthop_group*) ;
 int FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*,int) ;

__attribute__((used)) static void
FUNC_10(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_nexthop_group *VAR_2)
{
 u16 VAR_3, VAR_4;
 struct mlxsw_sp_nexthop *VAR_5;
 bool VAR_6 = 0;
 u32 VAR_7;
 bool VAR_8;
 u32 VAR_9;
 int VAR_10;
 int VAR_11;

 if (!VAR_2->gateway) {
  FUNC_6(VAR_1, VAR_2);
  return;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2->count; VAR_10++) {
  VAR_5 = &VAR_2->nexthops[VAR_10];

  if (VAR_5->should_offload != VAR_5->offloaded) {
   VAR_6 = 1;
   if (VAR_5->should_offload)
    VAR_5->update = 1;
  }
 }
 if (!VAR_6) {



  VAR_11 = FUNC_9(VAR_1, VAR_2, 0);
  if (VAR_11) {
   FUNC_0(VAR_1->bus_info->dev, "Failed to update neigh MAC in adjacency table.\n");
   goto set_trap;
  }
  return;
 }
 FUNC_7(VAR_2);
 if (!VAR_2->sum_norm_weight)



  goto set_trap;

 VAR_3 = VAR_2->sum_norm_weight;
 VAR_11 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_11)

  goto set_trap;

 VAR_11 = FUNC_3(VAR_1, VAR_0,
      VAR_3, &VAR_7);
 if (VAR_11) {



  FUNC_0(VAR_1->bus_info->dev, "Failed to allocate KVD linear area for nexthop group.\n");
  goto set_trap;
 }
 VAR_8 = VAR_2->adj_index_valid;
 VAR_9 = VAR_2->adj_index;
 VAR_4 = VAR_2->ecmp_size;
 VAR_2->adj_index_valid = 1;
 VAR_2->adj_index = VAR_7;
 VAR_2->ecmp_size = VAR_3;
 FUNC_8(VAR_2);
 VAR_11 = FUNC_9(VAR_1, VAR_2, 1);
 if (VAR_11) {
  FUNC_0(VAR_1->bus_info->dev, "Failed to update neigh MAC in adjacency table.\n");
  goto set_trap;
 }

 if (!VAR_8) {



  VAR_11 = FUNC_6(VAR_1, VAR_2);
  if (VAR_11) {
   FUNC_0(VAR_1->bus_info->dev, "Failed to add adjacency index to fib entries.\n");
   goto set_trap;
  }
  return;
 }

 VAR_11 = FUNC_1(VAR_1, VAR_2,
          VAR_9, VAR_4);
 FUNC_4(VAR_1, VAR_0,
      VAR_4, VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_1->bus_info->dev, "Failed to mass-update adjacency index for nexthop group.\n");
  goto set_trap;
 }


 FUNC_5(VAR_2);

 return;

set_trap:
 VAR_8 = VAR_2->adj_index_valid;
 VAR_2->adj_index_valid = 0;
 for (VAR_10 = 0; VAR_10 < VAR_2->count; VAR_10++) {
  VAR_5 = &VAR_2->nexthops[VAR_10];
  VAR_5->offloaded = 0;
 }
 VAR_11 = FUNC_6(VAR_1, VAR_2);
 if (VAR_11)
  FUNC_0(VAR_1->bus_info->dev, "Failed to set traps for fib entries.\n");
 if (VAR_8)
  FUNC_4(VAR_1, VAR_0,
       VAR_2->ecmp_size, VAR_2->adj_index);
}
