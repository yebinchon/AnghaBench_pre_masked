
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_vlan {scalar_t__ fid; } ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp_bridge_port {struct net_device* dev; } ;
struct mlxsw_sp_bridge_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp_port*,int ) ;
 int FUNC_4 (struct mlxsw_sp_port_vlan*,struct mlxsw_sp_bridge_port*,struct netlink_ext_ack*) ;
 struct mlxsw_sp_port_vlan* FUNC_5 (struct mlxsw_sp_port*,int ) ;
 int FUNC_6 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct mlxsw_sp_bridge_device *VAR_2,
    struct mlxsw_sp_bridge_port *VAR_3,
    struct mlxsw_sp_port *VAR_4,
    struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp_port_vlan *VAR_6;
 struct net_device *VAR_7 = VAR_3->dev;
 u16 VAR_8;

 VAR_8 = FUNC_2(VAR_7) ? FUNC_7(VAR_7) : VAR_1;
 VAR_6 = FUNC_5(VAR_4, VAR_8);
 if (FUNC_1(!VAR_6))
  return -VAR_0;

 if (FUNC_3(VAR_4, VAR_2->dev)) {
  FUNC_0(VAR_5, "Can not bridge VLAN uppers of the same port");
  return -VAR_0;
 }


 if (VAR_6->fid)
  FUNC_6(VAR_6);

 return FUNC_4(VAR_6, VAR_3,
           VAR_5);
}
