
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_fid* fid; int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int local_port; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_port {int flags; struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* ops; } ;
struct TYPE_2__ {struct mlxsw_sp_fid* (* fid_get ) (struct mlxsw_sp_bridge_device*,int ,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_fid*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlxsw_sp_fid*) ;
 int FUNC_2 (struct mlxsw_sp_fid*,int ,int ,int) ;
 int FUNC_3 (struct mlxsw_sp_fid*,struct mlxsw_sp_port*,int ) ;
 int FUNC_4 (struct mlxsw_sp_fid*) ;
 int FUNC_5 (struct mlxsw_sp_bridge_port*) ;
 struct mlxsw_sp_fid* FUNC_6 (struct mlxsw_sp_bridge_device*,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp_port_vlan *VAR_4,
       struct mlxsw_sp_bridge_port *VAR_5,
       struct netlink_ext_ack *VAR_6)
{
 struct mlxsw_sp_port *VAR_7 = VAR_4->mlxsw_sp_port;
 struct mlxsw_sp_bridge_device *VAR_8;
 u8 VAR_9 = VAR_7->local_port;
 u16 VAR_10 = VAR_4->vid;
 struct mlxsw_sp_fid *VAR_11;
 int VAR_12;

 VAR_8 = VAR_5->bridge_device;
 VAR_11 = VAR_8->ops->fid_get(VAR_8, VAR_10, VAR_6);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = FUNC_2(VAR_11, VAR_3, VAR_9,
         VAR_5->flags & VAR_0);
 if (VAR_12)
  goto err_fid_uc_flood_set;

 VAR_12 = FUNC_2(VAR_11, VAR_2, VAR_9,
         FUNC_5(VAR_5));
 if (VAR_12)
  goto err_fid_mc_flood_set;

 VAR_12 = FUNC_2(VAR_11, VAR_1, VAR_9,
         1);
 if (VAR_12)
  goto err_fid_bc_flood_set;

 VAR_12 = FUNC_3(VAR_11, VAR_7, VAR_10);
 if (VAR_12)
  goto err_fid_port_vid_map;

 VAR_4->fid = VAR_11;

 return 0;

err_fid_port_vid_map:
 FUNC_2(VAR_11, VAR_1, VAR_9, 0);
err_fid_bc_flood_set:
 FUNC_2(VAR_11, VAR_2, VAR_9, 0);
err_fid_mc_flood_set:
 FUNC_2(VAR_11, VAR_3, VAR_9, 0);
err_fid_uc_flood_set:
 FUNC_4(VAR_11);
 return VAR_12;
}
