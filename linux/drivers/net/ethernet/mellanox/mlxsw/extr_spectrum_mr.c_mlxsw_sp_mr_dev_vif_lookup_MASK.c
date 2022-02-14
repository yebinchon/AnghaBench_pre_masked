
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vifi_t ;
struct net_device {int dummy; } ;
struct mlxsw_sp_mr_vif {struct net_device const* dev; } ;
struct mlxsw_sp_mr_table {struct mlxsw_sp_mr_vif* vifs; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct mlxsw_sp_mr_vif *
FUNC_0(struct mlxsw_sp_mr_table *VAR_1,
      const struct net_device *VAR_2)
{
 vifi_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->vifs[VAR_3].dev == VAR_2)
   return &VAR_1->vifs[VAR_3];
 return ((void*)0);
}
