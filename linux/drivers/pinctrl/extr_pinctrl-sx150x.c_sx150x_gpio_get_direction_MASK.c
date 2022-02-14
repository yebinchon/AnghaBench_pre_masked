
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_1__* data; int regmap; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int reg_dir; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct sx150x_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_3 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0,
          unsigned int VAR_1)
{
 struct sx150x_pinctrl *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 if (FUNC_3(VAR_2, VAR_1))
  return 0;

 VAR_4 = FUNC_2(VAR_2->regmap, VAR_2->data->reg_dir, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return !!(VAR_3 & FUNC_0(VAR_1));
}
