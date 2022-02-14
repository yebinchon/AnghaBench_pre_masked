
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; int asym_pause; int pause; int duplex; int speed; int link; } ;
struct mac_priv_s {int cell_index; int speed; int max_speed; int const* eth_dev; TYPE_2__* fixed_link; int vaddr; int fman; int mc_addr_list; void* internal_phy_node; struct device* dev; } ;
struct mac_device {int phy_if; int if_support; int (* init ) (struct mac_device*) ;int autoneg_pause; int rx_pause_req; int tx_pause_req; int rx_pause_active; int tx_pause_active; int addr; struct device_node* phy_node; int * port; TYPE_4__* res; struct mac_priv_s* priv; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_6__ {int asym_pause; int pause; int duplex; int speed; int link; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* FUNC_3 (struct device*,int ,scalar_t__,scalar_t__,char*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,char*,struct device_node*) ;
 int FUNC_7 (struct device*,scalar_t__,scalar_t__) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int const* FUNC_9 (int,struct mac_device*) ;
 int FUNC_10 (int ,int const*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct mac_device*,int,int) ;
 int FUNC_15 (TYPE_2__*) ;
 TYPE_2__* FUNC_16 (int,int ) ;
 int FUNC_17 (struct device_node*,int ,struct resource*) ;
 int FUNC_18 (struct device_node*,char*,int *) ;
 int FUNC_19 (struct device_node*) ;
 scalar_t__ FUNC_20 (struct device_node*,char*) ;
 struct platform_device* FUNC_21 (struct device_node*) ;
 int* FUNC_22 (struct device_node*) ;
 struct device_node* FUNC_23 (struct device_node*) ;
 int FUNC_24 (struct device_node*) ;
 struct device_node* FUNC_25 (struct device_node*) ;
 int FUNC_26 (struct device_node*) ;
 void* FUNC_27 (struct device_node*,char*,int) ;
 struct phy_device* FUNC_28 (struct device_node*) ;
 scalar_t__ FUNC_29 (struct device_node*) ;
 int FUNC_30 (struct device_node*) ;
 int FUNC_31 (struct device_node*,char*,scalar_t__*) ;
 int* VAR_13 ;
 int FUNC_32 (int *) ;
 int FUNC_33 (struct mac_device*) ;
 int FUNC_34 (struct mac_device*) ;
 int FUNC_35 (struct mac_device*) ;
 int FUNC_36 (struct mac_device*) ;
 scalar_t__ FUNC_37 (int) ;

__attribute__((used)) static int FUNC_38(struct platform_device *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 struct device *VAR_18;
 struct device_node *VAR_19, *VAR_20;
 struct mac_device *VAR_21;
 struct platform_device *VAR_22;
 struct resource VAR_23;
 struct mac_priv_s *VAR_24;
 const u8 *VAR_25;
 u32 VAR_26;
 u8 VAR_27;
 int VAR_28;

 VAR_18 = &VAR_14->dev;
 VAR_19 = VAR_18->of_node;

 VAR_21 = FUNC_8(VAR_18, sizeof(*VAR_21), VAR_6);
 if (!VAR_21) {
  VAR_15 = -VAR_5;
  goto _return;
 }
 VAR_24 = FUNC_8(VAR_18, sizeof(*VAR_24), VAR_6);
 if (!VAR_24) {
  VAR_15 = -VAR_5;
  goto _return;
 }


 VAR_21->priv = VAR_24;
 VAR_24->dev = VAR_18;

 if (FUNC_20(VAR_19, "fsl,fman-dtsec")) {
  FUNC_33(VAR_21);
  VAR_24->internal_phy_node = FUNC_27(VAR_19,
         "tbi-handle", 0);
 } else if (FUNC_20(VAR_19, "fsl,fman-xgec")) {
  FUNC_35(VAR_21);
 } else if (FUNC_20(VAR_19, "fsl,fman-memac")) {
  FUNC_34(VAR_21);
  VAR_24->internal_phy_node = FUNC_27(VAR_19,
         "pcsphy-handle", 0);
 } else {
  FUNC_4(VAR_18, "MAC node (%pOF) contains unsupported MAC\n",
   VAR_19);
  VAR_15 = -VAR_2;
  goto _return;
 }

 FUNC_1(&VAR_24->mc_addr_list);


 VAR_20 = FUNC_23(VAR_19);
 if (!VAR_20) {
  FUNC_4(VAR_18, "of_get_parent(%pOF) failed\n",
   VAR_19);
  VAR_15 = -VAR_2;
  goto _return_of_get_parent;
 }

 VAR_22 = FUNC_21(VAR_20);
 if (!VAR_22) {
  FUNC_4(VAR_18, "of_find_device_by_node(%pOF) failed\n", VAR_20);
  VAR_15 = -VAR_2;
  goto _return_of_node_put;
 }


 VAR_15 = FUNC_31(VAR_20, "cell-index", &VAR_26);
 if (VAR_15) {
  FUNC_4(VAR_18, "failed to read cell-index for %pOF\n", VAR_20);
  VAR_15 = -VAR_2;
  goto _return_of_node_put;
 }

 VAR_27 = (u8)(VAR_26 + 1);

 VAR_24->fman = FUNC_11(&VAR_22->dev);
 if (!VAR_24->fman) {
  FUNC_4(VAR_18, "fman_bind(%pOF) failed\n", VAR_20);
  VAR_15 = -VAR_4;
  goto _return_of_node_put;
 }

 FUNC_26(VAR_20);


 VAR_15 = FUNC_17(VAR_19, 0, &VAR_23);
 if (VAR_15 < 0) {
  FUNC_4(VAR_18, "of_address_to_resource(%pOF) = %d\n",
   VAR_19, VAR_15);
  goto _return_of_get_parent;
 }

 VAR_21->res = FUNC_3(VAR_18,
          FUNC_12(VAR_24->fman),
          VAR_23.start, VAR_23.end + 1 - VAR_23.start,
          "mac");
 if (!VAR_21->res) {
  FUNC_4(VAR_18, "__devm_request_mem_region(mac) failed\n");
  VAR_15 = -VAR_1;
  goto _return_of_get_parent;
 }

 VAR_24->vaddr = FUNC_7(VAR_18, VAR_21->res->start,
       VAR_21->res->end + 1 - VAR_21->res->start);
 if (!VAR_24->vaddr) {
  FUNC_4(VAR_18, "devm_ioremap() failed\n");
  VAR_15 = -VAR_3;
  goto _return_of_get_parent;
 }

 if (!FUNC_19(VAR_19)) {
  VAR_15 = -VAR_4;
  goto _return_of_get_parent;
 }


 VAR_15 = FUNC_31(VAR_19, "cell-index", &VAR_26);
 if (VAR_15) {
  FUNC_4(VAR_18, "failed to read cell-index for %pOF\n", VAR_19);
  VAR_15 = -VAR_2;
  goto _return_of_get_parent;
 }
 VAR_24->cell_index = (u8)VAR_26;


 VAR_25 = FUNC_22(VAR_19);
 if (FUNC_2(VAR_25)) {
  FUNC_4(VAR_18, "of_get_mac_address(%pOF) failed\n", VAR_19);
  VAR_15 = -VAR_2;
  goto _return_of_get_parent;
 }
 FUNC_10(VAR_21->addr, VAR_25);


 VAR_17 = FUNC_18(VAR_19, "fsl,fman-ports", ((void*)0));
 if (FUNC_37(VAR_17 < 0)) {
  FUNC_4(VAR_18, "of_count_phandle_with_args(%pOF, fsl,fman-ports) failed\n",
   VAR_19);
  VAR_15 = VAR_17;
  goto _return_of_get_parent;
 }

 if (VAR_17 != FUNC_0(VAR_21->port)) {
  FUNC_4(VAR_18, "Not supported number of fman-ports handles of mac node %pOF from device tree\n",
   VAR_19);
  VAR_15 = -VAR_2;
  goto _return_of_get_parent;
 }

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_21->port); VAR_16++) {

  VAR_20 = FUNC_27(VAR_19, "fsl,fman-ports", VAR_16);
  if (!VAR_20) {
   FUNC_4(VAR_18, "of_parse_phandle(%pOF, fsl,fman-ports) failed\n",
    VAR_19);
   VAR_15 = -VAR_2;
   goto _return_of_node_put;
  }

  VAR_22 = FUNC_21(VAR_20);
  if (!VAR_22) {
   FUNC_4(VAR_18, "of_find_device_by_node(%pOF) failed\n",
    VAR_20);
   VAR_15 = -VAR_2;
   goto _return_of_node_put;
  }

  VAR_21->port[VAR_16] = FUNC_13(&VAR_22->dev);
  if (!VAR_21->port[VAR_16]) {
   FUNC_4(VAR_18, "dev_get_drvdata(%pOF) failed\n",
    VAR_20);
   VAR_15 = -VAR_2;
   goto _return_of_node_put;
  }
  FUNC_26(VAR_20);
 }


