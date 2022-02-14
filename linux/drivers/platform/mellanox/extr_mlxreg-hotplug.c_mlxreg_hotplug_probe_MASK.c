
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mlxreg_hotplug_priv_data {scalar_t__ irq; int after_probe; int hwmon; int groups; int dwork_irq; int lock; struct platform_device* pdev; int dev; int regmap; } ;
struct mlxreg_core_hotplug_platform_data {scalar_t__ irq; int regmap; int deferred_nr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct mlxreg_core_hotplug_platform_data* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct mlxreg_hotplug_priv_data*) ;
 int FUNC_6 (TYPE_1__*,char*,struct mlxreg_hotplug_priv_data*,int ) ;
 struct mlxreg_hotplug_priv_data* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int ,int,char*,struct mlxreg_hotplug_priv_data*) ;
 int FUNC_9 (int) ;
 struct i2c_adapter* FUNC_10 (int ) ;
 int FUNC_11 (struct i2c_adapter*) ;
 int FUNC_12 (struct mlxreg_hotplug_priv_data*) ;
 int VAR_6 ;
 int FUNC_13 (struct mlxreg_hotplug_priv_data*) ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_8)
{
 struct mlxreg_core_hotplug_platform_data *VAR_9;
 struct mlxreg_hotplug_priv_data *VAR_10;
 struct i2c_adapter *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_4(&VAR_8->dev);
 if (!VAR_9) {
  FUNC_3(&VAR_8->dev, "Failed to get platform data.\n");
  return -VAR_0;
 }


 VAR_11 = FUNC_10(VAR_9->deferred_nr);
 if (!VAR_11)
  return -VAR_2;
 FUNC_11(VAR_11);

 VAR_10 = FUNC_7(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_9->irq) {
  VAR_10->irq = VAR_9->irq;
 } else {
  VAR_10->irq = FUNC_14(VAR_8, 0);
  if (VAR_10->irq < 0)
   return VAR_10->irq;
 }

 VAR_10->regmap = VAR_9->regmap;
 VAR_10->dev = VAR_8->dev.parent;
 VAR_10->pdev = VAR_8;

 VAR_12 = FUNC_8(&VAR_8->dev, VAR_10->irq,
          VAR_6, VAR_5
          | VAR_4, "mlxreg-hotplug", VAR_10);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "Failed to request irq: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_9(VAR_10->irq);
 FUNC_15(&VAR_10->lock);
 FUNC_0(&VAR_10->dwork_irq, VAR_7);
 FUNC_5(&VAR_8->dev, VAR_10);

 VAR_12 = FUNC_12(VAR_10);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "Failed to allocate attributes: %d\n",
   VAR_12);
  return VAR_12;
 }

 VAR_10->hwmon = FUNC_6(&VAR_8->dev,
     "mlxreg_hotplug", VAR_10, VAR_10->groups);
 if (FUNC_1(VAR_10->hwmon)) {
  FUNC_3(&VAR_8->dev, "Failed to register hwmon device %ld\n",
   FUNC_2(VAR_10->hwmon));
  return FUNC_2(VAR_10->hwmon);
 }


 FUNC_13(VAR_10);
 VAR_10->after_probe = 1;

 return 0;
}
