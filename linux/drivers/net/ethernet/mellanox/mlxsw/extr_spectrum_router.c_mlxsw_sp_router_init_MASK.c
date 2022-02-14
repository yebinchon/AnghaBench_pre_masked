
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int notifier_call; } ;
struct TYPE_10__ {int notifier_call; } ;
struct TYPE_8__ {int notifier_call; } ;
struct TYPE_11__ {int notifier_call; } ;
struct mlxsw_sp_router {TYPE_2__ inetaddr_nb; TYPE_3__ inet6addr_nb; int nexthop_ht; int nexthop_group_ht; TYPE_1__ netevent_nb; TYPE_7__ fib_nb; int nexthop_list; int nexthop_neighs_list; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {struct mlxsw_sp_router* router; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int FUNC_3 (struct mlxsw_sp_router*) ;
 struct mlxsw_sp_router* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*) ;
 int FUNC_8 (struct mlxsw_sp*) ;
 int FUNC_9 (struct mlxsw_sp*) ;
 int FUNC_10 (struct mlxsw_sp*) ;
 int FUNC_11 (struct mlxsw_sp*) ;
 int FUNC_12 (struct mlxsw_sp*,int *) ;
 int VAR_4 ;
 int FUNC_13 (struct mlxsw_sp*) ;
 int FUNC_14 (struct mlxsw_sp*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (struct mlxsw_sp*) ;
 int FUNC_16 (struct mlxsw_sp*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (struct mlxsw_sp*) ;
 int FUNC_18 (struct mlxsw_sp*) ;
 int FUNC_19 (TYPE_7__*,int ) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (TYPE_3__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_1__*) ;

int FUNC_28(struct mlxsw_sp *VAR_10)
{
 struct mlxsw_sp_router *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(sizeof(*VAR_10->router), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_10->router = VAR_11;
 VAR_11->mlxsw_sp = VAR_10;

 VAR_11->inetaddr_nb.notifier_call = VAR_3;
 VAR_12 = FUNC_21(&VAR_11->inetaddr_nb);
 if (VAR_12)
  goto err_register_inetaddr_notifier;

 VAR_11->inet6addr_nb.notifier_call = VAR_2;
 VAR_12 = FUNC_20(&VAR_11->inet6addr_nb);
 if (VAR_12)
  goto err_register_inet6addr_notifier;

 FUNC_0(&VAR_10->router->nexthop_neighs_list);
 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  goto err_router_init;

 VAR_12 = FUNC_16(VAR_10);
 if (VAR_12)
  goto err_rifs_init;

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12)
  goto err_ipips_init;

 VAR_12 = FUNC_24(&VAR_10->router->nexthop_ht,
         &VAR_6);
 if (VAR_12)
  goto err_nexthop_ht_init;

 VAR_12 = FUNC_24(&VAR_10->router->nexthop_group_ht,
         &VAR_5);
 if (VAR_12)
  goto err_nexthop_group_ht_init;

 FUNC_0(&VAR_10->router->nexthop_list);
 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12)
  goto err_lpm_init;

 VAR_12 = FUNC_12(VAR_10, &VAR_4);
 if (VAR_12)
  goto err_mr_init;

 VAR_12 = FUNC_18(VAR_10);
 if (VAR_12)
  goto err_vrs_init;

 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12)
  goto err_neigh_init;

 VAR_10->router->netevent_nb.notifier_call =
  VAR_9;
 VAR_12 = FUNC_22(&VAR_10->router->netevent_nb);
 if (VAR_12)
  goto err_register_netevent_notifier;

 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12)
  goto err_mp_hash_init;

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12)
  goto err_dscp_init;

 VAR_10->router->fib_nb.notifier_call = VAR_8;
 VAR_12 = FUNC_19(&VAR_10->router->fib_nb,
        VAR_7);
 if (VAR_12)
  goto err_register_fib_notifier;

 return 0;

err_register_fib_notifier:
err_dscp_init:
err_mp_hash_init:
 FUNC_27(&VAR_10->router->netevent_nb);
err_register_netevent_notifier:
 FUNC_13(VAR_10);
err_neigh_init:
 FUNC_17(VAR_10);
err_vrs_init:
 FUNC_11(VAR_10);
err_mr_init:
 FUNC_8(VAR_10);
err_lpm_init:
 FUNC_23(&VAR_10->router->nexthop_group_ht);
err_nexthop_group_ht_init:
 FUNC_23(&VAR_10->router->nexthop_ht);
err_nexthop_ht_init:
 FUNC_6(VAR_10);
err_ipips_init:
 FUNC_15(VAR_10);
err_rifs_init:
 FUNC_1(VAR_10);
err_router_init:
 FUNC_25(&VAR_11->inet6addr_nb);
err_register_inet6addr_notifier:
 FUNC_26(&VAR_11->inetaddr_nb);
err_register_inetaddr_notifier:
 FUNC_3(VAR_10->router);
 return VAR_12;
}
