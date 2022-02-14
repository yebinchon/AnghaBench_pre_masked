
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_vlan {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_sp_port_vlan* FUNC_1 (struct mlxsw_sp_port*,int ) ;
 int FUNC_2 (struct mlxsw_sp_port_vlan*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct mlxsw_sp_port_vlan*) ;
 struct mlxsw_sp_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
          struct net_device *VAR_2,
          unsigned long VAR_3, u16 VAR_4,
          struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp_port *VAR_6 = FUNC_4(VAR_2);
 struct mlxsw_sp_port_vlan *VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_4);
 if (FUNC_0(!VAR_7))
  return -VAR_0;

 switch (VAR_3) {
 case 128:
  return FUNC_2(VAR_7,
            VAR_1, VAR_5);
 case 129:
  FUNC_3(VAR_7);
  break;
 }

 return 0;
}
