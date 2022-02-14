
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int bat_present; void* gpiod; struct device* dev; void* battery; int lock; void* charge_chan; void* channel; int base; int regmap; } ;
struct power_supply_config {struct device_node* of_node; struct sc27xx_fgu_data* drv_data; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device*,char*,int *) ;
 int FUNC_5 (struct device*,int ,struct sc27xx_fgu_data*) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 void* FUNC_7 (struct device*,char*) ;
 struct sc27xx_fgu_data* FUNC_8 (struct device*,int,int ) ;
 void* FUNC_9 (struct device*,int *,struct power_supply_config*) ;
 int FUNC_10 (struct device*,int,int *,int ,int,int ,struct sc27xx_fgu_data*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct sc27xx_fgu_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (struct sc27xx_fgu_data*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct power_supply_config VAR_15 = { };
 struct sc27xx_fgu_data *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_8(VAR_13, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->regmap = FUNC_3(VAR_13->parent, ((void*)0));
 if (!VAR_16->regmap) {
  FUNC_2(VAR_13, "failed to get regmap\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_4(VAR_13, "reg", &VAR_16->base);
 if (VAR_17) {
  FUNC_2(VAR_13, "failed to get fgu address\n");
  return VAR_17;
 }

 VAR_16->channel = FUNC_7(VAR_13, "bat-temp");
 if (FUNC_0(VAR_16->channel)) {
  FUNC_2(VAR_13, "failed to get IIO channel\n");
  return FUNC_1(VAR_16->channel);
 }

 VAR_16->charge_chan = FUNC_7(VAR_13, "charge-vol");
 if (FUNC_0(VAR_16->charge_chan)) {
  FUNC_2(VAR_13, "failed to get charge IIO channel\n");
  return FUNC_1(VAR_16->charge_chan);
 }

 VAR_16->gpiod = FUNC_6(VAR_13, "bat-detect", VAR_3);
 if (FUNC_0(VAR_16->gpiod)) {
  FUNC_2(VAR_13, "failed to get battery detection GPIO\n");
  return FUNC_1(VAR_16->gpiod);
 }

 VAR_17 = FUNC_11(VAR_16->gpiod);
 if (VAR_17 < 0) {
  FUNC_2(VAR_13, "failed to get gpio state\n");
  return VAR_17;
 }

 VAR_16->bat_present = !!VAR_17;
 FUNC_13(&VAR_16->lock);
 VAR_16->dev = VAR_13;
 FUNC_15(VAR_12, VAR_16);

 VAR_15.drv_data = VAR_16;
 VAR_15.of_node = VAR_14;
 VAR_16->battery = FUNC_9(VAR_13, &VAR_9,
         &VAR_15);
 if (FUNC_0(VAR_16->battery)) {
  FUNC_2(VAR_13, "failed to register power supply\n");
  return FUNC_1(VAR_16->battery);
 }

 VAR_17 = FUNC_16(VAR_16);
 if (VAR_17) {
  FUNC_2(VAR_13, "failed to initialize fgu hardware\n");
  return VAR_17;
 }

 VAR_17 = FUNC_5(VAR_13, VAR_10, VAR_16);
 if (VAR_17) {
  FUNC_2(VAR_13, "failed to add fgu disable action\n");
  return VAR_17;
 }

 VAR_18 = FUNC_14(VAR_12, 0);
 if (VAR_18 < 0) {
  FUNC_2(VAR_13, "no irq resource specified\n");
  return VAR_18;
 }

 VAR_17 = FUNC_10(VAR_16->dev, VAR_18, ((void*)0),
     VAR_11,
     VAR_4 | VAR_5,
     VAR_12->name, VAR_16);
 if (VAR_17) {
  FUNC_2(VAR_16->dev, "failed to request fgu IRQ\n");
  return VAR_17;
 }

 VAR_18 = FUNC_12(VAR_16->gpiod);
 if (VAR_18 < 0) {
  FUNC_2(VAR_13, "failed to translate GPIO to IRQ\n");
  return VAR_18;
 }

 VAR_17 = FUNC_10(VAR_13, VAR_18, ((void*)0),
     VAR_8,
     VAR_5 | VAR_7 |
     VAR_6,
     VAR_12->name, VAR_16);
 if (VAR_17) {
  FUNC_2(VAR_13, "failed to request IRQ\n");
  return VAR_17;
 }

 return 0;
}
