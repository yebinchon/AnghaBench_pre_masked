
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_changeupper_info {int linking; struct net_device* upper_dev; int upper_info; int info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_5 (struct mlxsw_sp*,struct net_device*,int ,struct netlink_ext_ack*) ;
 int FUNC_6 (struct mlxsw_sp_port*,struct net_device*,struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_7 (struct mlxsw_sp_port*,struct net_device*,struct net_device*) ;
 int FUNC_8 (struct mlxsw_sp_port*) ;
 int FUNC_9 (struct mlxsw_sp_port*,struct net_device*) ;
 int FUNC_10 (struct mlxsw_sp_port*,struct net_device*) ;
 int FUNC_11 (struct mlxsw_sp_port*) ;
 int FUNC_12 (struct mlxsw_sp_port*) ;
 int FUNC_13 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_14 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 struct net_device* FUNC_16 (struct net_device*) ;
 struct netlink_ext_ack* FUNC_17 (int *) ;
 struct mlxsw_sp_port* FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct net_device*) ;
 struct net_device* FUNC_26 (struct net_device*) ;
 int FUNC_27 (struct net_device*) ;

__attribute__((used)) static int FUNC_28(struct net_device *VAR_2,
            struct net_device *VAR_3,
            unsigned long VAR_4, void *VAR_5)
{
 struct netdev_notifier_changeupper_info *VAR_6;
 struct mlxsw_sp_port *VAR_7;
 struct netlink_ext_ack *VAR_8;
 struct net_device *VAR_9;
 struct mlxsw_sp *VAR_10;
 int VAR_11 = 0;

 VAR_7 = FUNC_18(VAR_3);
 VAR_10 = VAR_7->mlxsw_sp;
 VAR_6 = VAR_5;
 VAR_8 = FUNC_17(&VAR_6->info);

 switch (VAR_4) {
 case 128:
  VAR_9 = VAR_6->upper_dev;
  if (!FUNC_1(VAR_9) &&
      !FUNC_21(VAR_9) &&
      !FUNC_19(VAR_9) &&
      !FUNC_24(VAR_9) &&
      !FUNC_23(VAR_9)) {
   FUNC_0(VAR_8, "Unknown upper device type");
   return -VAR_0;
  }
  if (!VAR_6->linking)
   break;
  if (FUNC_19(VAR_9) &&
      !FUNC_2(VAR_10, VAR_9) &&
      FUNC_3(VAR_9) &&
      !FUNC_4(VAR_9, VAR_8))
   return -VAR_1;
  if (FUNC_15(VAR_9) &&
      (!FUNC_19(VAR_9) ||
       !FUNC_2(VAR_10,
         VAR_9))) {
   FUNC_0(VAR_8, "Enslaving a port to a device that already has an upper device is not supported");
   return -VAR_0;
  }
  if (FUNC_21(VAR_9) &&
      !FUNC_5(VAR_10, VAR_9,
            VAR_6->upper_info, VAR_8))
   return -VAR_0;
  if (FUNC_21(VAR_9) && FUNC_27(VAR_3)) {
   FUNC_0(VAR_8, "Master device is a LAG master and this device has a VLAN");
   return -VAR_0;
  }
  if (FUNC_22(VAR_3) && FUNC_1(VAR_9) &&
      !FUNC_21(FUNC_26(VAR_9))) {
   FUNC_0(VAR_8, "Can not put a VLAN on a LAG port");
   return -VAR_0;
  }
  if (FUNC_23(VAR_9) &&
      !FUNC_13(VAR_10, VAR_2)) {
   FUNC_0(VAR_8, "macvlan is only supported on top of router interfaces");
   return -VAR_1;
  }
  if (FUNC_24(VAR_9) && FUNC_27(VAR_3)) {
   FUNC_0(VAR_8, "Master device is an OVS master and this device has a VLAN");
   return -VAR_0;
  }
  if (FUNC_25(VAR_3) && FUNC_1(VAR_9)) {
   FUNC_0(VAR_8, "Can not put a VLAN on an OVS port");
   return -VAR_0;
  }
  break;
 case 129:
  VAR_9 = VAR_6->upper_dev;
  if (FUNC_19(VAR_9)) {
   if (VAR_6->linking)
    VAR_11 = FUNC_6(VAR_7,
        VAR_2,
        VAR_9,
        VAR_8);
   else
    FUNC_7(VAR_7,
          VAR_2,
          VAR_9);
  } else if (FUNC_21(VAR_9)) {
   if (VAR_6->linking) {
    VAR_11 = FUNC_9(VAR_7,
            VAR_9);
   } else {
    FUNC_8(VAR_7);
    FUNC_10(VAR_7,
       VAR_9);
   }
  } else if (FUNC_24(VAR_9)) {
   if (VAR_6->linking)
    VAR_11 = FUNC_11(VAR_7);
   else
    FUNC_12(VAR_7);
  } else if (FUNC_23(VAR_9)) {
   if (!VAR_6->linking)
    FUNC_14(VAR_10, VAR_9);
  } else if (FUNC_1(VAR_9)) {
   struct net_device *VAR_12;

   if (!FUNC_20(VAR_9))
    break;
   if (VAR_6->linking)
    break;
   VAR_12 = FUNC_16(VAR_9);
   FUNC_7(VAR_7, VAR_9,
         VAR_12);
  }
  break;
 }

 return VAR_11;
}
