
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct pm8xxx_pin_data {int irq; int reg; } ;
struct TYPE_16__ {int base; int of_gpio_n_cells; uintptr_t ngpio; int label; int of_node; TYPE_7__* parent; } ;
struct TYPE_15__ {uintptr_t npins; int custom_conf_items; int custom_params; int num_custom_params; struct pinctrl_pin_desc* pins; } ;
struct pm8xxx_gpio {uintptr_t npins; int domain; TYPE_2__ chip; TYPE_7__* dev; int fwnode; int pctrl; TYPE_1__ desc; int regmap; } ;
struct TYPE_17__ {int of_node; int parent; } ;
struct platform_device {TYPE_7__ dev; } ;
struct pinctrl_pin_desc {int number; struct pm8xxx_pin_data* drv_data; int name; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 int FUNC_5 (TYPE_7__*,char*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 void* FUNC_9 (TYPE_7__*,uintptr_t,int,int ) ;
 struct pm8xxx_gpio* FUNC_10 (TYPE_7__*,int,int ) ;
 int FUNC_11 (TYPE_7__*,TYPE_1__*,struct pm8xxx_gpio*) ;
 int FUNC_12 (TYPE_2__*,struct pm8xxx_gpio*) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int ,uintptr_t) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct irq_domain*,int ,uintptr_t,int ,int *,TYPE_2__*) ;
 int FUNC_16 (int ) ;
 struct irq_domain* FUNC_17 (struct device_node*) ;
 struct device_node* FUNC_18 (int ) ;
 int FUNC_19 (struct device_node*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;
 int FUNC_22 (struct platform_device*,struct pm8xxx_gpio*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int * VAR_8 ;
 int FUNC_23 (struct pm8xxx_gpio*,struct pm8xxx_pin_data*) ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_10)
{
 struct pm8xxx_pin_data *VAR_11;
 struct irq_domain *VAR_12;
 struct device_node *VAR_13;
 struct pinctrl_pin_desc *VAR_14;
 struct pm8xxx_gpio *VAR_15;
 int VAR_16, VAR_17;

 VAR_15 = FUNC_10(&VAR_10->dev, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->dev = &VAR_10->dev;
 VAR_15->npins = (uintptr_t) FUNC_8(&VAR_10->dev);

 VAR_15->regmap = FUNC_6(VAR_10->dev.parent, ((void*)0));
 if (!VAR_15->regmap) {
  FUNC_5(&VAR_10->dev, "parent regmap unavailable\n");
  return -VAR_2;
 }

 VAR_15->desc = VAR_9;
 VAR_15->desc.npins = VAR_15->npins;

 VAR_14 = FUNC_9(&VAR_10->dev,
       VAR_15->desc.npins,
       sizeof(struct pinctrl_pin_desc),
       VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_11 = FUNC_9(&VAR_10->dev,
    VAR_15->desc.npins,
    sizeof(struct pm8xxx_pin_data),
    VAR_3);
 if (!VAR_11)
  return -VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_15->desc.npins; VAR_17++) {
  VAR_11[VAR_17].reg = FUNC_3(VAR_17);
  VAR_11[VAR_17].irq = -1;

  VAR_16 = FUNC_23(VAR_15, &VAR_11[VAR_17]);
  if (VAR_16)
   return VAR_16;

  VAR_14[VAR_17].number = VAR_17;
  VAR_14[VAR_17].name = VAR_8[VAR_17];
  VAR_14[VAR_17].drv_data = &VAR_11[VAR_17];
 }
 VAR_15->desc.pins = VAR_14;

 VAR_15->desc.num_custom_params = FUNC_0(VAR_6);
 VAR_15->desc.custom_params = VAR_6;




 VAR_15->pctrl = FUNC_11(&VAR_10->dev, &VAR_15->desc, VAR_15);
 if (FUNC_1(VAR_15->pctrl)) {
  FUNC_5(&VAR_10->dev, "couldn't register pm8xxx gpio driver\n");
  return FUNC_2(VAR_15->pctrl);
 }

 VAR_15->chip = VAR_7;
 VAR_15->chip.base = -1;
 VAR_15->chip.parent = &VAR_10->dev;
 VAR_15->chip.of_node = VAR_10->dev.of_node;
 VAR_15->chip.of_gpio_n_cells = 2;
 VAR_15->chip.label = FUNC_7(VAR_15->dev);
 VAR_15->chip.ngpio = VAR_15->npins;

 VAR_13 = FUNC_18(VAR_15->dev->of_node);
 if (!VAR_13)
  return -VAR_2;

 VAR_12 = FUNC_17(VAR_13);
 FUNC_19(VAR_13);
 if (!VAR_12)
  return -VAR_2;

 VAR_15->fwnode = FUNC_20(VAR_15->dev->of_node);
 VAR_15->domain = FUNC_15(VAR_12, 0,
          VAR_15->chip.ngpio,
          VAR_15->fwnode,
          &VAR_5,
          &VAR_15->chip);
 if (!VAR_15->domain)
  return -VAR_0;

 VAR_16 = FUNC_12(&VAR_15->chip, VAR_15);
 if (VAR_16) {
  FUNC_5(&VAR_10->dev, "failed register gpiochip\n");
  goto err_chip_add_data;
 }
 if (!FUNC_21(VAR_15->dev->of_node, "gpio-ranges")) {
  VAR_16 = FUNC_13(&VAR_15->chip, FUNC_7(VAR_15->dev),
          0, 0, VAR_15->chip.ngpio);
  if (VAR_16) {
   FUNC_5(VAR_15->dev, "failed to add pin range\n");
   goto unregister_gpiochip;
  }
 }

 FUNC_22(VAR_10, VAR_15);

 FUNC_4(&VAR_10->dev, "Qualcomm pm8xxx gpio driver probed\n");

 return 0;

unregister_gpiochip:
 FUNC_14(&VAR_15->chip);
err_chip_add_data:
 FUNC_16(VAR_15->domain);

 return VAR_16;
}
