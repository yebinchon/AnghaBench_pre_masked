
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int mlxsw_sp; struct net_device* dev; } ;
struct mlxsw_sp_fid {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_fid* FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int *) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 struct mlxsw_sp_fid* FUNC_5 (int ,struct net_device*,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static struct mlxsw_sp_fid *
FUNC_9(struct mlxsw_sp_rif *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;
 u16 VAR_4;
 int VAR_5;

 if (FUNC_4(VAR_1->dev)) {
  VAR_4 = FUNC_8(VAR_1->dev);
  VAR_3 = FUNC_7(VAR_1->dev);
  if (FUNC_2(!FUNC_6(VAR_3)))
   return FUNC_0(-VAR_0);
 } else {
  VAR_5 = FUNC_3(VAR_1->dev, &VAR_4);
  if (VAR_5 < 0 || !VAR_4) {
   FUNC_1(VAR_2, "Couldn't determine bridge PVID");
   return FUNC_0(-VAR_0);
  }
 }

 return FUNC_5(VAR_1->mlxsw_sp, VAR_3, VAR_4, VAR_2);
}
