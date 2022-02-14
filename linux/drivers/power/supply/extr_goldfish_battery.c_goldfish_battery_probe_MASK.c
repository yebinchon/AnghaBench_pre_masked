
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct power_supply_config {struct goldfish_battery_data* drv_data; } ;
struct platform_device {int dev; int name; } ;
struct goldfish_battery_data {scalar_t__ irq; void* battery; void* ac; int * reg_base; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct goldfish_battery_data*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int ,int ) ;
 struct goldfish_battery_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,scalar_t__,int ,int ,int ,struct goldfish_battery_data*) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct goldfish_battery_data*) ;
 void* FUNC_10 (int *,int *,struct power_supply_config*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_10)
{
 int VAR_11;
 struct resource *VAR_12;
 struct goldfish_battery_data *VAR_13;
 struct power_supply_config VAR_14 = {};

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_13), VAR_4);
 if (VAR_13 == ((void*)0))
  return -VAR_3;

 FUNC_13(&VAR_13->lock);

 VAR_12 = FUNC_8(VAR_10, VAR_5, 0);
 if (VAR_12 == ((void*)0)) {
  FUNC_3(&VAR_10->dev, "platform_get_resource failed\n");
  return -VAR_2;
 }

 VAR_13->reg_base = FUNC_4(&VAR_10->dev, VAR_12->start, FUNC_12(VAR_12));
 if (VAR_13->reg_base == ((void*)0)) {
  FUNC_3(&VAR_10->dev, "unable to remap MMIO\n");
  return -VAR_3;
 }

 VAR_13->irq = FUNC_7(VAR_10, 0);
 if (VAR_13->irq < 0) {
  FUNC_3(&VAR_10->dev, "platform_get_irq failed\n");
  return -VAR_2;
 }

 VAR_11 = FUNC_6(&VAR_10->dev, VAR_13->irq,
          VAR_9,
          VAR_6, VAR_10->name, VAR_13);
 if (VAR_11)
  return VAR_11;

 VAR_14.drv_data = VAR_13;

 VAR_13->ac = FUNC_10(&VAR_10->dev, &VAR_7, &VAR_14);
 if (FUNC_1(VAR_13->ac))
  return FUNC_2(VAR_13->ac);

 VAR_13->battery = FUNC_10(&VAR_10->dev, &VAR_8,
      &VAR_14);
 if (FUNC_1(VAR_13->battery)) {
  FUNC_11(VAR_13->ac);
  return FUNC_2(VAR_13->battery);
 }

 FUNC_9(VAR_10, VAR_13);

 FUNC_0(VAR_13, VAR_0, VAR_1);
 return 0;
}
