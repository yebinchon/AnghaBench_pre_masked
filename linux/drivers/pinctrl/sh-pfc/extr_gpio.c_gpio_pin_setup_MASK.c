
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int ngpio; scalar_t__ base; int owner; int parent; int label; int to_irq; int set; int direction_output; int get; int direction_input; int free; int request; } ;
struct sh_pfc_chip {int * pins; struct gpio_chip gpio_chip; struct sh_pfc* pfc; } ;
struct sh_pfc {int nr_gpio_pins; int dev; TYPE_1__* info; } ;
struct TYPE_2__ {int name; int nr_pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sh_pfc_chip*) ;

__attribute__((used)) static int FUNC_2(struct sh_pfc_chip *VAR_10)
{
 struct sh_pfc *VAR_11 = VAR_10->pfc;
 struct gpio_chip *VAR_12 = &VAR_10->gpio_chip;
 int VAR_13;

 VAR_10->pins = FUNC_0(VAR_11->dev,
      VAR_11->info->nr_pins, sizeof(*VAR_10->pins),
      VAR_1);
 if (VAR_10->pins == ((void*)0))
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12->request = VAR_7;
 VAR_12->free = VAR_5;
 VAR_12->direction_input = VAR_3;
 VAR_12->get = VAR_6;
 VAR_12->direction_output = VAR_4;
 VAR_12->set = VAR_8;
 VAR_12->to_irq = VAR_9;

 VAR_12->label = VAR_11->info->name;
 VAR_12->parent = VAR_11->dev;
 VAR_12->owner = VAR_2;
 VAR_12->base = 0;
 VAR_12->ngpio = VAR_11->nr_gpio_pins;

 return 0;
}
