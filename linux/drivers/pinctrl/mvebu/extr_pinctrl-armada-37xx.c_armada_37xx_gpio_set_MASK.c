
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct armada_37xx_pinctrl {int regmap; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int*,unsigned int*) ;
 struct armada_37xx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2,
     int VAR_3)
{
 struct armada_37xx_pinctrl *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5 = VAR_0;
 unsigned int VAR_6, VAR_7;

 FUNC_1(&VAR_5, &VAR_2);
 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = VAR_3 ? VAR_6 : 0;

 FUNC_3(VAR_4->regmap, VAR_5, VAR_6, VAR_7);
}
