
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct pinctrl_desc {int * pmxops; int * pctlops; int npins; TYPE_1__* pins; void* owner; void* name; } ;
struct TYPE_7__ {int base; int can_sleep; int ngpio; int direction_output; int direction_input; int set; int get_direction; int get; void* owner; void* label; struct device* parent; int free; int request; } ;
struct axp20x_pctl {TYPE_2__* desc; TYPE_3__ chip; int pctl_dev; struct device* dev; int regmap; } ;
struct axp20x_dev {int regmap; } ;
struct TYPE_6__ {int npins; TYPE_1__* pins; } ;
struct TYPE_5__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_4 ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct device*,char*) ;
 struct axp20x_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,TYPE_3__*,struct axp20x_pctl*) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,struct pinctrl_desc*,struct axp20x_pctl*) ;
 int FUNC_10 (TYPE_3__*,void*,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* FUNC_11 (struct device*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct platform_device*,struct axp20x_pctl*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_14)
{
 struct axp20x_dev *VAR_15 = FUNC_4(VAR_14->dev.parent);
 struct axp20x_pctl *VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 struct pinctrl_desc *VAR_18;
 int VAR_19;

 if (!FUNC_12(VAR_14->dev.of_node))
  return -VAR_1;

 if (!VAR_15) {
  FUNC_3(&VAR_14->dev, "Parent drvdata not set\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_8(&VAR_14->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->chip.base = -1;
 VAR_16->chip.can_sleep = 1;
 VAR_16->chip.request = VAR_13;
 VAR_16->chip.free = VAR_12;
 VAR_16->chip.parent = &VAR_14->dev;
 VAR_16->chip.label = FUNC_6(&VAR_14->dev);
 VAR_16->chip.owner = VAR_4;
 VAR_16->chip.get = VAR_5;
 VAR_16->chip.get_direction = VAR_6;
 VAR_16->chip.set = VAR_9;
 VAR_16->chip.direction_input = VAR_7;
 VAR_16->chip.direction_output = VAR_8;

 VAR_16->desc = FUNC_11(VAR_17);

 VAR_16->chip.ngpio = VAR_16->desc->npins;

 VAR_16->regmap = VAR_15->regmap;
 VAR_16->dev = &VAR_14->dev;

 FUNC_13(VAR_14, VAR_16);

 VAR_19 = FUNC_2(VAR_14);
 if (VAR_19) {
  FUNC_3(&VAR_14->dev, "failed to build groups\n");
  return VAR_19;
 }

 VAR_18 = FUNC_8(&VAR_14->dev, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->name = FUNC_6(&VAR_14->dev);
 VAR_18->owner = VAR_4;
 VAR_18->pins = VAR_16->desc->pins;
 VAR_18->npins = VAR_16->desc->npins;
 VAR_18->pctlops = &VAR_10;
 VAR_18->pmxops = &VAR_11;

 VAR_16->pctl_dev = FUNC_9(&VAR_14->dev, VAR_18, VAR_16);
 if (FUNC_0(VAR_16->pctl_dev)) {
  FUNC_3(&VAR_14->dev, "couldn't register pinctrl driver\n");
  return FUNC_1(VAR_16->pctl_dev);
 }

 VAR_19 = FUNC_7(&VAR_14->dev, &VAR_16->chip, VAR_16);
 if (VAR_19) {
  FUNC_3(&VAR_14->dev, "Failed to register GPIO chip\n");
  return VAR_19;
 }

 VAR_19 = FUNC_10(&VAR_16->chip, FUNC_6(&VAR_14->dev),
         VAR_16->desc->pins->number,
         VAR_16->desc->pins->number,
         VAR_16->desc->npins);
 if (VAR_19) {
  FUNC_3(&VAR_14->dev, "failed to add pin range\n");
  return VAR_19;
 }

 FUNC_5(&VAR_14->dev, "AXP209 pinctrl and GPIO driver loaded\n");

 return 0;
}
