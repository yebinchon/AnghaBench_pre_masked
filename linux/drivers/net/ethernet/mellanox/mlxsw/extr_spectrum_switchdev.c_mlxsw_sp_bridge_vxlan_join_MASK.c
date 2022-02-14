
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* ops; } ;
struct mlxsw_sp {int bridge; } ;
struct TYPE_2__ {int (* vxlan_join ) (struct mlxsw_sp_bridge_device*,struct net_device const*,int ,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (int ,struct net_device const*) ;
 int FUNC_2 (struct mlxsw_sp_bridge_device*,struct net_device const*,int ,struct netlink_ext_ack*) ;

int FUNC_3(struct mlxsw_sp *VAR_1,
          const struct net_device *VAR_2,
          const struct net_device *VAR_3, u16 VAR_4,
          struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp_bridge_device *VAR_6;

 VAR_6 = FUNC_1(VAR_1->bridge, VAR_2);
 if (FUNC_0(!VAR_6))
  return -VAR_0;

 return VAR_6->ops->vxlan_join(VAR_6, VAR_3, VAR_4,
           VAR_5);
}
