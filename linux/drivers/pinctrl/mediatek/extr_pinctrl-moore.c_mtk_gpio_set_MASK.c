
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int * pins; } ;


 int VAR_0 ;
 struct mtk_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct mtk_pinctrl *VAR_4 = FUNC_0(VAR_1);
 const struct mtk_pin_desc *VAR_5;

 VAR_5 = (const struct mtk_pin_desc *)&VAR_4->soc->pins[VAR_2];

 FUNC_1(VAR_4, VAR_5, VAR_0, !!VAR_3);
}
