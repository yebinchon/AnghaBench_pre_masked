
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_backlight {int gpiod; scalar_t__ def_value; TYPE_1__* dev; } ;
struct device_node {int phandle; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_backlight *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;


 if (!VAR_3 || !VAR_3->phandle)
  return VAR_2->def_value ? VAR_1 : VAR_0;


 if (FUNC_0(VAR_2->gpiod) == 0)
  return VAR_0;

 return VAR_1;
}
