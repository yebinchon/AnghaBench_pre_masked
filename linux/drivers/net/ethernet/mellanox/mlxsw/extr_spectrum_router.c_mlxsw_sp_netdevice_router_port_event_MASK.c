
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;





 struct mlxsw_sp* FUNC_0 (struct net_device*) ;
 struct mlxsw_sp_rif* FUNC_1 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_rif*) ;
 int FUNC_3 (struct mlxsw_sp_rif*,void*) ;

int FUNC_4(struct net_device *VAR_0,
      unsigned long VAR_1, void *VAR_2)
{
 struct mlxsw_sp *VAR_3;
 struct mlxsw_sp_rif *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return 0;

 switch (VAR_1) {
 case 129:
 case 130:
  return FUNC_2(VAR_3, VAR_4);
 case 128:
  return FUNC_3(VAR_4, VAR_2);
 }

 return 0;
}
