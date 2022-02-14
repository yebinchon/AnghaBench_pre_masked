
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;




 int FUNC_0 (struct mlxsw_sp*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct mlxsw_sp*,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_0,
        struct net_device *VAR_1,
        unsigned long VAR_2,
        struct netlink_ext_ack *VAR_3)
{
 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_0, VAR_1, VAR_3);
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 }

 return 0;
}
