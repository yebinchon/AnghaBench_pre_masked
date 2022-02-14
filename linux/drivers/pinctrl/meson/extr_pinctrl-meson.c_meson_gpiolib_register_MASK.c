
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; int can_sleep; int of_gpio_n_cells; int of_node; int ngpio; int set; int get; int direction_output; int direction_input; int free; int request; int parent; int label; } ;
struct meson_pinctrl {TYPE_1__* data; int dev; TYPE_2__ chip; int of_node; } ;
struct TYPE_3__ {int name; int num_pins; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_2__*,struct meson_pinctrl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct meson_pinctrl *VAR_6)
{
 int VAR_7;

 VAR_6->chip.label = VAR_6->data->name;
 VAR_6->chip.parent = VAR_6->dev;
 VAR_6->chip.request = VAR_1;
 VAR_6->chip.free = VAR_0;
 VAR_6->chip.direction_input = VAR_2;
 VAR_6->chip.direction_output = VAR_3;
 VAR_6->chip.get = VAR_4;
 VAR_6->chip.set = VAR_5;
 VAR_6->chip.base = -1;
 VAR_6->chip.ngpio = VAR_6->data->num_pins;
 VAR_6->chip.can_sleep = 0;
 VAR_6->chip.of_node = VAR_6->of_node;
 VAR_6->chip.of_gpio_n_cells = 2;

 VAR_7 = FUNC_1(&VAR_6->chip, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_6->dev, "can't add gpio chip %s\n",
   VAR_6->data->name);
  return VAR_7;
 }

 return 0;
}