 VAR_28 = FUNC_24(VAR_19);
 if (VAR_28 < 0) {
  FUNC_6(VAR_18,
    "of_get_phy_mode() for %pOF failed. Defaulting to SGMII\n",
    VAR_19);
  VAR_28 = VAR_7;
 }
 VAR_21->phy_if = VAR_28;

 VAR_24->speed = VAR_13[VAR_21->phy_if];
 VAR_24->max_speed = VAR_24->speed;
 VAR_21->if_support = VAR_0;

 if (VAR_21->phy_if == VAR_7)
  VAR_21->if_support &= ~(VAR_12 |
     VAR_11);


 if (VAR_24->max_speed == 1000)
  VAR_21->if_support |= VAR_10;


 if (VAR_21->phy_if == VAR_8)
  VAR_21->if_support = VAR_9;


 VAR_21->phy_node = FUNC_27(VAR_19, "phy-handle", 0);
 if (!VAR_21->phy_node && FUNC_29(VAR_19)) {
  struct phy_device *VAR_29;

  VAR_15 = FUNC_30(VAR_19);
  if (VAR_15)
   goto _return_of_get_parent;

  VAR_24->fixed_link = FUNC_16(sizeof(*VAR_24->fixed_link),
        VAR_6);
  if (!VAR_24->fixed_link) {
   VAR_15 = -VAR_5;
   goto _return_of_get_parent;
  }

  VAR_21->phy_node = FUNC_25(VAR_19);
  VAR_29 = FUNC_28(VAR_21->phy_node);
  if (!VAR_29) {
   VAR_15 = -VAR_2;
   FUNC_26(VAR_21->phy_node);
   goto _return_of_get_parent;
  }

  VAR_24->fixed_link->link = VAR_29->link;
  VAR_24->fixed_link->speed = VAR_29->speed;
  VAR_24->fixed_link->duplex = VAR_29->duplex;
  VAR_24->fixed_link->pause = VAR_29->pause;
  VAR_24->fixed_link->asym_pause = VAR_29->asym_pause;

  FUNC_32(&VAR_29->mdio.dev);
 }

