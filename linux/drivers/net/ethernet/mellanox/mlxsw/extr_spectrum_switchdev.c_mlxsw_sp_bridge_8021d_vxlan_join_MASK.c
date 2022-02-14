
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int vni; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_nve_params {struct net_device const* dev; int vni; int type; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_2__* dev; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_sp_fid* FUNC_1 (struct mlxsw_sp*,int ) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fid*,struct mlxsw_sp_nve_params*,struct netlink_ext_ack*) ;
 struct vxlan_dev* FUNC_6 (struct net_device const*) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp_bridge_device *VAR_2,
     const struct net_device *VAR_3, u16 VAR_4,
     struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp *VAR_6 = FUNC_4(VAR_2->dev);
 struct vxlan_dev *VAR_7 = FUNC_6(VAR_3);
 struct mlxsw_sp_nve_params VAR_8 = {
  .type = VAR_1,
  .vni = VAR_7->cfg.vni,
  .dev = VAR_3,
 };
 struct mlxsw_sp_fid *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_6, VAR_2->dev->ifindex);
 if (!VAR_9) {
  FUNC_0(VAR_5, "Did not find a corresponding FID");
  return -VAR_0;
 }

 if (FUNC_3(VAR_9)) {
  FUNC_0(VAR_5, "VNI is already set on FID");
  VAR_10 = -VAR_0;
  goto err_vni_exists;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_9, &VAR_8, VAR_5);
 if (VAR_10)
  goto err_nve_fid_enable;




 FUNC_2(VAR_9);

 return 0;

err_nve_fid_enable:
err_vni_exists:
 FUNC_2(VAR_9);
 return VAR_10;
}
