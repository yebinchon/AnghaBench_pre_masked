
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int vni; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {int dev; } ;
struct mlxsw_sp {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct mlxsw_sp_bridge_device*,struct net_device const*,scalar_t__,struct netlink_ext_ack*) ;
 int FUNC_4 (struct mlxsw_sp*,struct net_device const*) ;
 scalar_t__ FUNC_5 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp_fid* FUNC_6 (struct mlxsw_sp*,int ) ;
 int FUNC_7 (struct mlxsw_sp_fid*) ;
 struct vxlan_dev* FUNC_8 (struct net_device const*) ;
 int FUNC_9 (struct net_device const*) ;

__attribute__((used)) static int
FUNC_10(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_bridge_device *VAR_2,
      const struct net_device *VAR_3, u16 VAR_4,
      bool VAR_5, bool VAR_6,
      struct netlink_ext_ack *VAR_7)
{
 struct vxlan_dev *VAR_8 = FUNC_8(VAR_3);
 __be32 VAR_9 = VAR_8->cfg.vni;
 struct mlxsw_sp_fid *VAR_10;
 u16 VAR_11;
 int VAR_12;






 if (VAR_5 && VAR_6 &&
     FUNC_2(VAR_2->dev, VAR_4)) {
  FUNC_0(VAR_7, "VLAN already mapped to a different VNI");
  return -VAR_0;
 }

 if (!FUNC_9(VAR_3))
  return 0;





 VAR_10 = FUNC_6(VAR_1, VAR_9);
 if (!VAR_10) {
  if (!VAR_5 || !VAR_6)
   return 0;
  return FUNC_3(VAR_2,
       VAR_3, VAR_4, VAR_7);
 }






 VAR_11 = FUNC_5(VAR_10);
 if (VAR_4 == VAR_11) {
  if (FUNC_1(VAR_5 && VAR_6)) {
   FUNC_7(VAR_10);
   return -VAR_0;
  }
  FUNC_4(VAR_1, VAR_3);
  FUNC_7(VAR_10);
  return 0;
 }




 if (!VAR_6) {
  FUNC_7(VAR_10);
  return 0;
 }




 FUNC_4(VAR_1, VAR_3);
 FUNC_7(VAR_10);




 if (!VAR_5)
  return 0;

 VAR_12 = FUNC_3(VAR_2, VAR_3, VAR_4,
            VAR_7);
 if (VAR_12)
  goto err_vxlan_join;

 return 0;

err_vxlan_join:
 FUNC_3(VAR_2, VAR_3, VAR_11,
      ((void*)0));
 return VAR_12;
}
