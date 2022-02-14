
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int of_gpio_n_cells; struct device_node* of_node; int ngpio; int set; int get; int direction_output; int direction_input; int free; int request; int parent; int label; } ;
struct device_node {int dummy; } ;
struct dc_pinmap {int dev; int lock; struct gpio_chip chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gpio_chip*,struct dc_pinmap*) ;
 int FUNC_2 (struct gpio_chip*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dc_pinmap *VAR_8, struct device_node *VAR_9)
{
 struct gpio_chip *VAR_10 = &VAR_8->chip;
 int VAR_11;

 VAR_10->label = VAR_0;
 VAR_10->parent = VAR_8->dev;
 VAR_10->request = VAR_7;
 VAR_10->free = VAR_6;
 VAR_10->direction_input = VAR_2;
 VAR_10->direction_output = VAR_3;
 VAR_10->get = VAR_4;
 VAR_10->set = VAR_5;
 VAR_10->base = -1;
 VAR_10->ngpio = VAR_1;
 VAR_10->of_node = VAR_9;
 VAR_10->of_gpio_n_cells = 2;

 FUNC_4(&VAR_8->lock);

 VAR_11 = FUNC_1(VAR_10, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_10, FUNC_0(VAR_8->dev), 0, 0,
         VAR_1);
 if (VAR_11 < 0) {
  FUNC_3(VAR_10);
  return VAR_11;
 }

 return 0;
}
