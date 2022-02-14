
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int vni; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct mlxsw_sp*,struct net_device const*) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp_fid* FUNC_2 (struct mlxsw_sp*,int ) ;
 int FUNC_3 (struct mlxsw_sp_fid*) ;
 struct vxlan_dev* FUNC_4 (struct net_device const*) ;
 int FUNC_5 (struct net_device const*) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_bridge_device *VAR_1,
      const struct net_device *VAR_2, u16 VAR_3)
{
 struct vxlan_dev *VAR_4 = FUNC_4(VAR_2);
 __be32 VAR_5 = VAR_4->cfg.vni;
 struct mlxsw_sp_fid *VAR_6;

 if (!FUNC_5(VAR_2))
  return;

 VAR_6 = FUNC_2(VAR_0, VAR_5);
 if (!VAR_6)
  return;


 if (FUNC_1(VAR_6) != VAR_3)
  goto out;

 FUNC_0(VAR_0, VAR_2);

out:
 FUNC_3(VAR_6);
}
