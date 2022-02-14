
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,struct net_device*,int ,struct netlink_ext_ack*) ;
 struct mlxsw_sp_rif* FUNC_1 (struct mlxsw_sp*,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_2,
      struct net_device *VAR_3,
      struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_sp_rif *VAR_5;




 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_2, VAR_3, VAR_0,
       VAR_4);

 return FUNC_0(VAR_2, VAR_3, VAR_1, VAR_4);
}
