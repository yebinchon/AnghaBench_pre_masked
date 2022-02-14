
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int translate; } ;
struct gpio_irq_chip {TYPE_1__ child_irq_domain_ops; int child_offset_to_irq; int populate_parent_fwspec; int child_to_parent_hwirq; struct irq_domain* parent_domain; int fwnode; int handler; int default_type; int * chip; } ;
struct TYPE_7__ {int base; int ngpio; int of_gpio_n_cells; int can_sleep; struct gpio_irq_chip irq; void* label; struct device* parent; } ;
struct pmic_gpio_state {TYPE_2__ chip; struct device* dev; int ctrl; int map; } ;
struct pmic_gpio_pad {scalar_t__ base; } ;
struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct pinctrl_pin_desc {int number; int name; struct pmic_gpio_pad* drv_data; } ;
struct pinctrl_desc {int npins; int custom_conf_items; int custom_params; int num_custom_params; struct pinctrl_pin_desc* pins; void* name; int owner; int * confops; int * pmxops; int * pctlops; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,int,int,int ) ;
 void* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,struct pinctrl_desc*,struct pmic_gpio_state*) ;
 int FUNC_10 (TYPE_2__*,struct pmic_gpio_state*) ;
 int FUNC_11 (TYPE_2__*,void*,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_7 ;
 struct irq_domain* FUNC_13 (struct device_node*) ;
 struct device_node* FUNC_14 (int ) ;
 int FUNC_15 (struct device_node*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*,scalar_t__*) ;
 int FUNC_19 (struct platform_device*,struct pmic_gpio_state*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_20 (struct pmic_gpio_state*,struct pmic_gpio_pad*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_19)
{
 struct irq_domain *VAR_20;
 struct device_node *VAR_21;
 struct device *VAR_22 = &VAR_19->dev;
 struct pinctrl_pin_desc *VAR_23;
 struct pinctrl_desc *VAR_24;
 struct pmic_gpio_pad *VAR_25, *VAR_26;
 struct pmic_gpio_state *VAR_27;
 struct gpio_irq_chip *VAR_28;
 int VAR_29, VAR_30, VAR_31;
 u32 VAR_32;

 VAR_29 = FUNC_18(VAR_22->of_node, "reg", &VAR_32);
 if (VAR_29 < 0) {
  FUNC_3(VAR_22, "missing base address");
  return VAR_29;
 }

 VAR_30 = (uintptr_t) FUNC_6(&VAR_19->dev);

 VAR_27 = FUNC_8(VAR_22, sizeof(*VAR_27), VAR_2);
 if (!VAR_27)
  return -VAR_0;

 FUNC_19(VAR_19, VAR_27);

 VAR_27->dev = &VAR_19->dev;
 VAR_27->map = FUNC_4(VAR_22->parent, ((void*)0));

 VAR_23 = FUNC_7(VAR_22, VAR_30, sizeof(*VAR_23), VAR_2);
 if (!VAR_23)
  return -VAR_0;

 VAR_26 = FUNC_7(VAR_22, VAR_30, sizeof(*VAR_26), VAR_2);
 if (!VAR_26)
  return -VAR_0;

 VAR_24 = FUNC_8(VAR_22, sizeof(*VAR_24), VAR_2);
 if (!VAR_24)
  return -VAR_0;

 VAR_24->pctlops = &VAR_17;
 VAR_24->pmxops = &VAR_18;
 VAR_24->confops = &VAR_16;
 VAR_24->owner = VAR_5;
 VAR_24->name = FUNC_5(VAR_22);
 VAR_24->pins = VAR_23;
 VAR_24->npins = VAR_30;
 VAR_24->num_custom_params = FUNC_0(VAR_9);
 VAR_24->custom_params = VAR_9;




 for (VAR_31 = 0; VAR_31 < VAR_30; VAR_31++, VAR_23++) {
  VAR_25 = &VAR_26[VAR_31];
  VAR_23->drv_data = VAR_25;
  VAR_23->number = VAR_31;
  VAR_23->name = VAR_14[VAR_31];

  VAR_25->base = VAR_32 + VAR_31 * VAR_4;

  VAR_29 = FUNC_20(VAR_27, VAR_25);
  if (VAR_29 < 0)
   return VAR_29;
 }

 VAR_27->chip = VAR_13;
 VAR_27->chip.parent = VAR_22;
 VAR_27->chip.base = -1;
 VAR_27->chip.ngpio = VAR_30;
 VAR_27->chip.label = FUNC_5(VAR_22);
 VAR_27->chip.of_gpio_n_cells = 2;
 VAR_27->chip.can_sleep = 0;

 VAR_27->ctrl = FUNC_9(VAR_22, VAR_24, VAR_27);
 if (FUNC_1(VAR_27->ctrl))
  return FUNC_2(VAR_27->ctrl);

 VAR_21 = FUNC_14(VAR_27->dev->of_node);
 if (!VAR_21)
  return -VAR_1;

 VAR_20 = FUNC_13(VAR_21);
 FUNC_15(VAR_21);
 if (!VAR_20)
  return -VAR_1;

 VAR_28 = &VAR_27->chip.irq;
 VAR_28->chip = &VAR_15;
 VAR_28->default_type = VAR_3;
 VAR_28->handler = VAR_7;
 VAR_28->fwnode = FUNC_16(VAR_27->dev->of_node);
 VAR_28->parent_domain = VAR_20;
 VAR_28->child_to_parent_hwirq = VAR_11;
 VAR_28->populate_parent_fwspec = VAR_6;
 VAR_28->child_offset_to_irq = VAR_10;
 VAR_28->child_irq_domain_ops.translate = VAR_12;

 VAR_29 = FUNC_10(&VAR_27->chip, VAR_27);
 if (VAR_29) {
  FUNC_3(VAR_27->dev, "can't add gpio chip\n");
  return VAR_29;
 }
 if (!FUNC_17(VAR_22->of_node, "gpio-ranges")) {
  VAR_29 = FUNC_11(&VAR_27->chip, FUNC_5(VAR_22), 0, 0,
          VAR_30);
  if (VAR_29) {
   FUNC_3(VAR_22, "failed to add pin range\n");
   goto err_range;
  }
 }

 return 0;

err_range:
 FUNC_12(&VAR_27->chip);
 return VAR_29;
}
