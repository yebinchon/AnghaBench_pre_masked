
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int base; int of_gpio_n_cells; struct device_node* of_node; int ngpio; int set_config; int to_irq; int set; int get; int direction_output; int direction_input; int get_direction; int free; int request; int parent; int label; } ;
struct mtk_pinctrl {TYPE_1__* soc; int dev; struct gpio_chip chip; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int npins; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_chip*,struct mtk_pinctrl*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_1(struct mtk_pinctrl *VAR_10, struct device_node *VAR_11)
{
 struct gpio_chip *VAR_12 = &VAR_10->chip;
 int VAR_13;

 VAR_12->label = VAR_0;
 VAR_12->parent = VAR_10->dev;
 VAR_12->request = VAR_2;
 VAR_12->free = VAR_1;
 VAR_12->get_direction = VAR_6;
 VAR_12->direction_input = VAR_3;
 VAR_12->direction_output = VAR_4;
 VAR_12->get = VAR_5;
 VAR_12->set = VAR_7;
 VAR_12->to_irq = VAR_9,
 VAR_12->set_config = VAR_8,
 VAR_12->base = -1;
 VAR_12->ngpio = VAR_10->soc->npins;
 VAR_12->of_node = VAR_11;
 VAR_12->of_gpio_n_cells = 2;

 VAR_13 = FUNC_0(VAR_12, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
