
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mr_mfc {int dummy; } ;
struct mlxsw_sp_mr_table {int route_ht; int route_list; TYPE_3__* mlxsw_sp; TYPE_1__* ops; } ;
struct mlxsw_sp_mr_route {int node; int ht_node; int route_priv; int key; } ;
struct TYPE_6__ {TYPE_2__* bus_info; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int (* is_route_valid ) (struct mlxsw_sp_mr_table*,struct mr_mfc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_mr_route*) ;
 int FUNC_1 (struct mlxsw_sp_mr_route*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlxsw_sp_mr_route*) ;
 struct mlxsw_sp_mr_route* FUNC_7 (struct mlxsw_sp_mr_table*,struct mr_mfc*) ;
 int FUNC_8 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route*) ;
 int VAR_2 ;
 int FUNC_9 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route*,int) ;
 int FUNC_10 (int *,int *,int ) ;
 struct mlxsw_sp_mr_route* FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (struct mlxsw_sp_mr_table*,struct mr_mfc*) ;

int FUNC_14(struct mlxsw_sp_mr_table *VAR_3,
     struct mr_mfc *VAR_4, bool VAR_5)
{
 struct mlxsw_sp_mr_route *VAR_6 = ((void*)0);
 struct mlxsw_sp_mr_route *VAR_7;
 int VAR_8;

 if (!VAR_3->ops->is_route_valid(VAR_3, VAR_4))
  return -VAR_0;


 VAR_7 = FUNC_7(VAR_3, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);


 VAR_6 = FUNC_11(&VAR_3->route_ht,
            &VAR_7->key,
            VAR_2);
 if (VAR_5) {


  if (FUNC_2(!VAR_6)) {
   VAR_8 = -VAR_1;
   goto err_no_orig_route;
  }
  VAR_7->route_priv = VAR_6->route_priv;
 } else if (VAR_6) {



  FUNC_3(VAR_3->mlxsw_sp->bus_info->dev,
    "Offloading proxy routes is not supported.\n");
  VAR_8 = -VAR_0;
  goto err_duplicate_route;
 }


 FUNC_4(&VAR_7->node, &VAR_3->route_list);
 VAR_8 = FUNC_10(&VAR_3->route_ht,
         &VAR_7->ht_node,
         VAR_2);
 if (VAR_8)
  goto err_rhashtable_insert;


 VAR_8 = FUNC_9(VAR_3, VAR_7, VAR_5);
 if (VAR_8)
  goto err_mr_route_write;


 if (VAR_5) {
  FUNC_12(&VAR_3->route_ht,
           &VAR_6->ht_node,
           VAR_2);
  FUNC_5(&VAR_6->node);
  FUNC_8(VAR_3, VAR_6);
 }

 FUNC_6(VAR_7);
 return 0;

err_mr_route_write:
 FUNC_12(&VAR_3->route_ht, &VAR_7->ht_node,
          VAR_2);
err_rhashtable_insert:
 FUNC_5(&VAR_7->node);
err_no_orig_route:
err_duplicate_route:
 FUNC_8(VAR_3, VAR_7);
 return VAR_8;
}
