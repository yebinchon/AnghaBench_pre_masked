
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vni; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_fid* FUNC_0 (struct mlxsw_sp*,int ) ;
 int FUNC_1 (struct mlxsw_sp_fid*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_fid*) ;
 struct vxlan_dev* FUNC_3 (struct net_device const*) ;

void FUNC_4(struct mlxsw_sp *VAR_0,
     const struct net_device *VAR_1)
{
 struct vxlan_dev *VAR_2 = FUNC_3(VAR_1);
 struct mlxsw_sp_fid *VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_2->cfg.vni);
 if (!VAR_3)
  return;

 FUNC_2(VAR_0, VAR_3);
 FUNC_1(VAR_3);
}
