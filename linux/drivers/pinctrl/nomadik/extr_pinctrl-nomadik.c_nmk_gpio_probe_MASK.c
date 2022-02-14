
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; int id; } ;
struct gpio_chip {int can_sleep; struct device_node* of_node; scalar_t__ ngpio; scalar_t__ base; int owner; int dbg_show; int set; int direction_output; int get; int direction_input; int get_direction; int free; int request; } ;
struct irq_chip {int name; int flags; int irq_shutdown; int irq_startup; int irq_set_wake; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct nmk_gpio_chip {int parent_irq; int latent_parent_irq; int sleepmode; scalar_t__ addr; struct gpio_chip chip; int clk; int lowemi; struct irq_chip irqchip; int lock; int bank; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nmk_gpio_chip*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct nmk_gpio_chip*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_6 (struct gpio_chip*,struct nmk_gpio_chip*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct gpio_chip*,struct irq_chip*,int ,int ,int ) ;
 int FUNC_8 (struct gpio_chip*) ;
 int FUNC_9 (struct gpio_chip*,struct irq_chip*,int,int ) ;
 int VAR_8 ;
 int FUNC_10 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct nmk_gpio_chip* FUNC_11 (struct device_node*,struct platform_device*) ;
 int VAR_23 ;
 int FUNC_12 (struct device_node*,char*) ;
 int FUNC_13 (struct platform_device*,int) ;
 int FUNC_14 (struct platform_device*,struct nmk_gpio_chip*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_24)
{
 struct device_node *VAR_25 = VAR_24->dev.of_node;
 struct nmk_gpio_chip *VAR_26;
 struct gpio_chip *VAR_27;
 struct irq_chip *VAR_28;
 int VAR_29;
 bool VAR_30;
 int VAR_31;
 int VAR_32;

 VAR_26 = FUNC_11(VAR_25, VAR_24);
 if (FUNC_0(VAR_26)) {
  FUNC_4(&VAR_24->dev, "could not populate nmk chip struct\n");
  return FUNC_1(VAR_26);
 }

 VAR_30 =
  FUNC_12(VAR_25, "st,supports-sleepmode");


 VAR_24->id = VAR_26->bank;

 VAR_31 = FUNC_13(VAR_24, 0);
 if (VAR_31 < 0)
  return VAR_31;


 VAR_29 = FUNC_13(VAR_24, 1);





 VAR_26->parent_irq = VAR_31;
 VAR_26->latent_parent_irq = VAR_29;
 VAR_26->sleepmode = VAR_30;
 FUNC_16(&VAR_26->lock);

 VAR_27 = &VAR_26->chip;
 VAR_27->request = VAR_7;
 VAR_27->free = VAR_6;
 VAR_27->get_direction = VAR_10;
 VAR_27->direction_input = VAR_21;
 VAR_27->get = VAR_11;
 VAR_27->direction_output = VAR_22;
 VAR_27->set = VAR_23;
 VAR_27->dbg_show = VAR_9;
 VAR_27->can_sleep = 0;
 VAR_27->owner = VAR_5;

 VAR_28 = &VAR_26->irqchip;
 VAR_28->irq_ack = VAR_12;
 VAR_28->irq_mask = VAR_14;
 VAR_28->irq_unmask = VAR_19;
 VAR_28->irq_set_type = VAR_15;
 VAR_28->irq_set_wake = VAR_16;
 VAR_28->irq_startup = VAR_18;
 VAR_28->irq_shutdown = VAR_17;
 VAR_28->flags = VAR_2;
 VAR_28->name = FUNC_10(VAR_1, "nmk%u-%u-%u",
      VAR_24->id,
      VAR_27->base,
      VAR_27->base + VAR_27->ngpio - 1);

 FUNC_3(VAR_26->clk);
 VAR_26->lowemi = FUNC_15(VAR_26->addr + VAR_4);
 FUNC_2(VAR_26->clk);
 VAR_27->of_node = VAR_25;

 VAR_32 = FUNC_6(VAR_27, VAR_26);
 if (VAR_32)
  return VAR_32;

 FUNC_14(VAR_24, VAR_26);






 VAR_32 = FUNC_7(VAR_27,
       VAR_28,
       0,
       VAR_8,
       VAR_3);
 if (VAR_32) {
  FUNC_4(&VAR_24->dev, "could not add irqchip\n");
  FUNC_8(&VAR_26->chip);
  return -VAR_0;
 }

 FUNC_9(VAR_27,
         VAR_28,
         VAR_26->parent_irq,
         VAR_13);
 if (VAR_26->latent_parent_irq > 0)
  FUNC_9(VAR_27,
          VAR_28,
          VAR_26->latent_parent_irq,
          VAR_20);

 FUNC_5(&VAR_24->dev, "at address %p\n", VAR_26->addr);

 return 0;
}
