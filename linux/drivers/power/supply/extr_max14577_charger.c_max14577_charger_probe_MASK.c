
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct power_supply_config {struct max14577_charger* drv_data; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max14577_charger {int charger; int pdata; struct max14577* max14577; TYPE_1__* dev; } ;
struct max14577 {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct max14577* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 struct max14577_charger* FUNC_8 (TYPE_1__*,int,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct platform_device*) ;
 int FUNC_10 (struct max14577_charger*) ;
 int FUNC_11 (struct platform_device*,struct max14577_charger*) ;
 int FUNC_12 (TYPE_1__*,int *,struct power_supply_config*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct max14577_charger *VAR_8;
 struct power_supply_config VAR_9 = {};
 struct max14577 *VAR_10 = FUNC_5(VAR_7->dev.parent);
 int VAR_11;

 VAR_8 = FUNC_8(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_11(VAR_7, VAR_8);
 VAR_8->dev = &VAR_7->dev;
 VAR_8->max14577 = VAR_10;

 VAR_8->pdata = FUNC_9(VAR_7);
 if (FUNC_2(VAR_8->pdata))
  return FUNC_3(VAR_8->pdata);

 VAR_11 = FUNC_10(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_6(&VAR_7->dev, &VAR_5);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "failed: create sysfs entry\n");
  return VAR_11;
 }

 VAR_9.drv_data = VAR_8;
 VAR_8->charger = FUNC_12(&VAR_7->dev, &VAR_6,
      &VAR_9);
 if (FUNC_1(VAR_8->charger)) {
  FUNC_4(&VAR_7->dev, "failed: power supply register\n");
  VAR_11 = FUNC_3(VAR_8->charger);
  goto err;
 }


 FUNC_0(VAR_3 +
   VAR_4 * 0xf !=
   VAR_2);
 return 0;

err:
 FUNC_7(&VAR_7->dev, &VAR_5);

 return VAR_11;
}
