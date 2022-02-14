
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_port {TYPE_1__* default_vlan; } ;
struct mlxsw_sp_bridge_port {int dev; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ fid; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_bridge_device *VAR_1,
    struct mlxsw_sp_bridge_port *VAR_2,
    struct mlxsw_sp_port *VAR_3,
    struct netlink_ext_ack *VAR_4)
{
 if (FUNC_1(VAR_2->dev)) {
  FUNC_0(VAR_4, "Can not enslave a VLAN device to a VLAN-aware bridge");
  return -VAR_0;
 }


 if (VAR_3->default_vlan->fid)
  FUNC_2(VAR_3->default_vlan);

 return 0;
}
