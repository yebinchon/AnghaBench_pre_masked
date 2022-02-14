
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {int info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_sp* FUNC_1 (struct net_device*) ;
 struct netlink_ext_ack* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 struct mlxsw_sp *VAR_5 = FUNC_1(VAR_2);
 struct netdev_notifier_changeupper_info *VAR_6 = VAR_4;
 struct netlink_ext_ack *VAR_7;

 if (!VAR_5 || VAR_3 != VAR_1)
  return 0;

 VAR_7 = FUNC_2(&VAR_6->info);


 FUNC_0(VAR_7, "Unknown upper device type");

 return -VAR_0;
}
