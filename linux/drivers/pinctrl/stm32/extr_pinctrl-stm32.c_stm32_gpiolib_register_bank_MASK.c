
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_pinctrl {size_t nbanks; int domain; struct stm32_gpio_bank* banks; int pctl_dev; struct device* dev; } ;
struct TYPE_3__ {int base; int ngpio; int label; struct device* parent; struct device_node* of_node; } ;
struct pinctrl_gpio_range {int id; int pin_base; int base; int npins; TYPE_1__* gc; int name; } ;
struct stm32_gpio_bank {int bank_nr; int bank_ioport_nr; TYPE_1__ gpio_chip; int domain; int fwnode; int lock; struct pinctrl_gpio_range range; struct reset_control* clk; struct reset_control* base; } ;
struct resource {int dummy; } ;
struct reset_control {int dummy; } ;
struct of_phandle_args {int* args; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct reset_control* FUNC_5 (struct device*,struct resource*) ;
 int FUNC_6 (TYPE_1__*,struct stm32_gpio_bank*) ;
 int FUNC_7 (int ,int ,int ,int ,int *,struct stm32_gpio_bank*) ;
 scalar_t__ FUNC_8 (struct device_node*,int ,struct resource*) ;
 struct reset_control* FUNC_9 (struct device_node*,int *) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_12 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_13 (struct device_node*,char*,int*) ;
 struct reset_control* FUNC_14 (struct device_node*,int *) ;
 int FUNC_15 (int ,struct pinctrl_gpio_range*) ;
 int FUNC_16 (struct reset_control*) ;
 int FUNC_17 (int *) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_18(struct stm32_pinctrl *VAR_5,
 struct device_node *VAR_6)
{
 struct stm32_gpio_bank *VAR_7 = &VAR_5->banks[VAR_5->nbanks];
 int VAR_8;
 struct pinctrl_gpio_range *VAR_9 = &VAR_7->range;
 struct of_phandle_args VAR_10;
 struct device *VAR_11 = VAR_5->dev;
 struct resource VAR_12;
 struct reset_control *VAR_13;
 int VAR_14 = VAR_2;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_14(VAR_6, ((void*)0));
 if (!FUNC_0(VAR_13))
  FUNC_16(VAR_13);

 if (FUNC_8(VAR_6, 0, &VAR_12))
  return -VAR_0;

 VAR_7->base = FUNC_5(VAR_11, &VAR_12);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_9(VAR_6, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_3(VAR_11, "failed to get clk (%ld)\n", FUNC_1(VAR_7->clk));
  return FUNC_1(VAR_7->clk);
 }

 VAR_16 = FUNC_2(VAR_7->clk);
 if (VAR_16) {
  FUNC_3(VAR_11, "failed to prepare clk (%d)\n", VAR_16);
  return VAR_16;
 }

 VAR_7->gpio_chip = VAR_4;

 FUNC_12(VAR_6, "st,bank-name", &VAR_7->gpio_chip.label);

 if (!FUNC_11(VAR_6, "gpio-ranges", 3, 0, &VAR_10)) {
  VAR_15 = VAR_10.args[1] / VAR_2;
  VAR_7->gpio_chip.base = VAR_10.args[1];
 } else {
  VAR_15 = VAR_5->nbanks;
  VAR_7->gpio_chip.base = VAR_15 * VAR_2;
  VAR_9->name = VAR_7->gpio_chip.label;
  VAR_9->id = VAR_15;
  VAR_9->pin_base = VAR_9->id * VAR_2;
  VAR_9->base = VAR_9->id * VAR_2;
  VAR_9->npins = VAR_14;
  VAR_9->gc = &VAR_7->gpio_chip;
  FUNC_15(VAR_5->pctl_dev,
           &VAR_5->banks[VAR_15].range);
 }

 if (FUNC_13(VAR_6, "st,bank-ioport", &VAR_8))
  VAR_8 = VAR_15;

 VAR_7->gpio_chip.base = VAR_15 * VAR_2;

 VAR_7->gpio_chip.ngpio = VAR_14;
 VAR_7->gpio_chip.of_node = VAR_6;
 VAR_7->gpio_chip.parent = VAR_11;
 VAR_7->bank_nr = VAR_15;
 VAR_7->bank_ioport_nr = VAR_8;
 FUNC_17(&VAR_7->lock);


 VAR_7->fwnode = FUNC_10(VAR_6);

 VAR_7->domain = FUNC_7(VAR_5->domain, 0,
     VAR_1, VAR_7->fwnode,
     &VAR_3, VAR_7);

 if (!VAR_7->domain)
  return -VAR_0;

 VAR_16 = FUNC_6(&VAR_7->gpio_chip, VAR_7);
 if (VAR_16) {
  FUNC_3(VAR_11, "Failed to add gpiochip(%d)!\n", VAR_15);
  return VAR_16;
 }

 FUNC_4(VAR_11, "%s bank added\n", VAR_7->gpio_chip.label);
 return 0;
}
