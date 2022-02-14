
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int dummy; } ;
struct mlxsw_sp_nexthop {struct mlxsw_sp_neigh_entry* neigh_entry; int neigh_list_node; } ;
struct TYPE_2__ {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {int nexthop_list; int connected; int nexthop_neighs_list_node; TYPE_1__ key; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_nexthop*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_neigh_entry*) ;
 int FUNC_4 (struct neighbour*) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_nexthop *VAR_1)
{
 struct mlxsw_sp_neigh_entry *VAR_2 = VAR_1->neigh_entry;
 struct neighbour *VAR_3;

 if (!VAR_2)
  return;
 VAR_3 = VAR_2->key.n;

 FUNC_0(VAR_1, 1);
 FUNC_1(&VAR_1->neigh_list_node);
 VAR_1->neigh_entry = ((void*)0);




 if (FUNC_2(&VAR_2->nexthop_list))
  FUNC_1(&VAR_2->nexthop_neighs_list_node);

 if (!VAR_2->connected && FUNC_2(&VAR_2->nexthop_list))
  FUNC_3(VAR_0, VAR_2);

 FUNC_4(VAR_3);
}
