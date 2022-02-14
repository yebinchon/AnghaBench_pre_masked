
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*,unsigned long,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*,unsigned long,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net_device*,struct net_device*,unsigned long,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct mlxsw_sp *VAR_0,
     struct net_device *VAR_1,
     unsigned long VAR_2,
     struct netlink_ext_ack *VAR_3)
{
 struct net_device *VAR_4 = FUNC_8(VAR_1);
 u16 VAR_5 = FUNC_9(VAR_1);

 if (FUNC_6(VAR_1))
  return 0;

 if (FUNC_4(VAR_4))
  return FUNC_3(VAR_1, VAR_4,
        VAR_2, VAR_5, VAR_3);
 else if (FUNC_7(VAR_4))
  return FUNC_0(VAR_1, VAR_4, VAR_2,
           VAR_5, VAR_3);
 else if (FUNC_5(VAR_4) && FUNC_1(VAR_4))
  return FUNC_2(VAR_0, VAR_1, VAR_2,
            VAR_3);

 return 0;
}
