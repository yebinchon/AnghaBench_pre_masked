
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp_bridge {int dummy; } ;


 struct mlxsw_sp_bridge_device* FUNC_0 (struct mlxsw_sp_bridge*,struct net_device*) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (struct mlxsw_sp_bridge*,struct net_device*) ;

__attribute__((used)) static struct mlxsw_sp_bridge_device *
FUNC_2(struct mlxsw_sp_bridge *VAR_0,
      struct net_device *VAR_1)
{
 struct mlxsw_sp_bridge_device *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
