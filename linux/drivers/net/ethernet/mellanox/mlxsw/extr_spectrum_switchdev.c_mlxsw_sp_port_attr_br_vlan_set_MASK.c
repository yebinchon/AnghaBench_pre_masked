
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_device {int vlan_enabled; int dev; } ;
struct mlxsw_sp {int bridge; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_1,
       struct switchdev_trans *VAR_2,
       struct net_device *VAR_3,
       bool VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_1->mlxsw_sp;
 struct mlxsw_sp_bridge_device *VAR_6;

 if (!FUNC_3(VAR_2))
  return 0;

 VAR_6 = FUNC_1(VAR_5->bridge, VAR_3);
 if (FUNC_0(!VAR_6))
  return -VAR_0;

 if (VAR_6->vlan_enabled == VAR_4)
  return 0;

 FUNC_2(VAR_6->dev, "VLAN filtering can't be changed for existing bridge\n");
 return -VAR_0;
}
