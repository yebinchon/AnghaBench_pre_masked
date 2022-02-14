
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gbe_slave {scalar_t__ slave_num; scalar_t__ link_interface; int open; int port_regs; int emac_regs; int link_state; int mac_control; int port_num; int phy_node; struct device_node* node; } ;
struct gbe_priv {int switch_regs; int ss_version; int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gbe_slave*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct gbe_slave*,int ,int ) ;
 scalar_t__ FUNC_2 (struct gbe_priv*) ;
 scalar_t__ FUNC_3 (struct gbe_priv*) ;
 scalar_t__ FUNC_4 (struct gbe_priv*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct gbe_slave*,int ,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int VAR_14 ;
 int FUNC_9 (struct gbe_priv*,scalar_t__) ;
 int FUNC_10 (struct gbe_slave*) ;
 int VAR_15 ;
 int FUNC_11 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_12 (struct device_node*,char*,scalar_t__*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int FUNC_13(struct gbe_priv *VAR_29, struct gbe_slave *VAR_30,
        struct device_node *VAR_31)
{
 int VAR_32;
 u32 VAR_33, VAR_34;
 u32 VAR_35, VAR_36;

 if (FUNC_12(VAR_31, "slave-port", &VAR_30->slave_num)) {
  FUNC_7(VAR_29->dev, "missing slave-port parameter\n");
  return -VAR_0;
 }

 if (FUNC_12(VAR_31, "link-interface",
     &VAR_30->link_interface)) {
  FUNC_8(VAR_29->dev,
    "missing link-interface value defaulting to 1G mac-phy link\n");
  VAR_30->link_interface = VAR_10;
 }

 VAR_30->node = VAR_31;
 VAR_30->open = 0;
 if ((VAR_30->link_interface == VAR_10) ||
     (VAR_30->link_interface == VAR_9) ||
     (VAR_30->link_interface == VAR_13))
  VAR_30->phy_node = FUNC_11(VAR_31, "phy-handle", 0);
 VAR_30->port_num = FUNC_9(VAR_29, VAR_30->slave_num);

 if (VAR_30->link_interface >= VAR_13)
  VAR_30->mac_control = VAR_6;
 else
  VAR_30->mac_control = VAR_7;


 VAR_32 = VAR_30->slave_num;
 if (FUNC_3(VAR_29)) {
  if (VAR_30->slave_num > 1) {
   VAR_33 = VAR_2;
   VAR_32 -= 2;
  } else {
   VAR_33 = VAR_3;
  }
  VAR_34 = VAR_1;
  VAR_35 = 0x30;
  VAR_36 = 0x40;
 } else if (FUNC_2(VAR_29)) {
  VAR_33 = VAR_5;
  VAR_34 = VAR_4;
  VAR_35 = 0x1000;
  VAR_36 = 0x1000;
 } else if (FUNC_4(VAR_29)) {
  VAR_33 = VAR_12;
  VAR_34 = VAR_11;
  VAR_35 = 0x30;
  VAR_36 = 0x40;
 } else {
  FUNC_7(VAR_29->dev, "unknown ethss(0x%x)\n",
   VAR_29->ss_version);
  return -VAR_0;
 }

 VAR_30->port_regs = VAR_29->switch_regs + VAR_33 +
    (VAR_35 * VAR_32);
 VAR_30->emac_regs = VAR_29->switch_regs + VAR_34 +
    (VAR_36 * VAR_30->slave_num);

 if (FUNC_3(VAR_29)) {

  FUNC_1(VAR_30, VAR_16, VAR_17);
  FUNC_1(VAR_30, VAR_16, VAR_28);
  FUNC_1(VAR_30, VAR_16, VAR_21);
  FUNC_1(VAR_30, VAR_16, VAR_20);
  FUNC_1(VAR_30, VAR_16, VAR_23);
  FUNC_1(VAR_30, VAR_16, VAR_26);
  FUNC_1(VAR_30, VAR_16, VAR_27);
  FUNC_1(VAR_30, VAR_16, VAR_25);
  FUNC_1(VAR_30, VAR_16, VAR_24);


  FUNC_1(VAR_30, VAR_14, VAR_15);
  FUNC_1(VAR_30, VAR_14, VAR_22);
  FUNC_1(VAR_30, VAR_14, VAR_18);

 } else if (FUNC_2(VAR_29)) {

  FUNC_0(VAR_30, VAR_16, VAR_17);
  FUNC_0(VAR_30, VAR_16, VAR_28);
  FUNC_0(VAR_30, VAR_16, VAR_19);
  FUNC_0(VAR_30, VAR_16, VAR_21);
  FUNC_0(VAR_30, VAR_16, VAR_20);
  FUNC_0(VAR_30, VAR_16, VAR_23);
  FUNC_0(VAR_30, VAR_16, VAR_26);
  FUNC_0(VAR_30, VAR_16, VAR_27);
  FUNC_0(VAR_30, VAR_16, VAR_25);
  FUNC_0(VAR_30, VAR_16, VAR_24);
  FUNC_0(VAR_30, VAR_16, VAR_18);


  FUNC_0(VAR_30, VAR_14, VAR_15);
  FUNC_0(VAR_30, VAR_14, VAR_22);

 } else if (FUNC_4(VAR_29)) {

  FUNC_5(VAR_30, VAR_16, VAR_17);
  FUNC_5(VAR_30, VAR_16, VAR_28);
  FUNC_5(VAR_30, VAR_16, VAR_21);
  FUNC_5(VAR_30, VAR_16, VAR_20);
  FUNC_5(VAR_30, VAR_16, VAR_23);
  FUNC_5(VAR_30, VAR_16, VAR_26);
  FUNC_5(VAR_30, VAR_16, VAR_27);
  FUNC_5(VAR_30, VAR_16, VAR_25);
  FUNC_5(VAR_30, VAR_16, VAR_24);


  FUNC_5(VAR_30, VAR_14, VAR_15);
  FUNC_5(VAR_30, VAR_14, VAR_22);
  FUNC_5(VAR_30, VAR_14, VAR_18);
 }

 FUNC_6(&VAR_30->link_state, VAR_8);

 FUNC_10(VAR_30);
 return 0;
}
