
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {int linking; struct net_device* upper_dev; int info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct net_device*) ;
 struct mlxsw_sp* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_4 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_5 (struct mlxsw_sp*,struct net_device*) ;
 struct netlink_ext_ack* FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1,
        unsigned long VAR_2, void *VAR_3)
{
 struct mlxsw_sp *VAR_4 = FUNC_2(VAR_1);
 struct netdev_notifier_changeupper_info *VAR_5 = VAR_3;
 struct netlink_ext_ack *VAR_6;
 struct net_device *VAR_7;

 if (!VAR_4)
  return 0;

 VAR_6 = FUNC_6(&VAR_5->info);

 switch (VAR_2) {
 case 128:
  VAR_7 = VAR_5->upper_dev;
  if (!FUNC_1(VAR_7) && !FUNC_7(VAR_7)) {
   FUNC_0(VAR_6, "Unknown upper device type");
   return -VAR_0;
  }
  if (!VAR_5->linking)
   break;
  if (FUNC_7(VAR_7) &&
      !FUNC_4(VAR_4, VAR_1)) {
   FUNC_0(VAR_6, "macvlan is only supported on top of router interfaces");
   return -VAR_0;
  }
  break;
 case 129:
  VAR_7 = VAR_5->upper_dev;
  if (VAR_5->linking)
   break;
  if (FUNC_1(VAR_7))
   FUNC_3(VAR_4, VAR_7);
  if (FUNC_7(VAR_7))
   FUNC_5(VAR_4, VAR_7);
  break;
 }

 return 0;
}
