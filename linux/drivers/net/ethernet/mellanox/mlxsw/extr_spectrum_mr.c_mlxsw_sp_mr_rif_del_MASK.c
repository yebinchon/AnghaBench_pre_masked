
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_mr_vif {int dev; } ;
struct mlxsw_sp_mr_table {int dummy; } ;


 struct mlxsw_sp_mr_vif* FUNC_0 (struct mlxsw_sp_mr_table*,struct net_device const*) ;
 int FUNC_1 (struct mlxsw_sp_mr_table*,int ,struct mlxsw_sp_mr_vif*) ;
 struct net_device* FUNC_2 (struct mlxsw_sp_rif const*) ;

void FUNC_3(struct mlxsw_sp_mr_table *VAR_0,
    const struct mlxsw_sp_rif *VAR_1)
{
 const struct net_device *VAR_2 = FUNC_2(VAR_1);
 struct mlxsw_sp_mr_vif *VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3)
  return;
 FUNC_1(VAR_0, VAR_3->dev, VAR_3);
}
