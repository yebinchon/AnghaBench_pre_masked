
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_vlan {int dummy; } ;
struct switchdev_obj {int id; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {int mlxsw_sp; } ;


 int VAR_0 ;


 int FUNC_0 (struct switchdev_obj const*) ;
 struct switchdev_obj_port_vlan* FUNC_1 (struct switchdev_obj const*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ,struct switchdev_trans*) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct switchdev_obj_port_vlan const*,struct switchdev_trans*,struct netlink_ext_ack*) ;
 int FUNC_4 (int ) ;
 struct mlxsw_sp_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1,
     const struct switchdev_obj *VAR_2,
     struct switchdev_trans *VAR_3,
     struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_sp_port *VAR_5 = FUNC_5(VAR_1);
 const struct switchdev_obj_port_vlan *VAR_6;
 int VAR_7 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_6 = FUNC_1(VAR_2);
  VAR_7 = FUNC_3(VAR_5, VAR_6, VAR_3,
           VAR_4);

  if (FUNC_6(VAR_3)) {





   FUNC_4(VAR_5->mlxsw_sp);
  }
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_5,
         FUNC_0(VAR_2),
         VAR_3);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
