
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct usb_phy_data {int flags; int power_off; int power_on; int mask; int label; } ;
struct usb_otg {TYPE_1__* usb_phy; int start_srp; int set_vbus; int set_peripheral; int set_host; } ;
struct resource {int dummy; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct TYPE_13__ {int type; struct usb_otg* otg; int label; TYPE_2__* dev; } ;
struct omap_usb {int flags; TYPE_1__ phy; TYPE_2__* dev; struct phy_provider* optclk; struct phy_provider* wkupclk; int power_reg; TYPE_2__* control_dev; struct phy_provider* syscon_phy_power; struct phy_provider* phy_base; int power_off; int power_on; int mask; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct phy_provider*) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 void* FUNC_5 (TYPE_2__*,char*) ;
 struct phy_provider* FUNC_6 (TYPE_2__*,struct resource*) ;
 void* FUNC_7 (TYPE_2__*,int,int ) ;
 struct phy_provider* FUNC_8 (TYPE_2__*,int ) ;
 struct phy_provider* FUNC_9 (TYPE_2__*,int *,int *) ;
 struct platform_device* FUNC_10 (struct device_node*) ;
 struct of_device_id* FUNC_11 (int ,TYPE_2__*) ;
 struct device_node* FUNC_12 (struct device_node*,char*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int,int *) ;
 int VAR_10 ;
 int FUNC_14 (struct phy_provider*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_15 (struct phy_provider*,struct omap_usb*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct omap_usb*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 struct phy_provider* FUNC_20 (struct device_node*,char*) ;
 int FUNC_21 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_16)
{
 struct omap_usb *VAR_17;
 struct phy *VAR_18;
 struct resource *VAR_19;
 struct phy_provider *VAR_20;
 struct usb_otg *VAR_21;
 struct device_node *VAR_22 = VAR_16->dev.of_node;
 struct device_node *VAR_23;
 struct platform_device *VAR_24;
 const struct of_device_id *VAR_25;
 struct usb_phy_data *VAR_26;

 VAR_25 = FUNC_11(VAR_10, &VAR_16->dev);

 if (!VAR_25)
  return -VAR_0;

 VAR_26 = (struct usb_phy_data *)VAR_25->data;

 VAR_17 = FUNC_7(&VAR_16->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_1;

 VAR_21 = FUNC_7(&VAR_16->dev, sizeof(*VAR_21), VAR_3);
 if (!VAR_21)
  return -VAR_1;

 VAR_17->dev = &VAR_16->dev;

 VAR_17->phy.dev = VAR_17->dev;
 VAR_17->phy.label = VAR_26->label;
 VAR_17->phy.otg = VAR_21;
 VAR_17->phy.type = VAR_8;
 VAR_17->mask = VAR_26->mask;
 VAR_17->power_on = VAR_26->power_on;
 VAR_17->power_off = VAR_26->power_off;

 if (VAR_26->flags & VAR_5) {
  VAR_19 = FUNC_16(VAR_16, VAR_4, 0);
  VAR_17->phy_base = FUNC_6(&VAR_16->dev, VAR_19);
  if (FUNC_0(VAR_17->phy_base))
   return FUNC_1(VAR_17->phy_base);
  VAR_17->flags |= VAR_5;
 }

 VAR_17->syscon_phy_power = FUNC_20(VAR_22,
       "syscon-phy-power");
 if (FUNC_0(VAR_17->syscon_phy_power)) {
  FUNC_2(&VAR_16->dev,
   "can't get syscon-phy-power, using control device\n");
  VAR_17->syscon_phy_power = ((void*)0);

  VAR_23 = FUNC_12(VAR_22, "ctrl-module", 0);
  if (!VAR_23) {
   FUNC_3(&VAR_16->dev,
    "Failed to get control device phandle\n");
   return -VAR_0;
  }

  VAR_24 = FUNC_10(VAR_23);
  if (!VAR_24) {
   FUNC_3(&VAR_16->dev, "Failed to get control device\n");
   return -VAR_0;
  }
  VAR_17->control_dev = &VAR_24->dev;
 } else {
  if (FUNC_13(VAR_22,
            "syscon-phy-power", 1,
            &VAR_17->power_reg)) {
   FUNC_3(&VAR_16->dev,
    "couldn't get power reg. offset\n");
   return -VAR_0;
  }
 }


 VAR_17->wkupclk = FUNC_5(VAR_17->dev, "wkupclk");
 if (FUNC_0(VAR_17->wkupclk)) {
  if (FUNC_1(VAR_17->wkupclk) == -VAR_2)
   return -VAR_2;

  FUNC_4(&VAR_16->dev, "unable to get wkupclk %ld, trying old name\n",
    FUNC_1(VAR_17->wkupclk));
  VAR_17->wkupclk = FUNC_5(VAR_17->dev, "usb_phy_cm_clk32k");

  if (FUNC_0(VAR_17->wkupclk)) {
   if (FUNC_1(VAR_17->wkupclk) != -VAR_2)
    FUNC_3(&VAR_16->dev, "unable to get usb_phy_cm_clk32k\n");
   return FUNC_1(VAR_17->wkupclk);
  } else {
   FUNC_4(&VAR_16->dev,
     "found usb_phy_cm_clk32k, please fix DTS\n");
  }
 }

 VAR_17->optclk = FUNC_5(VAR_17->dev, "refclk");
 if (FUNC_0(VAR_17->optclk)) {
  if (FUNC_1(VAR_17->optclk) == -VAR_2)
   return -VAR_2;

  FUNC_2(&VAR_16->dev, "unable to get refclk, trying old name\n");
  VAR_17->optclk = FUNC_5(VAR_17->dev, "usb_otg_ss_refclk960m");

  if (FUNC_0(VAR_17->optclk)) {
   if (FUNC_1(VAR_17->optclk) != -VAR_2) {
    FUNC_2(&VAR_16->dev,
     "unable to get usb_otg_ss_refclk960m\n");
   }
  } else {
   FUNC_4(&VAR_16->dev,
     "found usb_otg_ss_refclk960m, please fix DTS\n");
  }
 }

 VAR_21->set_host = VAR_11;
 VAR_21->set_peripheral = VAR_12;
 if (VAR_26->flags & VAR_6)
  VAR_21->set_vbus = VAR_13;
 if (VAR_26->flags & VAR_7)
  VAR_21->start_srp = VAR_14;
 VAR_21->usb_phy = &VAR_17->phy;

 FUNC_17(VAR_16, VAR_17);
 FUNC_19(VAR_17->dev);

 VAR_18 = FUNC_9(VAR_17->dev, ((void*)0), &VAR_15);
 if (FUNC_0(VAR_18)) {
  FUNC_18(VAR_17->dev);
  return FUNC_1(VAR_18);
 }

 FUNC_15(VAR_18, VAR_17);
 FUNC_14(VAR_18);

 VAR_20 = FUNC_8(VAR_17->dev,
           VAR_9);
 if (FUNC_0(VAR_20)) {
  FUNC_18(VAR_17->dev);
  return FUNC_1(VAR_20);
 }


 FUNC_21(&VAR_17->phy);

 return 0;
}
