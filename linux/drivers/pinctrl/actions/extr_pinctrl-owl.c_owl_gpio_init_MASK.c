
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gpio_irq_chip {int * parents; int * map; int num_parents; struct owl_pinctrl* parent_handler_data; int parent_handler; int default_type; int handler; TYPE_2__* chip; } ;
struct gpio_chip {int base; int ngpio; struct gpio_irq_chip irq; TYPE_1__* of_node; int owner; TYPE_4__* parent; int label; } ;
struct TYPE_8__ {int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; int name; } ;
struct owl_pinctrl {TYPE_4__* dev; struct gpio_chip chip; TYPE_3__* soc; int * irq; int num_irq; TYPE_2__ irq_chip; } ;
struct owl_gpio_port {int pins; } ;
struct TYPE_10__ {TYPE_1__* of_node; } ;
struct TYPE_9__ {int nports; struct owl_gpio_port* ports; int ngpios; } ;
struct TYPE_7__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (TYPE_4__*,int ,int,int ) ;
 int FUNC_3 (struct gpio_chip*,struct owl_pinctrl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct owl_pinctrl *VAR_10)
{
 struct gpio_chip *VAR_11;
 struct gpio_irq_chip *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_11 = &VAR_10->chip;
 VAR_11->base = -1;
 VAR_11->ngpio = VAR_10->soc->ngpios;
 VAR_11->label = FUNC_1(VAR_10->dev);
 VAR_11->parent = VAR_10->dev;
 VAR_11->owner = VAR_3;
 VAR_11->of_node = VAR_10->dev->of_node;

 VAR_10->irq_chip.name = VAR_11->of_node->name;
 VAR_10->irq_chip.irq_ack = VAR_5;
 VAR_10->irq_chip.irq_mask = VAR_7;
 VAR_10->irq_chip.irq_unmask = VAR_9;
 VAR_10->irq_chip.irq_set_type = VAR_8;

 VAR_12 = &VAR_11->irq;
 VAR_12->chip = &VAR_10->irq_chip;
 VAR_12->handler = VAR_4;
 VAR_12->default_type = VAR_2;
 VAR_12->parent_handler = VAR_6;
 VAR_12->parent_handler_data = VAR_10;
 VAR_12->num_parents = VAR_10->num_irq;
 VAR_12->parents = VAR_10->irq;

 VAR_12->map = FUNC_2(VAR_10->dev, VAR_11->ngpio,
    sizeof(*VAR_12->map), VAR_1);
 if (!VAR_12->map)
  return -VAR_0;

 for (VAR_14 = 0, VAR_16 = 0; VAR_14 < VAR_10->soc->nports; VAR_14++) {
  const struct owl_gpio_port *VAR_17 = &VAR_10->soc->ports[VAR_14];

  for (VAR_15 = 0; VAR_15 < VAR_17->pins; VAR_15++)
   VAR_12->map[VAR_16 + VAR_15] = VAR_12->parents[VAR_14];

  VAR_16 += VAR_17->pins;
 }

 VAR_13 = FUNC_3(&VAR_10->chip, VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_10->dev, "failed to register gpiochip\n");
  return VAR_13;
 }

 return 0;
}
