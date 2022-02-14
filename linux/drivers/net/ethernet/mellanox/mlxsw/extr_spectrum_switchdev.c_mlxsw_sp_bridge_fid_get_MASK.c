
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* ops; } ;
struct mlxsw_sp {int bridge; } ;
struct TYPE_2__ {struct mlxsw_sp_fid* (* fid_get ) (struct mlxsw_sp_bridge_device*,int ,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 struct mlxsw_sp_fid* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct mlxsw_sp_bridge_device* FUNC_2 (int ,struct net_device const*) ;
 struct mlxsw_sp_fid* FUNC_3 (struct mlxsw_sp_bridge_device*,int ,struct netlink_ext_ack*) ;

struct mlxsw_sp_fid *FUNC_4(struct mlxsw_sp *VAR_1,
          const struct net_device *VAR_2,
          u16 VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_sp_bridge_device *VAR_5;

 VAR_5 = FUNC_2(VAR_1->bridge, VAR_2);
 if (FUNC_1(!VAR_5))
  return FUNC_0(-VAR_0);

 return VAR_5->ops->fid_get(VAR_5, VAR_3, VAR_4);
}
