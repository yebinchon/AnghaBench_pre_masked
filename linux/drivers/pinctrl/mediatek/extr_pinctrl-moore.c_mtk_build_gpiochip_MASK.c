
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int base; int of_gpio_n_cells; int ngpio; struct device_node* of_node; int set_config; int to_irq; int set; int get; int direction_output; int direction_input; int free; int request; int parent; int label; } ;
struct mtk_pinctrl {int dev; TYPE_1__* soc; struct gpio_chip chip; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int npins; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gpio_chip*,struct mtk_pinctrl*) ;
 int FUNC_2 (struct gpio_chip*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct gpio_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct mtk_pinctrl *VAR_9, struct device_node *VAR_10)
{
 struct gpio_chip *VAR_11 = &VAR_9->chip;
 int VAR_12;

 VAR_11->label = VAR_0;
 VAR_11->parent = VAR_9->dev;
 VAR_11->request = VAR_2;
 VAR_11->free = VAR_1;
 VAR_11->direction_input = VAR_3;
 VAR_11->direction_output = VAR_4;
 VAR_11->get = VAR_5;
 VAR_11->set = VAR_6;
 VAR_11->to_irq = VAR_8,
 VAR_11->set_config = VAR_7,
 VAR_11->base = -1;
 VAR_11->ngpio = VAR_9->soc->npins;
 VAR_11->of_node = VAR_10;
 VAR_11->of_gpio_n_cells = 2;

 VAR_12 = FUNC_1(VAR_11, VAR_9);
 if (VAR_12 < 0)
  return VAR_12;
 if (!FUNC_4(VAR_10, "gpio-ranges", ((void*)0))) {
  VAR_12 = FUNC_2(VAR_11, FUNC_0(VAR_9->dev), 0, 0,
          VAR_11->ngpio);
  if (VAR_12 < 0) {
   FUNC_3(VAR_11);
   return VAR_12;
  }
 }

 return 0;
}
