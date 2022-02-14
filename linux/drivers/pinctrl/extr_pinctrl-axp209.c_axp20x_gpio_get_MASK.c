
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct axp20x_pctl {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {scalar_t__ gpio_status_offset; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct axp20x_pctl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct axp20x_pctl *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->regmap, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return !!(VAR_4 & FUNC_0(VAR_2 + VAR_3->desc->gpio_status_offset));
}
