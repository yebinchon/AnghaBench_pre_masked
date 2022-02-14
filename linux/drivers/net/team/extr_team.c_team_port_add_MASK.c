
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mtu; int dev_addr; } ;
struct team_port {int index; TYPE_2__ orig; int list; int qom_list; struct team* team; struct net_device* dev; } ;
struct team {int port_list; TYPE_1__* mode; struct net_device* dev; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {char* name; int flags; int features; int addr_len; int dev_addr; int mtu; } ;
struct TYPE_3__ {scalar_t__ port_priv_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct team*) ;
 int FUNC_3 (struct team*,struct team_port*) ;
 int FUNC_4 (struct team*,struct team_port*) ;
 int FUNC_5 (struct team*) ;
 int FUNC_6 (struct team_port*,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,struct net_device*) ;
 int FUNC_10 (struct net_device*,struct netlink_ext_ack*) ;
 int FUNC_11 (struct net_device*,int) ;
 int FUNC_12 (struct net_device*,int ) ;
 int FUNC_13 (struct net_device*,int) ;
 int FUNC_14 (struct net_device*,struct net_device*) ;
 int FUNC_15 (struct team_port*) ;
 struct team_port* FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (struct net_device*,char*,...) ;
 int FUNC_20 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_21 (struct net_device*,struct net_device*) ;
 int FUNC_22 (struct net_device*,char*,char*) ;
 int FUNC_23 (struct net_device*,int ,struct team_port*) ;
 int FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*) ;
 scalar_t__ FUNC_27 (struct net_device*) ;
 int FUNC_28 (struct net_device*) ;
 int FUNC_29 (struct net_device*,struct net_device*) ;
 int VAR_11 ;
 int FUNC_30 (struct team_port*) ;
 int FUNC_31 (struct team*,struct team_port*) ;
 int FUNC_32 (struct team_port*) ;
 int FUNC_33 (struct team*,struct team_port*) ;
 int FUNC_34 (struct team*,struct team_port*) ;
 int FUNC_35 (struct team_port*) ;
 int FUNC_36 (struct team*,struct team_port*,struct netlink_ext_ack*) ;
 int FUNC_37 (struct team*,struct team_port*) ;
 scalar_t__ FUNC_38 (struct net_device*) ;
 int FUNC_39 (struct net_device*,struct net_device*) ;
 int FUNC_40 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_41(struct team *VAR_12, struct net_device *VAR_13,
    struct netlink_ext_ack *VAR_14)
{
 struct net_device *VAR_15 = VAR_12->dev;
 struct team_port *VAR_16;
 char *VAR_17 = VAR_13->name;
 int VAR_18;

 if (VAR_13->flags & VAR_6) {
  FUNC_1(VAR_14, "Loopback device can't be added as a team port");
  FUNC_20(VAR_15, "Device %s is loopback device. Loopback devices can't be added as a team port\n",
      VAR_17);
  return -VAR_1;
 }

 if (FUNC_27(VAR_13)) {
  FUNC_1(VAR_14, "Device is already a port of a team device");
  FUNC_20(VAR_15, "Device %s is already a port "
    "of a team device\n", VAR_17);
  return -VAR_0;
 }

 if (VAR_15 == VAR_13) {
  FUNC_1(VAR_14, "Cannot enslave team device to itself");
  FUNC_20(VAR_15, "Cannot enslave team device to itself\n");
  return -VAR_1;
 }

 if (FUNC_21(VAR_15, VAR_13)) {
  FUNC_1(VAR_14, "Device is already an upper device of the team interface");
  FUNC_20(VAR_15, "Device %s is already an upper device of the team interface\n",
      VAR_17);
  return -VAR_0;
 }

 if (VAR_13->features & VAR_10 &&
     FUNC_38(VAR_15)) {
  FUNC_1(VAR_14, "Device is VLAN challenged and team device has VLAN set up");
  FUNC_20(VAR_15, "Device %s is VLAN challenged and team device has VLAN set up\n",
      VAR_17);
  return -VAR_3;
 }

 VAR_18 = FUNC_29(VAR_15, VAR_13);
 if (VAR_18)
  return VAR_18;

 if (VAR_13->flags & VAR_8) {
  FUNC_1(VAR_14, "Device is up. Set it down before adding it as a team port");
  FUNC_20(VAR_15, "Device %s is up. Set it down before adding it as a team port\n",
      VAR_17);
  return -VAR_0;
 }

