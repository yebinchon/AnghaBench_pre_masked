
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ priority; int notifier_call; } ;
struct sun4i_usb_phy_data {scalar_t__ id_det_irq; scalar_t__ vbus_det_irq; int vbus_power_nb_registered; TYPE_1__ vbus_power_nb; struct phy_provider* vbus_power_supply; struct phy_provider* vbus_det_gpio; struct phy_provider* id_det_gpio; struct sun4i_usb_phy* phys; TYPE_2__* cfg; struct phy_provider* extcon; int dr_mode; struct phy_provider* base; int detect; int reg_lock; } ;
struct sun4i_usb_phy {int index; struct phy_provider* phy; struct phy_provider* pmu; struct phy_provider* reset; struct phy_provider* clk2; struct phy_provider* clk; struct phy_provider* vbus; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct device_node {int dummy; } ;
typedef int name ;
struct TYPE_4__ {int num_phys; int missing_phys; int hsic_index; scalar_t__ phy0_dual_route; scalar_t__ dedicated_clocks; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy_provider*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,struct sun4i_usb_phy_data*) ;
 void* FUNC_7 (struct device*,char*) ;
 struct phy_provider* FUNC_8 (struct device*,int ) ;
 int FUNC_9 (struct device*,struct phy_provider*) ;
 void* FUNC_10 (struct device*,char*,int ) ;
 void* FUNC_11 (struct device*,struct resource*) ;
 struct sun4i_usb_phy_data* FUNC_12 (struct device*,int,int ) ;
 struct phy_provider* FUNC_13 (struct device*,int ) ;
 struct phy_provider* FUNC_14 (struct device*,int *,int *) ;
 struct phy_provider* FUNC_15 (struct device*,char*) ;
 struct phy_provider* FUNC_16 (struct device*,char*) ;
 int FUNC_17 (struct device*,scalar_t__,int ,int,char*,struct sun4i_usb_phy_data*) ;
 struct phy_provider* FUNC_18 (struct device*,char*) ;
 void* FUNC_19 (struct phy_provider*) ;
 TYPE_2__* FUNC_20 (struct device*) ;
 scalar_t__ FUNC_21 (struct device_node*,char*,int *) ;
 int FUNC_22 (struct device_node*,int ) ;
 int FUNC_23 (struct phy_provider*,struct sun4i_usb_phy*) ;
 struct resource* FUNC_24 (struct platform_device*,int ,char*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (char*,int,char*,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_29 (struct platform_device*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_14)
{
 struct sun4i_usb_phy_data *VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct device_node *VAR_17 = VAR_16->of_node;
 struct phy_provider *VAR_18;
 struct resource *VAR_19;
 int VAR_20, VAR_21;

 VAR_15 = FUNC_12(VAR_16, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 FUNC_27(&VAR_15->reg_lock);
 FUNC_1(&VAR_15->detect, VAR_10);
 FUNC_6(VAR_16, VAR_15);
 VAR_15->cfg = FUNC_20(VAR_16);
 if (!VAR_15->cfg)
  return -VAR_0;

 VAR_19 = FUNC_24(VAR_14, VAR_5, "phy_ctrl");
 VAR_15->base = FUNC_11(VAR_16, VAR_19);
 if (FUNC_2(VAR_15->base))
  return FUNC_3(VAR_15->base);

 VAR_15->id_det_gpio = FUNC_10(VAR_16, "usb0_id_det",
          VAR_4);
 if (FUNC_2(VAR_15->id_det_gpio)) {
  FUNC_5(VAR_16, "Couldn't request ID GPIO\n");
  return FUNC_3(VAR_15->id_det_gpio);
 }

 VAR_15->vbus_det_gpio = FUNC_10(VAR_16, "usb0_vbus_det",
            VAR_4);
 if (FUNC_2(VAR_15->vbus_det_gpio)) {
  FUNC_5(VAR_16, "Couldn't request VBUS detect GPIO\n");
  return FUNC_3(VAR_15->vbus_det_gpio);
 }

 if (FUNC_21(VAR_17, "usb0_vbus_power-supply", ((void*)0))) {
  VAR_15->vbus_power_supply = FUNC_15(VAR_16,
           "usb0_vbus_power-supply");
  if (FUNC_2(VAR_15->vbus_power_supply)) {
   FUNC_5(VAR_16, "Couldn't get the VBUS power supply\n");
   return FUNC_3(VAR_15->vbus_power_supply);
  }

  if (!VAR_15->vbus_power_supply)
   return -VAR_2;
 }

 VAR_15->dr_mode = FUNC_22(VAR_17, 0);

 VAR_15->extcon = FUNC_8(VAR_16, VAR_8);
 if (FUNC_2(VAR_15->extcon)) {
  FUNC_5(VAR_16, "Couldn't allocate our extcon device\n");
  return FUNC_3(VAR_15->extcon);
 }

 VAR_21 = FUNC_9(VAR_16, VAR_15->extcon);
 if (VAR_21) {
  FUNC_5(VAR_16, "failed to register extcon: %d\n", VAR_21);
  return VAR_21;
 }

 for (VAR_20 = 0; VAR_20 < VAR_15->cfg->num_phys; VAR_20++) {
  struct sun4i_usb_phy *VAR_22 = VAR_15->phys + VAR_20;
  char VAR_23[16];

  if (VAR_15->cfg->missing_phys & FUNC_0(VAR_20))
   continue;

  FUNC_26(VAR_23, sizeof(VAR_23), "usb%d_vbus", VAR_20);
  VAR_22->vbus = FUNC_16(VAR_16, VAR_23);
  if (FUNC_2(VAR_22->vbus)) {
   if (FUNC_3(VAR_22->vbus) == -VAR_2) {
    FUNC_5(VAR_16,
     "Couldn't get regulator %s... Deferring probe\n",
     VAR_23);
    return -VAR_2;
   }

   VAR_22->vbus = ((void*)0);
  }

  if (VAR_15->cfg->dedicated_clocks)
   FUNC_26(VAR_23, sizeof(VAR_23), "usb%d_phy", VAR_20);
  else
   FUNC_28(VAR_23, "usb_phy", sizeof(VAR_23));

  VAR_22->clk = FUNC_7(VAR_16, VAR_23);
  if (FUNC_2(VAR_22->clk)) {
   FUNC_5(VAR_16, "failed to get clock %s\n", VAR_23);
   return FUNC_3(VAR_22->clk);
  }


  if (VAR_15->cfg->hsic_index && VAR_20 == VAR_15->cfg->hsic_index) {

   FUNC_26(VAR_23, sizeof(VAR_23), "usb%d_hsic_12M", VAR_20);
   VAR_22->clk2 = FUNC_7(VAR_16, VAR_23);
   if (FUNC_2(VAR_22->clk2)) {
    FUNC_5(VAR_16, "failed to get clock %s\n", VAR_23);
    return FUNC_3(VAR_22->clk2);
   }
  }

  FUNC_26(VAR_23, sizeof(VAR_23), "usb%d_reset", VAR_20);
  VAR_22->reset = FUNC_18(VAR_16, VAR_23);
  if (FUNC_2(VAR_22->reset)) {
   FUNC_5(VAR_16, "failed to get reset %s\n", VAR_23);
   return FUNC_3(VAR_22->reset);
  }

  if (VAR_20 || VAR_15->cfg->phy0_dual_route) {
   FUNC_26(VAR_23, sizeof(VAR_23), "pmu%d", VAR_20);
   VAR_19 = FUNC_24(VAR_14,
       VAR_5, VAR_23);
   VAR_22->pmu = FUNC_11(VAR_16, VAR_19);
   if (FUNC_2(VAR_22->pmu))
    return FUNC_3(VAR_22->pmu);
  }

  VAR_22->phy = FUNC_14(VAR_16, ((void*)0), &VAR_12);
  if (FUNC_2(VAR_22->phy)) {
   FUNC_5(VAR_16, "failed to create PHY %d\n", VAR_20);
   return FUNC_3(VAR_22->phy);
  }

  VAR_22->index = VAR_20;
  FUNC_23(VAR_22->phy, &VAR_15->phys[VAR_20]);
 }

 VAR_15->id_det_irq = FUNC_19(VAR_15->id_det_gpio);
 if (VAR_15->id_det_irq > 0) {
  VAR_21 = FUNC_17(VAR_16, VAR_15->id_det_irq,
    VAR_9,
    VAR_7 | VAR_6,
    "usb0-id-det", VAR_15);
  if (VAR_21) {
   FUNC_5(VAR_16, "Err requesting id-det-irq: %d\n", VAR_21);
   return VAR_21;
  }
 }

 VAR_15->vbus_det_irq = FUNC_19(VAR_15->vbus_det_gpio);
 if (VAR_15->vbus_det_irq > 0) {
  VAR_21 = FUNC_17(VAR_16, VAR_15->vbus_det_irq,
    VAR_9,
    VAR_7 | VAR_6,
    "usb0-vbus-det", VAR_15);
  if (VAR_21) {
   FUNC_5(VAR_16, "Err requesting vbus-det-irq: %d\n", VAR_21);
   VAR_15->vbus_det_irq = -1;
   FUNC_29(VAR_14);
   return VAR_21;
  }
 }

 if (VAR_15->vbus_power_supply) {
  VAR_15->vbus_power_nb.notifier_call = VAR_11;
  VAR_15->vbus_power_nb.priority = 0;
  VAR_21 = FUNC_25(&VAR_15->vbus_power_nb);
  if (VAR_21) {
   FUNC_29(VAR_14);
   return VAR_21;
  }
  VAR_15->vbus_power_nb_registered = 1;
 }

 VAR_18 = FUNC_13(VAR_16, VAR_13);
 if (FUNC_2(VAR_18)) {
  FUNC_29(VAR_14);
  return FUNC_3(VAR_18);
 }

 FUNC_4(VAR_16, "successfully loaded\n");

 return 0;
}
