
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct power_supply_config {struct max77693_charger* drv_data; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct max77693_dev {int dummy; } ;
struct max77693_charger {int charger; struct max77693_dev* max77693; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct max77693_dev* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct max77693_charger* FUNC_6 (TYPE_1__*,int,int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*,struct max77693_charger*) ;
 int FUNC_8 (struct max77693_charger*) ;
 int FUNC_9 (struct platform_device*,struct max77693_charger*) ;
 int FUNC_10 (TYPE_1__*,int *,struct power_supply_config*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct max77693_charger *VAR_7;
 struct power_supply_config VAR_8 = {};
 struct max77693_dev *VAR_9 = FUNC_3(VAR_6->dev.parent);
 int VAR_10;

 VAR_7 = FUNC_6(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_9(VAR_6, VAR_7);
 VAR_7->dev = &VAR_6->dev;
 VAR_7->max77693 = VAR_9;

 VAR_10 = FUNC_7(&VAR_6->dev, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_8(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8.drv_data = VAR_7;

 VAR_10 = FUNC_4(&VAR_6->dev, &VAR_2);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "failed: create fast charge timer sysfs entry\n");
  goto err;
 }

 VAR_10 = FUNC_4(&VAR_6->dev,
   &VAR_3);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "failed: create top off current sysfs entry\n");
  goto err;
 }

 VAR_10 = FUNC_4(&VAR_6->dev, &VAR_4);
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "failed: create top off timer sysfs entry\n");
  goto err;
 }

 VAR_7->charger = FUNC_10(&VAR_6->dev,
      &VAR_5,
      &VAR_8);
 if (FUNC_0(VAR_7->charger)) {
  FUNC_2(&VAR_6->dev, "failed: power supply register\n");
  VAR_10 = FUNC_1(VAR_7->charger);
  goto err;
 }

 return 0;

err:
 FUNC_5(&VAR_6->dev, &VAR_4);
 FUNC_5(&VAR_6->dev, &VAR_3);
 FUNC_5(&VAR_6->dev, &VAR_2);

 return VAR_10;
}
