
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct ns2_phy_driver {scalar_t__ id_irq; scalar_t__ vbus_irq; int debounce_jiffies; int wq_extcon; struct ns2_phy_data* data; struct phy_provider* crmu_usb2_ctrl; struct phy_provider* vbus_gpiod; struct phy_provider* id_gpiod; struct phy_provider* edev; struct phy_provider* usb2h_strap_reg; struct phy_provider* idmdrd_rst_ctrl; struct phy_provider* icfgdrd_regs; } ;
struct ns2_phy_data {struct phy_provider* phy; struct ns2_phy_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct phy_provider*) ;
 int VAR_8 ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct ns2_phy_driver*) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,struct phy_provider*) ;
 void* FUNC_8 (struct device*,char*,int ) ;
 void* FUNC_9 (struct device*,struct resource*) ;
 void* FUNC_10 (struct device*,int,int ) ;
 struct phy_provider* FUNC_11 (struct device*,int ) ;
 struct phy_provider* FUNC_12 (struct device*,int ,int *) ;
 int FUNC_13 (struct device*,int,int ,int,char*,struct ns2_phy_driver*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (struct phy_provider*,int) ;
 void* FUNC_15 (struct phy_provider*) ;
 int FUNC_16 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_17 (struct phy_provider*,struct ns2_phy_data*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,char*) ;
 int FUNC_19 (struct platform_device*,struct ns2_phy_driver*) ;
 int FUNC_20 (int ,int *,int ) ;
 int FUNC_21 (struct phy_provider*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_22 (int,struct phy_provider*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_15)
{
 struct phy_provider *VAR_16;
 struct device *VAR_17 = &VAR_15->dev;
 struct ns2_phy_driver *VAR_18;
 struct ns2_phy_data *VAR_19;
 struct resource *VAR_20;
 int VAR_21;
 u32 VAR_22;

 VAR_18 = FUNC_10(VAR_17, sizeof(struct ns2_phy_driver),
         VAR_2);
 if (!VAR_18)
  return -VAR_1;

 VAR_18->data = FUNC_10(VAR_17, sizeof(struct ns2_phy_data),
      VAR_2);
 if (!VAR_18->data)
  return -VAR_1;

 VAR_20 = FUNC_18(VAR_15, VAR_5, "icfg");
 VAR_18->icfgdrd_regs = FUNC_9(VAR_17, VAR_20);
 if (FUNC_1(VAR_18->icfgdrd_regs))
  return FUNC_2(VAR_18->icfgdrd_regs);

 VAR_20 = FUNC_18(VAR_15, VAR_5, "rst-ctrl");
 VAR_18->idmdrd_rst_ctrl = FUNC_9(VAR_17, VAR_20);
 if (FUNC_1(VAR_18->idmdrd_rst_ctrl))
  return FUNC_2(VAR_18->idmdrd_rst_ctrl);

 VAR_20 = FUNC_18(VAR_15, VAR_5, "crmu-ctrl");
 VAR_18->crmu_usb2_ctrl = FUNC_9(VAR_17, VAR_20);
 if (FUNC_1(VAR_18->crmu_usb2_ctrl))
  return FUNC_2(VAR_18->crmu_usb2_ctrl);

 VAR_20 = FUNC_18(VAR_15, VAR_5, "usb2-strap");
 VAR_18->usb2h_strap_reg = FUNC_9(VAR_17, VAR_20);
 if (FUNC_1(VAR_18->usb2h_strap_reg))
  return FUNC_2(VAR_18->usb2h_strap_reg);


 VAR_18->id_gpiod = FUNC_8(&VAR_15->dev, "id", VAR_3);
 if (FUNC_1(VAR_18->id_gpiod)) {
  FUNC_3(VAR_17, "failed to get ID GPIO\n");
  return FUNC_2(VAR_18->id_gpiod);
 }
 VAR_18->vbus_gpiod = FUNC_8(&VAR_15->dev, "vbus", VAR_3);
 if (FUNC_1(VAR_18->vbus_gpiod)) {
  FUNC_3(VAR_17, "failed to get VBUS GPIO\n");
  return FUNC_2(VAR_18->vbus_gpiod);
 }

 VAR_18->edev = FUNC_6(VAR_17, VAR_14);
 if (FUNC_1(VAR_18->edev)) {
  FUNC_3(VAR_17, "failed to allocate extcon device\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_7(VAR_17, VAR_18->edev);
 if (VAR_21 < 0) {
  FUNC_3(VAR_17, "failed to register extcon device\n");
  return VAR_21;
 }

 VAR_21 = FUNC_14(VAR_18->id_gpiod, VAR_4 * 1000);
 if (VAR_21 < 0)
  VAR_18->debounce_jiffies = FUNC_16(VAR_4);

 FUNC_0(&VAR_18->wq_extcon, VAR_9);

 VAR_18->id_irq = FUNC_15(VAR_18->id_gpiod);
 if (VAR_18->id_irq < 0) {
  FUNC_3(VAR_17, "failed to get ID IRQ\n");
  return VAR_18->id_irq;
 }

 VAR_18->vbus_irq = FUNC_15(VAR_18->vbus_gpiod);
 if (VAR_18->vbus_irq < 0) {
  FUNC_3(VAR_17, "failed to get ID IRQ\n");
  return VAR_18->vbus_irq;
 }

 VAR_21 = FUNC_13(VAR_17, VAR_18->id_irq, VAR_10,
          VAR_7 | VAR_6,
          "usb_id", VAR_18);
 if (VAR_21 < 0) {
  FUNC_3(VAR_17, "failed to request handler for ID IRQ\n");
  return VAR_21;
 }

 VAR_21 = FUNC_13(VAR_17, VAR_18->vbus_irq, VAR_10,
          VAR_7 | VAR_6,
          "usb_vbus", VAR_18);
 if (VAR_21 < 0) {
  FUNC_3(VAR_17, "failed to request handler for VBUS IRQ\n");
  return VAR_21;
 }

 FUNC_5(VAR_17, VAR_18);


 VAR_22 = FUNC_21(VAR_18->crmu_usb2_ctrl);
 VAR_22 &= ~(VAR_0 | VAR_8);
 FUNC_22(VAR_22, VAR_18->crmu_usb2_ctrl);

 VAR_19 = VAR_18->data;
 VAR_19->phy = FUNC_12(VAR_17, VAR_17->of_node, &VAR_12);
 if (FUNC_1(VAR_19->phy)) {
  FUNC_3(VAR_17, "Failed to create usb drd phy\n");
  return FUNC_2(VAR_19->phy);
 }

 VAR_19->driver = VAR_18;
 FUNC_17(VAR_19->phy, VAR_19);

 VAR_16 = FUNC_11(VAR_17, VAR_11);
 if (FUNC_1(VAR_16)) {
  FUNC_3(VAR_17, "Failed to register as phy provider\n");
  return FUNC_2(VAR_16);
 }

 FUNC_19(VAR_15, VAR_18);

 FUNC_4(VAR_17, "Registered NS2 DRD Phy device\n");
 FUNC_20(VAR_13, &VAR_18->wq_extcon,
      VAR_18->debounce_jiffies);

 return 0;
}
