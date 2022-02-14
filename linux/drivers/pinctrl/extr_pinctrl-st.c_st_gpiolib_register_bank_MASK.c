
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct st_pinctrl {scalar_t__ irqmux_base; struct device* dev; struct st_gpio_bank* banks; } ;
struct TYPE_6__ {int base; int ngpio; struct device_node* label; struct device* parent; struct device_node* of_node; } ;
struct pinctrl_gpio_range {int id; int pin_base; int base; int npins; struct device_node* name; TYPE_1__* gc; } ;
struct st_gpio_bank {TYPE_1__ gpio_chip; int lock; int base; struct pinctrl_gpio_range range; } ;
struct resource {int start; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,struct resource*) ;
 int FUNC_5 (TYPE_1__*,struct st_gpio_bank*) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct device_node*,int ,struct resource*) ;
 int FUNC_10 (struct device_node*,char*) ;
 scalar_t__ FUNC_11 (struct device_node*,int ,struct resource*) ;
 int FUNC_12 (struct device_node*,char*,struct device_node**) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_14(struct st_pinctrl *VAR_7,
 int VAR_8, struct device_node *VAR_9)
{
 struct st_gpio_bank *VAR_10 = &VAR_7->banks[VAR_8];
 struct pinctrl_gpio_range *VAR_11 = &VAR_10->range;
 struct device *VAR_12 = VAR_7->dev;
 int VAR_13 = FUNC_10(VAR_9, "gpio");
 struct resource VAR_14, VAR_15;
 int VAR_16 = 0, VAR_17;

 if (FUNC_9(VAR_9, 0, &VAR_14))
  return -VAR_0;

 VAR_10->base = FUNC_4(VAR_12, &VAR_14);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->gpio_chip = VAR_6;
 VAR_10->gpio_chip.base = VAR_13 * VAR_2;
 VAR_10->gpio_chip.ngpio = VAR_2;
 VAR_10->gpio_chip.of_node = VAR_9;
 VAR_10->gpio_chip.parent = VAR_12;
 FUNC_13(&VAR_10->lock);

 FUNC_12(VAR_9, "st,bank-name", &VAR_11->name);
 VAR_10->gpio_chip.label = VAR_11->name;

 VAR_11->id = VAR_13;
 VAR_11->pin_base = VAR_11->base = VAR_11->id * VAR_2;
 VAR_11->npins = VAR_10->gpio_chip.ngpio;
 VAR_11->gc = &VAR_10->gpio_chip;
 VAR_17 = FUNC_5(&VAR_10->gpio_chip, VAR_10);
 if (VAR_17) {
  FUNC_2(VAR_12, "Failed to add gpiochip(%d)!\n", VAR_13);
  return VAR_17;
 }
 FUNC_3(VAR_12, "%s bank added.\n", VAR_11->name);
 if (FUNC_11(VAR_9, 0, &VAR_15) > 0) {
  VAR_16 = VAR_15.start;
  FUNC_8(&VAR_10->gpio_chip, &VAR_5,
          VAR_16, VAR_4);
 }

 if (VAR_7->irqmux_base || VAR_16 > 0) {
  VAR_17 = FUNC_6(&VAR_10->gpio_chip, &VAR_5,
        0, VAR_3,
        VAR_1);
  if (VAR_17) {
   FUNC_7(&VAR_10->gpio_chip);
   FUNC_3(VAR_12, "could not add irqchip\n");
   return VAR_17;
  }
 } else {
  FUNC_3(VAR_12, "No IRQ support for %pOF bank\n", VAR_9);
 }

 return 0;
}
