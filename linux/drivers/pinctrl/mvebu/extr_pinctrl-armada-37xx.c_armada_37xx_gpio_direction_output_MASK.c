
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct armada_37xx_pinctrl {int regmap; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int*,unsigned int*) ;
 struct armada_37xx_pinctrl* FUNC_2 (struct gpio_chip*) ;
 unsigned int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2,
          unsigned int VAR_3, int VAR_4)
{
 struct armada_37xx_pinctrl *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6 = VAR_0;
 unsigned int VAR_7, VAR_8, VAR_9;

 FUNC_1(&VAR_6, &VAR_3);
 VAR_7 = FUNC_0(VAR_3);

 VAR_9 = FUNC_3(VAR_5->regmap, VAR_6, VAR_7, VAR_7);

 if (VAR_9)
  return VAR_9;

 VAR_6 = VAR_1;
 VAR_8 = VAR_4 ? VAR_7 : 0;
 FUNC_3(VAR_5->regmap, VAR_6, VAR_7, VAR_8);

 return 0;
}
