
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_1__* data; int regmap; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int reg_data; } ;


 struct sx150x_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0,
         unsigned long *VAR_1,
         unsigned long *VAR_2)
{
 struct sx150x_pinctrl *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3->regmap, VAR_3->data->reg_data, *VAR_1, *VAR_2);
}
