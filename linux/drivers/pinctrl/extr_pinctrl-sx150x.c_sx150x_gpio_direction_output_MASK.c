
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_1__* data; int regmap; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int reg_dir; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sx150x_pinctrl*,unsigned int,int) ;
 struct sx150x_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct sx150x_pinctrl*,int) ;
 scalar_t__ FUNC_5 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0,
     unsigned int VAR_1, int VAR_2)
{
 struct sx150x_pinctrl *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if (FUNC_5(VAR_3, VAR_1))
  return FUNC_4(VAR_3, VAR_2);

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_3(VAR_3->regmap,
     VAR_3->data->reg_dir,
     FUNC_0(VAR_1), 0);
}
