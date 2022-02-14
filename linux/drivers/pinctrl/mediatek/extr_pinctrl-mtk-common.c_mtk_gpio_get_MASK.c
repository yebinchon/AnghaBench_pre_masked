
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {int regmap1; TYPE_1__* devdata; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {unsigned int din_offset; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct mtk_pinctrl* FUNC_1 (struct gpio_chip*) ;
 unsigned int FUNC_2 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_3 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4 = 0;
 struct mtk_pinctrl *VAR_5 = FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_5, VAR_1) +
  VAR_5->devdata->din_offset;

 VAR_3 = FUNC_0(VAR_1 & 0xf);
 FUNC_3(VAR_5->regmap1, VAR_2, &VAR_4);
 return !!(VAR_4 & VAR_3);
}