 VAR_15 = VAR_21->init(VAR_21);
 if (VAR_15 < 0) {
  FUNC_4(VAR_18, "mac_dev->init() = %d\n", VAR_15);
  FUNC_26(VAR_21->phy_node);
  goto _return_of_get_parent;
 }


 VAR_21->autoneg_pause = 1;




 VAR_21->rx_pause_req = 1;
 VAR_21->tx_pause_req = 1;
 VAR_21->rx_pause_active = 0;
 VAR_21->tx_pause_active = 0;
 VAR_15 = FUNC_14(VAR_21, 1, 1);
 if (VAR_15 < 0)
  FUNC_4(VAR_18, "fman_set_mac_active_pause() = %d\n", VAR_15);

 FUNC_5(VAR_18, "FMan MAC address: %pM\n", VAR_21->addr);

 VAR_24->eth_dev = FUNC_9(VAR_27, VAR_21);
 if (FUNC_2(VAR_24->eth_dev)) {
  FUNC_4(VAR_18, "failed to add Ethernet platform device for MAC %d\n",
   VAR_24->cell_index);
  VAR_24->eth_dev = ((void*)0);
 }

 goto _return;

_return_of_node_put:
 FUNC_26(VAR_20);
_return_of_get_parent:
 FUNC_15(VAR_24->fixed_link);
_return:
 return VAR_15;
}
