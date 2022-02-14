
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gpio_irq_chip {int num_parents; int * parents; int handler; int default_type; int parent_handler; TYPE_2__* chip; } ;
struct gpio_chip {int base; unsigned int ngpio; struct gpio_irq_chip irq; int init_valid_mask; int of_node; int owner; TYPE_3__* parent; int label; } ;
struct TYPE_7__ {char* name; int irq_release_resources; int irq_request_resources; int irq_set_wake; int irq_set_type; int irq_ack; int irq_unmask; int irq_mask; int irq_enable; } ;
struct msm_pinctrl {struct gpio_chip chip; TYPE_3__* dev; int irq; TYPE_2__ irq_chip; TYPE_1__* soc; } ;
struct TYPE_8__ {int of_node; } ;
struct TYPE_6__ {unsigned int ngpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*,int,int,int ) ;
 int FUNC_4 (struct gpio_chip*,struct msm_pinctrl*) ;
 int FUNC_5 (struct gpio_chip*,int ,int ,int ,unsigned int) ;
 int FUNC_6 (struct gpio_chip*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (struct msm_pinctrl*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(struct msm_pinctrl *VAR_17)
{
 struct gpio_chip *VAR_18;
 struct gpio_irq_chip *VAR_19;
 int VAR_20;
 unsigned VAR_21 = VAR_17->soc->ngpios;

 if (FUNC_0(VAR_21 > VAR_4))
  return -VAR_0;

 VAR_18 = &VAR_17->chip;
 VAR_18->base = -1;
 VAR_18->ngpio = VAR_21;
 VAR_18->label = FUNC_2(VAR_17->dev);
 VAR_18->parent = VAR_17->dev;
 VAR_18->owner = VAR_5;
 VAR_18->of_node = VAR_17->dev->of_node;
 if (FUNC_7(VAR_17))
  VAR_18->init_valid_mask = VAR_7;

 VAR_17->irq_chip.name = "msmgpio";
 VAR_17->irq_chip.irq_enable = VAR_9;
 VAR_17->irq_chip.irq_mask = VAR_11;
 VAR_17->irq_chip.irq_unmask = VAR_16;
 VAR_17->irq_chip.irq_ack = VAR_8;
 VAR_17->irq_chip.irq_set_type = VAR_14;
 VAR_17->irq_chip.irq_set_wake = VAR_15;
 VAR_17->irq_chip.irq_request_resources = VAR_13;
 VAR_17->irq_chip.irq_release_resources = VAR_12;

 VAR_19 = &VAR_18->irq;
 VAR_19->chip = &VAR_17->irq_chip;
 VAR_19->parent_handler = VAR_10;
 VAR_19->num_parents = 1;
 VAR_19->parents = FUNC_3(VAR_17->dev, 1, sizeof(*VAR_19->parents),
         VAR_2);
 if (!VAR_19->parents)
  return -VAR_1;
 VAR_19->default_type = VAR_3;
 VAR_19->handler = VAR_6;
 VAR_19->parents[0] = VAR_17->irq;

 VAR_20 = FUNC_4(&VAR_17->chip, VAR_17);
 if (VAR_20) {
  FUNC_1(VAR_17->dev, "Failed register gpiochip\n");
  return VAR_20;
 }
 if (!FUNC_8(VAR_17->dev->of_node, "gpio-ranges")) {
  VAR_20 = FUNC_5(&VAR_17->chip,
   FUNC_2(VAR_17->dev), 0, 0, VAR_18->ngpio);
  if (VAR_20) {
   FUNC_1(VAR_17->dev, "Failed to add pin range\n");
   FUNC_6(&VAR_17->chip);
   return VAR_20;
  }
 }

 return 0;
}