 VAR_16 = FUNC_16(sizeof(struct team_port) + VAR_12->mode->port_priv_size,
         VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->dev = VAR_13;
 VAR_16->team = VAR_12;
 FUNC_0(&VAR_16->qom_list);

 VAR_16->orig.mtu = VAR_13->mtu;
 VAR_18 = FUNC_12(VAR_13, VAR_15->mtu);
 if (VAR_18) {
  FUNC_19(VAR_15, "Error %d calling dev_set_mtu\n", VAR_18);
  goto err_set_mtu;
 }

 FUNC_18(VAR_16->orig.dev_addr, VAR_13->dev_addr, VAR_13->addr_len);

 VAR_18 = FUNC_33(VAR_12, VAR_16);
 if (VAR_18) {
  FUNC_20(VAR_15, "Device %s failed to enter team mode\n",
      VAR_17);
  goto err_port_enter;
 }

 VAR_18 = FUNC_10(VAR_13, VAR_14);
 if (VAR_18) {
  FUNC_19(VAR_15, "Device %s opening failed\n",
      VAR_17);
  goto err_dev_open;
 }

 VAR_18 = FUNC_39(VAR_13, VAR_15);
 if (VAR_18) {
  FUNC_20(VAR_15, "Failed to add vlan ids to device %s\n",
    VAR_17);
  goto err_vids_add;
 }

 VAR_18 = FUNC_32(VAR_16);
 if (VAR_18) {
  FUNC_20(VAR_15, "Failed to enable netpoll on device %s\n",
      VAR_17);
  goto err_enable_netpoll;
 }

 if (!(VAR_15->features & VAR_9))
  FUNC_8(VAR_13);

 VAR_18 = FUNC_23(VAR_13, VAR_11,
      VAR_16);
 if (VAR_18) {
  FUNC_20(VAR_15, "Device %s failed to register rx_handler\n",
      VAR_17);
  goto err_handler_register;
 }

 VAR_18 = FUNC_36(VAR_12, VAR_16, VAR_14);
 if (VAR_18) {
  FUNC_20(VAR_15, "Device %s failed to set upper link\n",
      VAR_17);
  goto err_set_upper_link;
 }

 VAR_18 = FUNC_3(VAR_12, VAR_16);
 if (VAR_18) {
  FUNC_20(VAR_15, "Device %s failed to add per-port options\n",
      VAR_17);
  goto err_option_port_add;
 }


 if (VAR_15->flags & VAR_7) {
  VAR_18 = FUNC_13(VAR_13, 1);
  if (VAR_18)
   goto err_set_slave_promisc;
 }


 if (VAR_15->flags & VAR_5) {
  VAR_18 = FUNC_11(VAR_13, 1);
  if (VAR_18) {
   if (VAR_15->flags & VAR_7)
    FUNC_13(VAR_13, -1);
   goto err_set_slave_promisc;
  }
 }

 FUNC_25(VAR_15);
 FUNC_14(VAR_13, VAR_15);
 FUNC_9(VAR_13, VAR_15);
 FUNC_26(VAR_15);

 VAR_16->index = -1;
 FUNC_17(&VAR_16->list, &VAR_12->port_list);
 FUNC_31(VAR_12, VAR_16);
 FUNC_2(VAR_12);
 FUNC_6(VAR_16, !!FUNC_28(VAR_13));
 FUNC_5(VAR_12);

 FUNC_22(VAR_15, "Port device %s added\n", VAR_17);

 return 0;

err_set_slave_promisc:
 FUNC_4(VAR_12, VAR_16);

err_option_port_add:
 FUNC_37(VAR_12, VAR_16);

err_set_upper_link:
 FUNC_24(VAR_13);

err_handler_register:
 FUNC_30(VAR_16);

err_enable_netpoll:
 FUNC_40(VAR_13, VAR_15);

err_vids_add:
 FUNC_7(VAR_13);

err_dev_open:
 FUNC_34(VAR_12, VAR_16);
 FUNC_35(VAR_16);

err_port_enter:
 FUNC_12(VAR_13, VAR_16->orig.mtu);

err_set_mtu:
 FUNC_15(VAR_16);

 return VAR_18;
}
