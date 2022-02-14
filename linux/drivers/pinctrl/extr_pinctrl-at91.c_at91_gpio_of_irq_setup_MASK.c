
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct irq_data {int dummy; } ;
struct irq_chip {char* name; int irq_set_type; int irq_set_wake; int irq_unmask; void* irq_mask; void* irq_disable; int irq_ack; } ;
struct gpio_chip {int dummy; } ;
struct at91_gpio_chip {struct at91_gpio_chip* next; int pioc_virq; int chip; int pioc_idx; scalar_t__ regbase; TYPE_1__* ops; int pioc_hwirq; } ;
struct TYPE_2__ {int irq_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 struct irq_chip* FUNC_1 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct at91_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *,struct irq_chip*,int ,int ,int ) ;
 int FUNC_4 (int *,struct irq_chip*,int ,int ) ;
 int VAR_10 ;
 struct gpio_chip* FUNC_5 (int ) ;
 struct irq_data* FUNC_6 (int ) ;
 int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_11,
      struct at91_gpio_chip *VAR_12)
{
 struct gpio_chip *VAR_13 = ((void*)0);
 struct at91_gpio_chip *VAR_14 = ((void*)0);
 struct irq_data *VAR_15 = FUNC_6(VAR_12->pioc_virq);
 struct irq_chip *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = FUNC_1(&VAR_11->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_12->pioc_hwirq = FUNC_7(VAR_15);

 VAR_16->name = "GPIO";
 VAR_16->irq_ack = VAR_5;
 VAR_16->irq_disable = VAR_7;
 VAR_16->irq_mask = VAR_7;
 VAR_16->irq_unmask = VAR_9;
 VAR_16->irq_set_wake = VAR_8,
 VAR_16->irq_set_type = VAR_12->ops->irq_type;


 FUNC_8(~0, VAR_12->regbase + VAR_4);






 VAR_17 = FUNC_3(&VAR_12->chip,
       VAR_16,
       0,
       VAR_10,
       VAR_3);
 if (VAR_17) {
  FUNC_0(&VAR_11->dev, "at91_gpio.%d: Couldn't add irqchip to gpiochip.\n",
   VAR_12->pioc_idx);
  return VAR_17;
 }





 VAR_13 = FUNC_5(VAR_12->pioc_virq);
 if (!VAR_13) {

  FUNC_4(&VAR_12->chip,
          VAR_16,
          VAR_12->pioc_virq,
          VAR_6);
  return 0;
 }

 VAR_14 = FUNC_2(VAR_13);


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  if (VAR_14->next) {
   VAR_14 = VAR_14->next;
  } else {
   VAR_14->next = VAR_12;
   return 0;
  }
 }

 return -VAR_0;
}
