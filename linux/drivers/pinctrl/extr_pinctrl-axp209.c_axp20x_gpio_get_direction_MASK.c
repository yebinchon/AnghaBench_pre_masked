
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct axp20x_pctl {int regmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 struct axp20x_pctl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1,
         unsigned int VAR_2)
{
 struct axp20x_pctl *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_2(VAR_3->regmap, VAR_5, &VAR_4);
 if (VAR_6)
  return VAR_6;






 if ((VAR_4 & VAR_0) > 2)
  return 0;





 return VAR_4 & 2;
}
