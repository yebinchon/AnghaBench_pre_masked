
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {int info; int linking; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;




 struct mlxsw_sp* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*) ;
 struct netlink_ext_ack* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_0, unsigned long VAR_1,
     struct netdev_notifier_changeupper_info *VAR_2)
{
 struct mlxsw_sp *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;




 if (!VAR_3 || FUNC_4(VAR_0))
  return 0;

 switch (VAR_1) {
 case 128:
  return 0;
 case 129:
  if (VAR_2->linking) {
   struct netlink_ext_ack *VAR_5;

   VAR_5 = FUNC_3(&VAR_2->info);
   VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_5);
  } else {
   FUNC_2(VAR_3, VAR_0);
  }
  break;
 }

 return VAR_4;
}
