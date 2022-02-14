
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vifi_t ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_mr_vif {scalar_t__ dev; } ;
struct mlxsw_sp_mr_table {struct mlxsw_sp_mr_vif* vifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_mr_table*,struct net_device*,struct mlxsw_sp_mr_vif*,unsigned long,struct mlxsw_sp_rif const*) ;

int FUNC_2(struct mlxsw_sp_mr_table *VAR_3,
   struct net_device *VAR_4, vifi_t VAR_5,
   unsigned long VAR_6, const struct mlxsw_sp_rif *VAR_7)
{
 struct mlxsw_sp_mr_vif *VAR_8 = &VAR_3->vifs[VAR_5];

 if (FUNC_0(VAR_5 >= VAR_2))
  return -VAR_1;
 if (VAR_8->dev)
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_4, VAR_8, VAR_6, VAR_7);
}
