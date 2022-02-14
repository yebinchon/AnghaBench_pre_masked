
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int notifier_call; } ;
struct sc2731_charger_info {TYPE_1__ usb_notify; int usb_phy; int psy_usb; int base; int regmap; int work; TYPE_2__* dev; int lock; } ;
struct power_supply_config {struct device_node* of_node; struct sc2731_charger_info* drv_data; } ;
struct TYPE_7__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (int ,int *) ;
 struct sc2731_charger_info* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,struct power_supply_config*) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_node*,char*,int *) ;
 int VAR_3 ;
 int FUNC_10 (struct sc2731_charger_info*) ;
 int FUNC_11 (struct sc2731_charger_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct sc2731_charger_info *VAR_8;
 struct power_supply_config VAR_9 = { };
 int VAR_10;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_8(&VAR_8->lock);
 VAR_8->dev = &VAR_6->dev;
 FUNC_0(&VAR_8->work, VAR_5);

 VAR_8->regmap = FUNC_4(VAR_6->dev.parent, ((void*)0));
 if (!VAR_8->regmap) {
  FUNC_3(&VAR_6->dev, "failed to get charger regmap\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_9(VAR_7, "reg", &VAR_8->base);
 if (VAR_10) {
  FUNC_3(&VAR_6->dev, "failed to get register address\n");
  return -VAR_0;
 }

 VAR_9.drv_data = VAR_8;
 VAR_9.of_node = VAR_7;
 VAR_8->psy_usb = FUNC_6(&VAR_6->dev,
         &VAR_3,
         &VAR_9);
 if (FUNC_1(VAR_8->psy_usb)) {
  FUNC_3(&VAR_6->dev, "failed to register power supply\n");
  return FUNC_2(VAR_8->psy_usb);
 }

 VAR_10 = FUNC_11(VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_8->usb_phy = FUNC_7(&VAR_6->dev, "phys", 0);
 if (FUNC_1(VAR_8->usb_phy)) {
  FUNC_3(&VAR_6->dev, "failed to find USB phy\n");
  return FUNC_2(VAR_8->usb_phy);
 }

 VAR_8->usb_notify.notifier_call = VAR_4;
 VAR_10 = FUNC_12(VAR_8->usb_phy, &VAR_8->usb_notify);
 if (VAR_10) {
  FUNC_3(&VAR_6->dev, "failed to register notifier: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_10(VAR_8);

 return 0;
}
