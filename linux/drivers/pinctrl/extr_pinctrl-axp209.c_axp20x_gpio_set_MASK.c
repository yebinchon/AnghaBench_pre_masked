
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct axp20x_pctl {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 struct axp20x_pctl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_3, unsigned int VAR_4,
       int VAR_5)
{
 struct axp20x_pctl *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  return;

 FUNC_2(VAR_6->regmap, VAR_7,
      VAR_0,
      VAR_5 ? VAR_1 :
      VAR_2);
}
