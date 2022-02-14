
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int set_suspend; TYPE_1__* dev; } ;
struct tegra_usb_phy {int is_ulpi_phy; int reset_gpio; scalar_t__ mode; TYPE_2__ u_phy; int vbus; int * config; int is_legacy_phy; int regs; int soc_config; } ;
struct resource {int start; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct device_node {int dummy; } ;
typedef enum usb_phy_interface { ____Placeholder_usb_phy_interface } usb_phy_interface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 struct tegra_usb_phy* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct device_node*,char*,int ) ;
 struct of_device_id* FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct device_node*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct tegra_usb_phy*) ;
 int FUNC_16 (struct resource*) ;
 int FUNC_17 (struct tegra_usb_phy*) ;
 int VAR_8 ;
 int FUNC_18 (struct tegra_usb_phy*) ;
 int VAR_9 ;
 int FUNC_19 (TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (struct tegra_usb_phy*,struct platform_device*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11;
 struct resource *VAR_12;
 struct tegra_usb_phy *VAR_13 = ((void*)0);
 struct device_node *VAR_14 = VAR_10->dev.of_node;
 enum usb_phy_interface VAR_15;
 int VAR_16;

 VAR_13 = FUNC_6(&VAR_10->dev, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_2;

 VAR_11 = FUNC_11(VAR_8, &VAR_10->dev);
 if (!VAR_11) {
  FUNC_3(&VAR_10->dev, "Error: No device match found\n");
  return -VAR_1;
 }
 VAR_13->soc_config = VAR_11->data;

 VAR_12 = FUNC_14(VAR_10, VAR_5, 0);
 if (!VAR_12) {
  FUNC_3(&VAR_10->dev, "Failed to get I/O memory\n");
  return -VAR_3;
 }

 VAR_13->regs = FUNC_5(&VAR_10->dev, VAR_12->start,
  FUNC_16(VAR_12));
 if (!VAR_13->regs) {
  FUNC_3(&VAR_10->dev, "Failed to remap I/O memory\n");
  return -VAR_2;
 }

 VAR_13->is_legacy_phy =
  FUNC_12(VAR_14, "nvidia,has-legacy-mode");

 VAR_15 = FUNC_13(VAR_14);
 switch (VAR_15) {
 case 128:
  VAR_16 = FUNC_21(VAR_13, VAR_10);
  if (VAR_16 < 0)
   return VAR_16;
  break;

 case 129:
  VAR_13->is_ulpi_phy = 1;

  VAR_13->reset_gpio =
   FUNC_10(VAR_14, "nvidia,phy-reset-gpio", 0);
  if (!FUNC_8(VAR_13->reset_gpio)) {
   FUNC_3(&VAR_10->dev,
    "Invalid GPIO: %d\n", VAR_13->reset_gpio);
   return VAR_13->reset_gpio;
  }
  VAR_13->config = ((void*)0);
  break;

 default:
  FUNC_3(&VAR_10->dev, "phy_type %u is invalid or unsupported\n",
   VAR_15);
  return -VAR_0;
 }

 if (FUNC_9(VAR_14, "dr_mode", ((void*)0)))
  VAR_13->mode = FUNC_20(&VAR_10->dev);
 else
  VAR_13->mode = VAR_6;

 if (VAR_13->mode == VAR_7) {
  FUNC_3(&VAR_10->dev, "dr_mode is invalid\n");
  return -VAR_0;
 }


 if (FUNC_9(VAR_14, "vbus-supply", ((void*)0))) {
  VAR_13->vbus = FUNC_7(&VAR_10->dev, "vbus");
  if (FUNC_1(VAR_13->vbus))
   return FUNC_2(VAR_13->vbus);
 } else {
  FUNC_4(&VAR_10->dev, "no vbus regulator");
  VAR_13->vbus = FUNC_0(-VAR_1);
 }

 VAR_13->u_phy.dev = &VAR_10->dev;
 VAR_16 = FUNC_18(VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_13->u_phy.set_suspend = VAR_9;

 FUNC_15(VAR_10, VAR_13);

 VAR_16 = FUNC_19(&VAR_13->u_phy);
 if (VAR_16 < 0) {
  FUNC_17(VAR_13);
  return VAR_16;
 }

 return 0;
}
