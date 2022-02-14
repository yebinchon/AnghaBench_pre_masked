
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; int __data; } ;
struct sockaddr {int dummy; } ;
struct slave {int original_mtu; TYPE_2__* dev; int perm_hwaddr; } ;
struct net_device {int flags; int features; int priv_flags; int type; int dev_addr; } ;
struct TYPE_3__ {scalar_t__ fail_over_mac; } ;
struct bonding {TYPE_1__ params; int dev; int slave_cnt; int curr_active_slave; int primary_slave; int current_arp_slave; int bond_stats; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {int addr_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct slave*) ;
 int FUNC_5 (struct bonding*,struct slave*) ;
 int FUNC_6 (struct bonding*,int *) ;
 int FUNC_7 (struct bonding*) ;
 int FUNC_8 (struct slave*) ;
 struct slave* FUNC_9 (struct bonding*,struct net_device*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (struct bonding*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct net_device*,struct net_device*) ;
 scalar_t__ FUNC_14 (struct slave*) ;
 scalar_t__ FUNC_15 (struct bonding*) ;
 scalar_t__ FUNC_16 (struct bonding*) ;
 int FUNC_17 (struct bonding*) ;
 int FUNC_18 (struct bonding*) ;
 int FUNC_19 (struct slave*,int ) ;
 int FUNC_20 (struct slave*) ;
 int FUNC_21 (struct bonding*,struct slave*) ;
 int FUNC_22 (struct bonding*,struct slave*) ;
 int FUNC_23 (struct bonding*) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*,int) ;
 int FUNC_27 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_28 (struct net_device*,int ) ;
 int FUNC_29 (struct net_device*,int) ;
 int FUNC_30 (struct net_device*) ;
 scalar_t__ FUNC_31 (int ,int ) ;
 int FUNC_32 (struct net_device*,struct net_device*) ;
 struct bonding* FUNC_33 (struct net_device*) ;
 int FUNC_34 (struct net_device*) ;
 int FUNC_35 (struct net_device*) ;
 struct slave* FUNC_36 (int ) ;
 struct slave* FUNC_37 (int ) ;
 int FUNC_38 (struct net_device*,struct net_device*,char*) ;
 int FUNC_39 (struct slave*) ;
 int FUNC_40 (struct net_device*,struct net_device*,char*,...) ;
 int FUNC_41 (struct net_device*,struct net_device*,char*,int ) ;
 int FUNC_42 () ;
 int FUNC_43 () ;
 int FUNC_44 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_45(struct net_device *VAR_12,
         struct net_device *VAR_13,
         bool VAR_14, bool VAR_15)
{
 struct bonding *VAR_16 = FUNC_33(VAR_12);
 struct slave *VAR_17, *VAR_18;
 struct sockaddr_storage VAR_19;
 int VAR_20 = VAR_12->flags;
 netdev_features_t VAR_21 = VAR_12->features;


 if (!(VAR_13->flags & VAR_8) ||
     !FUNC_32(VAR_13, VAR_12)) {
  FUNC_38(VAR_12, VAR_13, "cannot release slave\n");
  return -VAR_4;
 }

 FUNC_3();

 VAR_17 = FUNC_9(VAR_16, VAR_13);
 if (!VAR_17) {

  FUNC_40(VAR_12, VAR_13, "interface not enslaved\n");
  FUNC_43();
  return -VAR_4;
 }

 FUNC_19(VAR_17, VAR_3);

 FUNC_20(VAR_17);


 FUNC_10(VAR_16->dev, &VAR_16->bond_stats);

 FUNC_22(VAR_16, VAR_17);



 FUNC_34(VAR_13);

 if (FUNC_0(VAR_16) == VAR_1)
  FUNC_4(VAR_17);

 if (FUNC_16(VAR_16))
  FUNC_21(VAR_16, VAR_17);

 FUNC_40(VAR_12, VAR_13, "Releasing %s interface\n",
      FUNC_14(VAR_17) ? "active" : "backup");

 VAR_18 = FUNC_36(VAR_16->curr_active_slave);

 FUNC_1(VAR_16->current_arp_slave, ((void*)0));

 if (!VAR_14 && (!VAR_16->params.fail_over_mac ||
       FUNC_0(VAR_16) != VAR_2)) {
  if (FUNC_31(VAR_12->dev_addr, VAR_17->perm_hwaddr) &&
      FUNC_11(VAR_16))
   FUNC_41(VAR_12, VAR_13, "the permanent HWaddr of slave - %pM - is still in use by bond - set the HWaddr of slave to a different address to avoid conflicts\n",
       VAR_17->perm_hwaddr);
 }

 if (FUNC_37(VAR_16->primary_slave) == VAR_17)
  FUNC_1(VAR_16->primary_slave, ((void*)0));

 if (VAR_18 == VAR_17)
  FUNC_6(VAR_16, ((void*)0));

 if (FUNC_15(VAR_16)) {





  FUNC_5(VAR_16, VAR_17);
 }

 if (VAR_14) {
  FUNC_1(VAR_16->curr_active_slave, ((void*)0));
 } else if (VAR_18 == VAR_17) {




  FUNC_17(VAR_16);
 }

 if (!FUNC_11(VAR_16)) {
  FUNC_18(VAR_16);
  FUNC_30(VAR_12);
 }

 FUNC_43();
 FUNC_42();
 VAR_16->slave_cnt--;

 if (!FUNC_11(VAR_16)) {
  FUNC_24(VAR_9, VAR_16->dev);
  FUNC_24(VAR_10, VAR_16->dev);
 }

 FUNC_7(VAR_16);
 if (!(VAR_12->features & VAR_11) &&
     (VAR_21 & VAR_11))
  FUNC_40(VAR_12, VAR_13, "last VLAN challenged slave left bond - VLAN blocking is removed\n");

 FUNC_44(VAR_13, VAR_12);




 if (!FUNC_23(VAR_16)) {







  if (VAR_20 & VAR_7)
   FUNC_29(VAR_13, -1);


  if (VAR_20 & VAR_5)
   FUNC_26(VAR_13, -1);

  FUNC_13(VAR_12, VAR_13);
 }

 FUNC_39(VAR_17);


 FUNC_25(VAR_13);

 if (VAR_16->params.fail_over_mac != VAR_0 ||
     FUNC_0(VAR_16) != VAR_2) {

  FUNC_12(VAR_19.__data, VAR_17->perm_hwaddr,
      VAR_17->dev->addr_len);
  VAR_19.ss_family = VAR_13->type;
  FUNC_27(VAR_13, (struct sockaddr *)&VAR_19, ((void*)0));
 }

 if (VAR_15)
  FUNC_2(VAR_13, VAR_17->original_mtu);
 else
  FUNC_28(VAR_13, VAR_17->original_mtu);

 if (!FUNC_35(VAR_13))
  VAR_13->priv_flags &= ~VAR_6;

 FUNC_8(VAR_17);

 return 0;
}
