
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp*,struct net_device*,unsigned long,struct netlink_ext_ack*) ;
 int FUNC_2 (struct net_device*,unsigned long,struct netlink_ext_ack*) ;
 int FUNC_3 (struct mlxsw_sp*,struct net_device*,unsigned long,struct netlink_ext_ack*) ;
 int FUNC_4 (struct net_device*,unsigned long,struct netlink_ext_ack*) ;
 int FUNC_5 (struct mlxsw_sp*,struct net_device*,unsigned long,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct mlxsw_sp *VAR_0,
         struct net_device *VAR_1,
         unsigned long VAR_2,
         struct netlink_ext_ack *VAR_3)
{
 if (FUNC_6(VAR_1))
  return FUNC_4(VAR_1, VAR_2, VAR_3);
 else if (FUNC_8(VAR_1))
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 else if (FUNC_7(VAR_1))
  return FUNC_1(VAR_0, VAR_1, VAR_2,
            VAR_3);
 else if (FUNC_0(VAR_1))
  return FUNC_5(VAR_0, VAR_1, VAR_2,
          VAR_3);
 else if (FUNC_9(VAR_1))
  return FUNC_3(VAR_0, VAR_1, VAR_2,
             VAR_3);
 else
  return 0;
}
