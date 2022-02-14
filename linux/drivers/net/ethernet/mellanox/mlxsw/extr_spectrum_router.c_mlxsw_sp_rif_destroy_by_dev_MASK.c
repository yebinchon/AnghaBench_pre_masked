
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_1 (struct mlxsw_sp*,struct net_device*) ;

void FUNC_2(struct mlxsw_sp *VAR_0,
     struct net_device *VAR_1)
{
 struct mlxsw_sp_rif *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return;
 FUNC_0(VAR_2);
}
