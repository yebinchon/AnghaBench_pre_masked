
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {int linking; struct net_device* upper_dev; int info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_5 (struct mlxsw_sp_port*,struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_6 (struct mlxsw_sp_port*,struct net_device*,struct net_device*) ;
 int FUNC_7 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_8 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 struct netlink_ext_ack* FUNC_10 (int *) ;
 struct mlxsw_sp_port* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_2,
           struct net_device *VAR_3,
           unsigned long VAR_4, void *VAR_5,
           u16 VAR_6)
{
 struct mlxsw_sp_port *VAR_7 = FUNC_11(VAR_3);
 struct mlxsw_sp *VAR_8 = VAR_7->mlxsw_sp;
 struct netdev_notifier_changeupper_info *VAR_9 = VAR_5;
 struct netlink_ext_ack *VAR_10;
 struct net_device *VAR_11;
 int VAR_12 = 0;

 VAR_10 = FUNC_10(&VAR_9->info);

 switch (VAR_4) {
 case 128:
  VAR_11 = VAR_9->upper_dev;
  if (!FUNC_12(VAR_11) &&
      !FUNC_13(VAR_11)) {
   FUNC_0(VAR_10, "Unknown upper device type");
   return -VAR_0;
  }
  if (!VAR_9->linking)
   break;
  if (FUNC_12(VAR_11) &&
      !FUNC_2(VAR_8, VAR_11) &&
      FUNC_3(VAR_11) &&
      !FUNC_4(VAR_11, VAR_10))
   return -VAR_1;
  if (FUNC_9(VAR_11) &&
      (!FUNC_12(VAR_11) ||
       !FUNC_2(VAR_8,
         VAR_11))) {
   FUNC_0(VAR_10, "Enslaving a port to a device that already has an upper device is not supported");
   return -VAR_0;
  }
  if (FUNC_13(VAR_11) &&
      !FUNC_7(VAR_8, VAR_2)) {
   FUNC_0(VAR_10, "macvlan is only supported on top of router interfaces");
   return -VAR_1;
  }
  break;
 case 129:
  VAR_11 = VAR_9->upper_dev;
  if (FUNC_12(VAR_11)) {
   if (VAR_9->linking)
    VAR_12 = FUNC_5(VAR_7,
        VAR_2,
        VAR_11,
        VAR_10);
   else
    FUNC_6(VAR_7,
          VAR_2,
          VAR_11);
  } else if (FUNC_13(VAR_11)) {
   if (!VAR_9->linking)
    FUNC_8(VAR_8, VAR_11);
  } else {
   VAR_12 = -VAR_0;
   FUNC_1(1);
  }
  break;
 }

 return VAR_12;
}
