
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxreg_hotplug_priv_data {int regmap; TYPE_1__* pdev; } ;
struct mlxreg_core_item {scalar_t__ inversed; scalar_t__ health; struct mlxreg_core_data* data; } ;
struct mlxreg_core_hotplug_platform_data {struct mlxreg_core_item* items; } ;
struct mlxreg_core_data {int mask; int reg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int index; int nr; } ;
struct TYPE_3__ {int dev; } ;


 struct mlxreg_hotplug_priv_data* FUNC_0 (struct device*) ;
 struct mlxreg_core_hotplug_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_2__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct mlxreg_hotplug_priv_data *VAR_3 = FUNC_0(VAR_0);
 struct mlxreg_core_hotplug_platform_data *VAR_4;
 int VAR_5 = FUNC_4(VAR_1)->index;
 int VAR_6 = FUNC_4(VAR_1)->nr;
 struct mlxreg_core_item *VAR_7;
 struct mlxreg_core_data *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_4 = FUNC_1(&VAR_3->pdev->dev);
 VAR_7 = VAR_4->items + VAR_6;
 VAR_8 = VAR_7->data + VAR_5;

 VAR_10 = FUNC_2(VAR_3->regmap, VAR_8->reg, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_7->health) {
  VAR_9 &= VAR_8->mask;
 } else {

  if (VAR_7->inversed)
   VAR_9 = !(VAR_9 & VAR_8->mask);
  else
   VAR_9 = !!(VAR_9 & VAR_8->mask);
 }

 return FUNC_3(VAR_2, "%u\n", VAR_9);
}
