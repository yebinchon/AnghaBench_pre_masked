
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {int linking; struct net_device* upper_dev; int info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_sp* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_3 (struct mlxsw_sp*,struct net_device*) ;
 struct netlink_ext_ack* FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
      struct net_device *VAR_2,
      unsigned long VAR_3, void *VAR_4,
      u16 VAR_5)
{
 struct mlxsw_sp *VAR_6 = FUNC_1(VAR_1);
 struct netdev_notifier_changeupper_info *VAR_7 = VAR_4;
 struct netlink_ext_ack *VAR_8;
 struct net_device *VAR_9;

 if (!VAR_6)
  return 0;

 VAR_8 = FUNC_4(&VAR_7->info);

 switch (VAR_3) {
 case 128:
  VAR_9 = VAR_7->upper_dev;
  if (!FUNC_5(VAR_9)) {
   FUNC_0(VAR_8, "Unknown upper device type");
   return -VAR_0;
  }
  if (!VAR_7->linking)
   break;
  if (FUNC_5(VAR_9) &&
      !FUNC_2(VAR_6, VAR_1)) {
   FUNC_0(VAR_8, "macvlan is only supported on top of router interfaces");
   return -VAR_0;
  }
  break;
 case 129:
  VAR_9 = VAR_7->upper_dev;
  if (VAR_7->linking)
   break;
  if (FUNC_5(VAR_9))
   FUNC_3(VAR_6, VAR_9);
  break;
 }

 return 0;
}
