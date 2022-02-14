
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {int dev; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_fid*) ;
 struct net_device* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlxsw_sp_bridge_device*,struct net_device*,int ,struct netlink_ext_ack*) ;
 struct mlxsw_sp_fid* FUNC_4 (struct mlxsw_sp*,int ) ;
 int FUNC_5 (struct mlxsw_sp_fid*) ;
 scalar_t__ FUNC_6 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp* FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static struct mlxsw_sp_fid *
FUNC_9(struct mlxsw_sp_bridge_device *VAR_0,
         u16 VAR_1, struct netlink_ext_ack *VAR_2)
{
 struct mlxsw_sp *VAR_3 = FUNC_7(VAR_0->dev);
 struct net_device *VAR_4;
 struct mlxsw_sp_fid *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (FUNC_1(VAR_5))
  return VAR_5;

 if (FUNC_6(VAR_5))
  return VAR_5;




 VAR_4 = FUNC_2(VAR_0->dev,
        VAR_1);
 if (!VAR_4)
  return VAR_5;

 if (!FUNC_8(VAR_4))
  return VAR_5;

 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_1,
            VAR_2);
 if (VAR_6)
  goto err_vxlan_join;

 return VAR_5;

err_vxlan_join:
 FUNC_5(VAR_5);
 return FUNC_0(VAR_6);
}
