
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_bridge_port* bridge_port; } ;
struct mlxsw_sp_port {int pvid; } ;
struct mlxsw_sp_bridge_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_1 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_3 (struct mlxsw_sp_port*,int ) ;
 int FUNC_4 (struct mlxsw_sp_port_vlan*,struct mlxsw_sp_bridge_port*,struct netlink_ext_ack*) ;
 struct mlxsw_sp_port_vlan* FUNC_5 (struct mlxsw_sp_port*,int ) ;
 int FUNC_6 (struct mlxsw_sp_port_vlan*) ;
 struct mlxsw_sp_port_vlan* FUNC_7 (struct mlxsw_sp_port*,int ) ;
 int FUNC_8 (struct mlxsw_sp_port*,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_9(struct mlxsw_sp_port *VAR_1,
         struct mlxsw_sp_bridge_port *VAR_2,
         u16 VAR_3, bool VAR_4, bool VAR_5,
         struct netlink_ext_ack *VAR_6)
{
 u16 VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_5);
 struct mlxsw_sp_port_vlan *VAR_8;
 u16 VAR_9 = VAR_1->pvid;
 int VAR_10;





 VAR_8 = FUNC_7(VAR_1, VAR_3);
 if (VAR_8 &&
     VAR_8->bridge_port != VAR_2)
  return -VAR_0;

 if (!VAR_8) {
  VAR_8 = FUNC_5(VAR_1,
              VAR_3);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }

 VAR_10 = FUNC_8(VAR_1, VAR_3, VAR_3, 1,
         VAR_4);
 if (VAR_10)
  goto err_port_vlan_set;

 VAR_10 = FUNC_3(VAR_1, VAR_7);
 if (VAR_10)
  goto err_port_pvid_set;

 VAR_10 = FUNC_4(VAR_8, VAR_2,
          VAR_6);
 if (VAR_10)
  goto err_port_vlan_bridge_join;

 return 0;

err_port_vlan_bridge_join:
 FUNC_3(VAR_1, VAR_9);
err_port_pvid_set:
 FUNC_8(VAR_1, VAR_3, VAR_3, 0, 0);
err_port_vlan_set:
 FUNC_6(VAR_8);
 return VAR_10;
}
