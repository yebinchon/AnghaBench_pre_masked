
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {struct net_device* orig_dev; } ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; TYPE_1__ obj; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {TYPE_2__* bridge_device; } ;
struct mlxsw_sp {int bridge; } ;
struct TYPE_4__ {int vlan_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_sp_bridge_port* FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_2,
       const struct switchdev_obj_port_vlan *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_2->mlxsw_sp;
 struct net_device *VAR_5 = VAR_3->obj.orig_dev;
 struct mlxsw_sp_bridge_port *VAR_6;
 u16 VAR_7;

 if (FUNC_3(VAR_5))
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4->bridge, VAR_5);
 if (FUNC_0(!VAR_6))
  return -VAR_0;

 if (!VAR_6->bridge_device->vlan_enabled)
  return 0;

 for (VAR_7 = VAR_3->vid_begin; VAR_7 <= VAR_3->vid_end; VAR_7++)
  FUNC_2(VAR_2, VAR_6, VAR_7);

 return 0;
}
