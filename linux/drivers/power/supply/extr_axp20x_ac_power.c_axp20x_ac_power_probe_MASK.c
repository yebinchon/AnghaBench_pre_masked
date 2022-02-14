
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct power_supply_config {struct axp20x_ac_power* drv_data; int of_node; } ;
struct TYPE_8__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct axp_data {int power_desc; scalar_t__ acin_adc; } ;
struct axp20x_dev {int regmap_irqc; } ;
struct axp20x_ac_power {void* supply; int regmap; void* acin_i; void* acin_v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct axp20x_dev* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,char*,char const* const,int) ;
 void* FUNC_6 (TYPE_1__*,char*) ;
 struct axp20x_ac_power* FUNC_7 (TYPE_1__*,int,int ) ;
 void* FUNC_8 (TYPE_1__*,int ,struct power_supply_config*) ;
 int FUNC_9 (TYPE_1__*,int,int ,int ,int ,struct axp20x_ac_power*) ;
 struct axp_data* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct platform_device*,char const* const) ;
 int FUNC_13 (struct platform_device*,struct axp20x_ac_power*) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct axp20x_dev *VAR_8 = FUNC_3(VAR_7->dev.parent);
 struct power_supply_config VAR_9 = {};
 struct axp20x_ac_power *VAR_10;
 const struct axp_data *VAR_11;
 static const char * const VAR_12[] = { "ACIN_PLUGIN", "ACIN_REMOVAL",
  ((void*)0) };
 int VAR_13, VAR_14, VAR_15;

 if (!FUNC_11(VAR_7->dev.of_node))
  return -VAR_2;

 if (!VAR_8) {
  FUNC_2(&VAR_7->dev, "Parent drvdata not set\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_7(&VAR_7->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_3;

 VAR_11 = FUNC_10(&VAR_7->dev);

 if (VAR_11->acin_adc) {
  VAR_10->acin_v = FUNC_6(&VAR_7->dev, "acin_v");
  if (FUNC_0(VAR_10->acin_v)) {
   if (FUNC_1(VAR_10->acin_v) == -VAR_2)
    return -VAR_4;
   return FUNC_1(VAR_10->acin_v);
  }

  VAR_10->acin_i = FUNC_6(&VAR_7->dev, "acin_i");
  if (FUNC_0(VAR_10->acin_i)) {
   if (FUNC_1(VAR_10->acin_i) == -VAR_2)
    return -VAR_4;
   return FUNC_1(VAR_10->acin_i);
  }
 }

 VAR_10->regmap = FUNC_4(VAR_7->dev.parent, ((void*)0));

 FUNC_13(VAR_7, VAR_10);

 VAR_9.of_node = VAR_7->dev.of_node;
 VAR_9.drv_data = VAR_10;

 VAR_10->supply = FUNC_8(&VAR_7->dev,
         VAR_11->power_desc,
         &VAR_9);
 if (FUNC_0(VAR_10->supply))
  return FUNC_1(VAR_10->supply);


 for (VAR_13 = 0; VAR_12[VAR_13]; VAR_13++) {
  VAR_14 = FUNC_12(VAR_7, VAR_12[VAR_13]);
  if (VAR_14 < 0) {
   FUNC_5(&VAR_7->dev, "No IRQ for %s: %d\n",
     VAR_12[VAR_13], VAR_14);
   continue;
  }
  VAR_14 = FUNC_14(VAR_8->regmap_irqc, VAR_14);
  VAR_15 = FUNC_9(&VAR_7->dev, VAR_14,
         VAR_6, 0,
         VAR_0, VAR_10);
  if (VAR_15 < 0)
   FUNC_5(&VAR_7->dev, "Error requesting %s IRQ: %d\n",
     VAR_12[VAR_13], VAR_15);
 }

 return 0;
}
