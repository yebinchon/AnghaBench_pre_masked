
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr_table {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mr_route_info {int dummy; } ;
struct mlxsw_sp_mr_route_params {int prio; struct mlxsw_sp_mr_route_info value; int key; } ;
struct mlxsw_sp_mr_route {int route_priv; int key; } ;
struct mlxsw_sp_mr {TYPE_1__* mr_ops; int priv; } ;
struct mlxsw_sp {struct mlxsw_sp_mr* mr; } ;
struct TYPE_2__ {int (* route_create ) (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_mr_route_params*) ;int (* route_update ) (struct mlxsw_sp*,int ,struct mlxsw_sp_mr_route_info*) ;int route_priv_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlxsw_sp_mr_table*,struct mlxsw_sp_mr_route*,struct mlxsw_sp_mr_route_info*) ;
 int FUNC_3 (struct mlxsw_sp_mr_route_info*) ;
 int FUNC_4 (struct mlxsw_sp_mr_route*) ;
 int FUNC_5 (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_mr_route_params*) ;
 int FUNC_6 (struct mlxsw_sp*,int ,struct mlxsw_sp_mr_route_info*) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp_mr_table *VAR_2,
       struct mlxsw_sp_mr_route *VAR_3,
       bool VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_2->mlxsw_sp;
 struct mlxsw_sp_mr_route_info VAR_6;
 struct mlxsw_sp_mr *VAR_7 = VAR_5->mr;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3, &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (!VAR_4) {
  struct mlxsw_sp_mr_route_params VAR_9;

  VAR_3->route_priv = FUNC_1(VAR_7->mr_ops->route_priv_size,
            VAR_1);
  if (!VAR_3->route_priv) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_9.key = VAR_3->key;
  VAR_9.value = VAR_6;
  VAR_9.prio = FUNC_4(VAR_3);
  VAR_8 = VAR_7->mr_ops->route_create(VAR_5, VAR_7->priv,
            VAR_3->route_priv,
            &VAR_9);
  if (VAR_8)
   FUNC_0(VAR_3->route_priv);
 } else {
  VAR_8 = VAR_7->mr_ops->route_update(VAR_5, VAR_3->route_priv,
            &VAR_6);
 }
out:
 FUNC_3(&VAR_6);
 return VAR_8;
}
