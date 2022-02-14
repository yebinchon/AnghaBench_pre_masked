
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif_params {struct net_device* dev; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_rif*) ;


 int FUNC_1 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_rif_params*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_4 (struct mlxsw_sp*,struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_0,
       struct net_device *VAR_1,
       unsigned long VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct mlxsw_sp_rif_params VAR_4 = {
  .dev = VAR_1,
 };
 struct mlxsw_sp_rif *VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_2(VAR_0, &VAR_4, VAR_3);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  break;
 case 129:
  VAR_5 = FUNC_4(VAR_0, VAR_1);
  FUNC_3(VAR_5);
  break;
 }

 return 0;
}
