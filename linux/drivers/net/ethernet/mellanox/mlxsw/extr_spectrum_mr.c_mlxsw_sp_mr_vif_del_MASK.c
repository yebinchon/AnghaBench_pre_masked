
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vifi_t ;
struct mlxsw_sp_mr_vif {int dev; } ;
struct mlxsw_sp_mr_table {struct mlxsw_sp_mr_vif* vifs; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_mr_table*,int *,struct mlxsw_sp_mr_vif*) ;

void FUNC_2(struct mlxsw_sp_mr_table *VAR_1, vifi_t VAR_2)
{
 struct mlxsw_sp_mr_vif *VAR_3 = &VAR_1->vifs[VAR_2];

 if (FUNC_0(VAR_2 >= VAR_0))
  return;
 if (FUNC_0(!VAR_3->dev))
  return;
 FUNC_1(VAR_1, ((void*)0), VAR_3);
}
