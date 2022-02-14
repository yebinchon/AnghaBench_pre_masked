
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* devdata; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {unsigned int dout_offset; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,struct mtk_pinctrl*) ;
 unsigned int FUNC_2 (unsigned int,struct mtk_pinctrl*) ;
 struct mtk_pinctrl* FUNC_3 (struct gpio_chip*) ;
 unsigned int FUNC_4 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_5 (struct mtk_pinctrl*,unsigned int) ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 struct mtk_pinctrl *VAR_5 = FUNC_3(VAR_0);

 VAR_3 = FUNC_4(VAR_5, VAR_1) + VAR_5->devdata->dout_offset;
 VAR_4 = FUNC_0(VAR_1 & 0xf);

 if (VAR_2)
  VAR_3 = FUNC_2(VAR_3, VAR_5);
 else
  VAR_3 = FUNC_1(VAR_3, VAR_5);

 FUNC_6(FUNC_5(VAR_5, VAR_1), VAR_3, VAR_4);
}
