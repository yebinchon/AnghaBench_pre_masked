
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_1__* data; int regmap; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int reg_data; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct sx150x_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_3 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct sx150x_pinctrl *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_3(VAR_3, VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3->regmap, VAR_3->data->reg_data, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return !!(VAR_4 & FUNC_0(VAR_2));
}
