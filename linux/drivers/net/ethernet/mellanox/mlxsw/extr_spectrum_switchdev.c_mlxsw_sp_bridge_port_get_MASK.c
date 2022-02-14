
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_port {int ref_count; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp_bridge {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_bridge_port* FUNC_0 (struct mlxsw_sp_bridge_device*) ;
 struct mlxsw_sp_bridge_port* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_bridge_device*) ;
 struct mlxsw_sp_bridge_device* FUNC_3 (struct mlxsw_sp_bridge*,struct net_device*) ;
 int FUNC_4 (struct mlxsw_sp_bridge*,struct mlxsw_sp_bridge_device*) ;
 struct mlxsw_sp_bridge_port* FUNC_5 (struct mlxsw_sp_bridge_device*,struct net_device*) ;
 struct mlxsw_sp_bridge_port* FUNC_6 (struct mlxsw_sp_bridge*,struct net_device*) ;
 struct net_device* FUNC_7 (struct net_device*) ;

__attribute__((used)) static struct mlxsw_sp_bridge_port *
FUNC_8(struct mlxsw_sp_bridge *VAR_1,
    struct net_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_2);
 struct mlxsw_sp_bridge_device *VAR_4;
 struct mlxsw_sp_bridge_port *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_1, VAR_2);
 if (VAR_5) {
  VAR_5->ref_count++;
  return VAR_5;
 }

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err_bridge_port_create;
 }

 return VAR_5;

err_bridge_port_create:
 FUNC_4(VAR_1, VAR_4);
 return FUNC_1(VAR_6);
}
