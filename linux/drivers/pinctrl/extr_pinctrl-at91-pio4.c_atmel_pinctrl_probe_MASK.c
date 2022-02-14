
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct pinctrl_pin_desc {int number; char* name; } ;
struct of_device_id {struct atmel_pioctrl_data* data; } ;
struct atmel_pioctrl_data {int nbanks; } ;
struct atmel_pioctrl {int nbanks; int npins; char const** group_names; TYPE_2__* irq_domain; int clk; TYPE_5__* gpio_chip; int pinctrl_dev; int * irqs; void* pm_suspend_backup; void* pm_wakeup_sources; TYPE_1__** pins; struct atmel_group* groups; int reg_base; int node; struct device* dev; } ;
struct atmel_group {char const* name; int pin; } ;
struct TYPE_14__ {int npins; int custom_params; int num_custom_params; struct pinctrl_pin_desc* pins; } ;
struct TYPE_13__ {int ngpio; char const** names; struct device* parent; int label; int of_node; } ;
struct TYPE_12__ {char* name; } ;
struct TYPE_11__ {int pin_id; unsigned int bank; unsigned int line; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_8__ VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,char*,int,...) ;
 int FUNC_8 (struct device*,char*,...) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*,int *) ;
 int FUNC_12 (struct device*,struct resource*) ;
 void* FUNC_13 (struct device*,int,int,int ) ;
 void* FUNC_14 (struct device*,int,int ) ;
 int FUNC_15 (struct device*,TYPE_8__*,struct atmel_pioctrl*) ;
 int FUNC_16 (TYPE_5__*,struct atmel_pioctrl*) ;
 int FUNC_17 (TYPE_5__*,int ,int ,int ,int) ;
 int FUNC_18 (TYPE_5__*) ;
 int VAR_13 ;
 int FUNC_19 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_20 (int ,int,int *,int *) ;
 int FUNC_21 (TYPE_2__*) ;
 int VAR_14 ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int,int *,int ) ;
 int FUNC_24 (int,struct atmel_pioctrl*) ;
 int FUNC_25 (int ,struct atmel_pioctrl*) ;
 char* FUNC_26 (int ,char*,unsigned int,unsigned int) ;
 struct of_device_id* FUNC_27 (int ,int ) ;
 struct resource* FUNC_28 (struct platform_device*,int ,int) ;
 int FUNC_29 (struct platform_device*,struct atmel_pioctrl*) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct pinctrl_pin_desc *VAR_17;
 const char **VAR_18;
 const struct of_device_id *VAR_19;
 int VAR_20, VAR_21;
 struct resource *VAR_22;
 struct atmel_pioctrl *VAR_23;
 const struct atmel_pioctrl_data *VAR_24;

 VAR_23 = FUNC_14(VAR_16, sizeof(*VAR_23), VAR_4);
 if (!VAR_23)
  return -VAR_3;
 VAR_23->dev = VAR_16;
 VAR_23->node = VAR_16->of_node;
 FUNC_29(VAR_15, VAR_23);

 VAR_19 = FUNC_27(VAR_11, VAR_16->of_node);
 if (!VAR_19) {
  FUNC_8(VAR_16, "unknown compatible string\n");
  return -VAR_2;
 }
 VAR_24 = VAR_19->data;
 VAR_23->nbanks = VAR_24->nbanks;
 VAR_23->npins = VAR_23->nbanks * VAR_0;

 VAR_22 = FUNC_28(VAR_15, VAR_6, 0);
 VAR_23->reg_base = FUNC_12(VAR_16, VAR_22);
 if (FUNC_3(VAR_23->reg_base))
  return -VAR_1;

 VAR_23->clk = FUNC_11(VAR_16, ((void*)0));
 if (FUNC_3(VAR_23->clk)) {
  FUNC_8(VAR_16, "failed to get clock\n");
  return FUNC_4(VAR_23->clk);
 }

 VAR_23->pins = FUNC_13(VAR_16,
        VAR_23->npins,
        sizeof(*VAR_23->pins),
        VAR_4);
 if (!VAR_23->pins)
  return -VAR_3;

 VAR_17 = FUNC_13(VAR_16, VAR_23->npins, sizeof(*VAR_17),
    VAR_4);
 if (!VAR_17)
  return -VAR_3;
 VAR_12.pins = VAR_17;
 VAR_12.npins = VAR_23->npins;
 VAR_12.num_custom_params = FUNC_0(VAR_7);
 VAR_12.custom_params = VAR_7;


 VAR_18 = FUNC_13(VAR_16,
       VAR_23->npins, sizeof(*VAR_18),
       VAR_4);
 if (!VAR_18)
  return -VAR_3;
 VAR_23->group_names = VAR_18;

 VAR_23->groups = FUNC_13(&VAR_15->dev,
   VAR_23->npins, sizeof(*VAR_23->groups),
   VAR_4);
 if (!VAR_23->groups)
  return -VAR_3;
 for (VAR_20 = 0 ; VAR_20 < VAR_23->npins; VAR_20++) {
  struct atmel_group *VAR_25 = VAR_23->groups + VAR_20;
  unsigned VAR_26 = FUNC_1(VAR_20);
  unsigned VAR_27 = FUNC_2(VAR_20);

  VAR_23->pins[VAR_20] = FUNC_14(VAR_16,
    sizeof(**VAR_23->pins), VAR_4);
  if (!VAR_23->pins[VAR_20])
   return -VAR_3;

  VAR_23->pins[VAR_20]->pin_id = VAR_20;
  VAR_23->pins[VAR_20]->bank = VAR_26;
  VAR_23->pins[VAR_20]->line = VAR_27;

  VAR_17[VAR_20].number = VAR_20;

  VAR_17[VAR_20].name = FUNC_26(VAR_4, "P%c%d",
          VAR_26 + 'A', VAR_27);

  VAR_25->name = VAR_18[VAR_20] = VAR_17[VAR_20].name;
  VAR_25->pin = VAR_17[VAR_20].number;

  FUNC_7(VAR_16, "pin_id=%u, bank=%u, line=%u", VAR_20, VAR_26, VAR_27);
 }

 VAR_23->gpio_chip = &VAR_8;
 VAR_23->gpio_chip->of_node = VAR_16->of_node;
 VAR_23->gpio_chip->ngpio = VAR_23->npins;
 VAR_23->gpio_chip->label = FUNC_10(VAR_16);
 VAR_23->gpio_chip->parent = VAR_16;
 VAR_23->gpio_chip->names = VAR_23->group_names;

 VAR_23->pm_wakeup_sources = FUNC_13(VAR_16,
   VAR_23->nbanks,
   sizeof(*VAR_23->pm_wakeup_sources),
   VAR_4);
 if (!VAR_23->pm_wakeup_sources)
  return -VAR_3;

 VAR_23->pm_suspend_backup = FUNC_13(VAR_16,
   VAR_23->nbanks,
   sizeof(*VAR_23->pm_suspend_backup),
   VAR_4);
 if (!VAR_23->pm_suspend_backup)
  return -VAR_3;

 VAR_23->irqs = FUNC_13(VAR_16,
        VAR_23->nbanks,
        sizeof(*VAR_23->irqs),
        VAR_4);
 if (!VAR_23->irqs)
  return -VAR_3;


 for (VAR_20 = 0; VAR_20 < VAR_23->nbanks; VAR_20++) {
  VAR_22 = FUNC_28(VAR_15, VAR_5, VAR_20);
  if (!VAR_22) {
   FUNC_8(VAR_16, "missing irq resource for group %c\n",
    'A' + VAR_20);
   return -VAR_1;
  }
  VAR_23->irqs[VAR_20] = VAR_22->start;
  FUNC_22(VAR_22->start, VAR_10);
  FUNC_25(VAR_22->start, VAR_23);
  FUNC_7(VAR_16, "bank %i: irq=%pr\n", VAR_20, VAR_22);
 }

 VAR_23->irq_domain = FUNC_20(VAR_16->of_node,
   VAR_23->gpio_chip->ngpio,
   &VAR_14, ((void*)0));
 if (!VAR_23->irq_domain) {
  FUNC_8(VAR_16, "can't add the irq domain\n");
  return -VAR_2;
 }
 VAR_23->irq_domain->name = "atmel gpio";

 for (VAR_20 = 0; VAR_20 < VAR_23->npins; VAR_20++) {
  int VAR_28 = FUNC_19(VAR_23->irq_domain, VAR_20);

  FUNC_23(VAR_28, &VAR_9,
      VAR_13);
  FUNC_24(VAR_28, VAR_23);
  FUNC_7(VAR_16,
   "atmel gpio irq domain: hwirq: %d, linux irq: %d\n",
   VAR_20, VAR_28);
 }

 VAR_21 = FUNC_6(VAR_23->clk);
 if (VAR_21) {
  FUNC_8(VAR_16, "failed to prepare and enable clock\n");
  goto clk_prepare_enable_error;
 }

 VAR_23->pinctrl_dev = FUNC_15(&VAR_15->dev,
          &VAR_12,
          VAR_23);
 if (FUNC_3(VAR_23->pinctrl_dev)) {
  VAR_21 = FUNC_4(VAR_23->pinctrl_dev);
  FUNC_8(VAR_16, "pinctrl registration failed\n");
  goto clk_unprep;
 }

 VAR_21 = FUNC_16(VAR_23->gpio_chip, VAR_23);
 if (VAR_21) {
  FUNC_8(VAR_16, "failed to add gpiochip\n");
  goto clk_unprep;
 }

 VAR_21 = FUNC_17(VAR_23->gpio_chip, FUNC_10(VAR_16),
         0, 0, VAR_23->gpio_chip->ngpio);
 if (VAR_21) {
  FUNC_8(VAR_16, "failed to add gpio pin range\n");
  goto gpiochip_add_pin_range_error;
 }

 FUNC_9(&VAR_15->dev, "atmel pinctrl initialized\n");

 return 0;

gpiochip_add_pin_range_error:
 FUNC_18(VAR_23->gpio_chip);

clk_unprep:
 FUNC_5(VAR_23->clk);

clk_prepare_enable_error:
 FUNC_21(VAR_23->irq_domain);

 return VAR_21;
}
