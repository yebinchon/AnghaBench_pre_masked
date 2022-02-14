
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct neighbour {int nud_state; int dead; int lock; int nexthop_list; int nexthop_neighs_list_node; } ;
struct mlxsw_sp_nexthop {int neigh_list_node; struct neighbour* neigh_entry; TYPE_2__* rif; int gw_addr; TYPE_1__* nh_grp; } ;
struct mlxsw_sp_neigh_entry {int nud_state; int dead; int lock; int nexthop_list; int nexthop_neighs_list_node; } ;
struct mlxsw_sp {TYPE_3__* router; } ;
struct TYPE_6__ {int nexthop_neighs_list; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int neigh_tbl; int gateway; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int VAR_1 ;
 int FUNC_1 (struct neighbour*) ;
 int FUNC_2 (struct mlxsw_sp_nexthop*,int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct neighbour* FUNC_5 (struct mlxsw_sp*,struct neighbour*) ;
 struct neighbour* FUNC_6 (struct mlxsw_sp*,struct neighbour*) ;
 struct neighbour* FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct neighbour*,int *) ;
 struct neighbour* FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (struct neighbour*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct mlxsw_sp *VAR_2,
           struct mlxsw_sp_nexthop *VAR_3)
{
 struct mlxsw_sp_neigh_entry *VAR_4;
 struct neighbour *VAR_5;
 u8 VAR_6, VAR_7;
 int VAR_8;

 if (!VAR_3->nh_grp->gateway || VAR_3->neigh_entry)
  return 0;






 VAR_5 = FUNC_9(VAR_3->nh_grp->neigh_tbl, &VAR_3->gw_addr, VAR_3->rif->dev);
 if (!VAR_5) {
  VAR_5 = FUNC_7(VAR_3->nh_grp->neigh_tbl, &VAR_3->gw_addr,
     VAR_3->rif->dev);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  FUNC_8(VAR_5, ((void*)0));
 }
 VAR_4 = FUNC_6(VAR_2, VAR_5);
 if (!VAR_4) {
  VAR_4 = FUNC_5(VAR_2, VAR_5);
  if (FUNC_0(VAR_4)) {
   VAR_8 = -VAR_0;
   goto err_neigh_entry_create;
  }
 }




 if (FUNC_4(&VAR_4->nexthop_list))
  FUNC_3(&VAR_4->nexthop_neighs_list_node,
         &VAR_2->router->nexthop_neighs_list);

 VAR_3->neigh_entry = VAR_4;
 FUNC_3(&VAR_3->neigh_list_node, &VAR_4->nexthop_list);
 FUNC_11(&VAR_5->lock);
 VAR_6 = VAR_5->nud_state;
 VAR_7 = VAR_5->dead;
 FUNC_12(&VAR_5->lock);
 FUNC_2(VAR_3, !(VAR_6 & VAR_1 && !VAR_7));

 return 0;

err_neigh_entry_create:
 FUNC_10(VAR_5);
 return VAR_8;
}
