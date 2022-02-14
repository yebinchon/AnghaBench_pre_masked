
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pistachio_pinctrl {unsigned int nbanks; struct pistachio_gpio_bank* gpio_banks; TYPE_6__* dev; scalar_t__ base; } ;
struct TYPE_8__ {struct device_node* of_node; TYPE_6__* parent; } ;
struct pistachio_gpio_bank {TYPE_1__ gpio_chip; int npins; int pin_base; int irq_chip; scalar_t__ base; struct pistachio_pinctrl* pctl; } ;
struct device_node {int dummy; } ;
typedef int child_name ;
struct TYPE_9__ {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,char*,unsigned int,...) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_1__*,struct pistachio_gpio_bank*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct device_node*,int ) ;
 int FUNC_9 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*) ;
 int VAR_3 ;
 int FUNC_12 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_13(struct pistachio_pinctrl *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev->of_node;
 struct pistachio_gpio_bank *VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4->nbanks; VAR_7++) {
  char VAR_10[sizeof("gpioXX")];
  struct device_node *VAR_11;

  FUNC_12(VAR_10, sizeof(VAR_10), "gpio%d", VAR_7);
  VAR_11 = FUNC_10(VAR_5, VAR_10);
  if (!VAR_11) {
   FUNC_1(VAR_4->dev, "No node for bank %u\n", VAR_7);
   VAR_9 = -VAR_0;
   goto err;
  }

  if (!FUNC_9(VAR_11, "gpio-controller", ((void*)0))) {
   FUNC_1(VAR_4->dev,
    "No gpio-controller property for bank %u\n", VAR_7);
   FUNC_11(VAR_11);
   VAR_9 = -VAR_0;
   goto err;
  }

  VAR_8 = FUNC_8(VAR_11, 0);
  if (VAR_8 < 0) {
   FUNC_1(VAR_4->dev, "No IRQ for bank %u: %d\n", VAR_7, VAR_8);
   FUNC_11(VAR_11);
   VAR_9 = VAR_8;
   goto err;
  }

  VAR_6 = &VAR_4->gpio_banks[VAR_7];
  VAR_6->pctl = VAR_4;
  VAR_6->base = VAR_4->base + FUNC_0(VAR_7);

  VAR_6->gpio_chip.parent = VAR_4->dev;
  VAR_6->gpio_chip.of_node = VAR_11;
  VAR_9 = FUNC_3(&VAR_6->gpio_chip, VAR_6);
  if (VAR_9 < 0) {
   FUNC_1(VAR_4->dev, "Failed to add GPIO chip %u: %d\n",
    VAR_7, VAR_9);
   goto err;
  }

  VAR_9 = FUNC_5(&VAR_6->gpio_chip, &VAR_6->irq_chip,
        0, VAR_2, VAR_1);
  if (VAR_9 < 0) {
   FUNC_1(VAR_4->dev, "Failed to add IRQ chip %u: %d\n",
    VAR_7, VAR_9);
   FUNC_6(&VAR_6->gpio_chip);
   goto err;
  }
  FUNC_7(&VAR_6->gpio_chip, &VAR_6->irq_chip,
          VAR_8, VAR_3);

  VAR_9 = FUNC_4(&VAR_6->gpio_chip,
          FUNC_2(VAR_4->dev), 0,
          VAR_6->pin_base, VAR_6->npins);
  if (VAR_9 < 0) {
   FUNC_1(VAR_4->dev, "Failed to add GPIO range %u: %d\n",
    VAR_7, VAR_9);
   FUNC_6(&VAR_6->gpio_chip);
   goto err;
  }
 }

 return 0;
err:
 for (; VAR_7 > 0; VAR_7--) {
  VAR_6 = &VAR_4->gpio_banks[VAR_7 - 1];
  FUNC_6(&VAR_6->gpio_chip);
 }
 return VAR_9;
}
