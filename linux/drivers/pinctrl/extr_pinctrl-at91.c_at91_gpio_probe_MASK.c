
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pinctrl_gpio_range {int id; int pin_base; int base; int npins; struct gpio_chip* gc; int name; } ;
struct gpio_chip {int base; int ngpio; char const* const* names; int label; int owner; TYPE_2__* parent; struct device_node* of_node; } ;
struct device_node {int dummy; } ;
struct at91_pinctrl_mux_ops {int dummy; } ;
struct at91_gpio_chip {int pioc_virq; int pioc_idx; int clock; int regbase; struct pinctrl_gpio_range range; struct gpio_chip chip; struct at91_pinctrl_mux_ops* ops; } ;
struct TYPE_10__ {scalar_t__ data; } ;


 int FUNC_0 (struct at91_gpio_chip**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct platform_device*,struct at91_gpio_chip*) ;
 int VAR_6 ;
 struct gpio_chip VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (TYPE_2__*,struct resource*) ;
 char** FUNC_12 (TYPE_2__*,int,int,int ) ;
 struct at91_gpio_chip* FUNC_13 (TYPE_2__*,int,int ) ;
 int VAR_8 ;
 struct at91_gpio_chip** VAR_9 ;
 int FUNC_14 (struct gpio_chip*,struct at91_gpio_chip*) ;
 int FUNC_15 (struct gpio_chip*) ;
 char* FUNC_16 (int ,char*,int,int) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (struct device_node*,char*) ;
 TYPE_1__* FUNC_19 (int ,TYPE_2__*) ;
 int FUNC_20 (struct device_node*,char*,int*) ;
 int FUNC_21 (struct platform_device*,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev.of_node;
 struct resource *VAR_12;
 struct at91_gpio_chip *VAR_13 = ((void*)0);
 struct gpio_chip *VAR_14;
 struct pinctrl_gpio_range *VAR_15;
 int VAR_16 = 0;
 int VAR_17, VAR_18;
 int VAR_19 = FUNC_18(VAR_11, "gpio");
 uint32_t VAR_20;
 char **VAR_21;

 FUNC_1(VAR_19 >= FUNC_0(VAR_9));
 if (VAR_9[VAR_19]) {
  VAR_16 = -VAR_0;
  goto err;
 }

 VAR_17 = FUNC_21(VAR_10, 0);
 if (VAR_17 < 0) {
  VAR_16 = VAR_17;
  goto err;
 }

 VAR_13 = FUNC_13(&VAR_10->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_12 = FUNC_22(VAR_10, VAR_3, 0);
 VAR_13->regbase = FUNC_11(&VAR_10->dev, VAR_12);
 if (FUNC_2(VAR_13->regbase)) {
  VAR_16 = FUNC_3(VAR_13->regbase);
  goto err;
 }

 VAR_13->ops = (struct at91_pinctrl_mux_ops *)
  FUNC_19(VAR_6, &VAR_10->dev)->data;
 VAR_13->pioc_virq = VAR_17;
 VAR_13->pioc_idx = VAR_19;

 VAR_13->clock = FUNC_10(&VAR_10->dev, ((void*)0));
 if (FUNC_2(VAR_13->clock)) {
  FUNC_7(&VAR_10->dev, "failed to get clock, ignoring.\n");
  VAR_16 = FUNC_3(VAR_13->clock);
  goto err;
 }

 VAR_16 = FUNC_6(VAR_13->clock);
 if (VAR_16) {
  FUNC_7(&VAR_10->dev, "failed to prepare and enable clock, ignoring.\n");
  goto clk_enable_err;
 }

 VAR_13->chip = VAR_7;

 VAR_14 = &VAR_13->chip;
 VAR_14->of_node = VAR_11;
 VAR_14->label = FUNC_9(&VAR_10->dev);
 VAR_14->parent = &VAR_10->dev;
 VAR_14->owner = VAR_5;
 VAR_14->base = VAR_19 * VAR_4;

 if (!FUNC_20(VAR_11, "#gpio-lines", &VAR_20)) {
  if (VAR_20 >= VAR_4)
   FUNC_23("at91_gpio.%d, gpio-nb >= %d failback to %d\n",
          VAR_19, VAR_4, VAR_4);
  else
   VAR_14->ngpio = VAR_20;
 }

 VAR_21 = FUNC_12(&VAR_10->dev, VAR_14->ngpio, sizeof(char *),
        VAR_2);

 if (!VAR_21) {
  VAR_16 = -VAR_1;
  goto clk_enable_err;
 }

 for (VAR_18 = 0; VAR_18 < VAR_14->ngpio; VAR_18++)
  VAR_21[VAR_18] = FUNC_16(VAR_2, "pio%c%d", VAR_19 + 'A', VAR_18);

 VAR_14->names = (const char *const *)VAR_21;

 VAR_15 = &VAR_13->range;
 VAR_15->name = VAR_14->label;
 VAR_15->id = VAR_19;
 VAR_15->pin_base = VAR_15->base = VAR_15->id * VAR_4;

 VAR_15->npins = VAR_14->ngpio;
 VAR_15->gc = VAR_14;

 VAR_16 = FUNC_14(VAR_14, VAR_13);
 if (VAR_16)
  goto gpiochip_add_err;

 VAR_9[VAR_19] = VAR_13;
 VAR_8 = FUNC_17(VAR_8, VAR_19 + 1);

 VAR_16 = FUNC_4(VAR_10, VAR_13);
 if (VAR_16)
  goto irq_setup_err;

 FUNC_8(&VAR_10->dev, "at address %p\n", VAR_13->regbase);

 return 0;

irq_setup_err:
 FUNC_15(VAR_14);
gpiochip_add_err:
clk_enable_err:
 FUNC_5(VAR_13->clock);
err:
 FUNC_7(&VAR_10->dev, "Failure %i for GPIO %i\n", VAR_16, VAR_19);

 return VAR_16;
}
