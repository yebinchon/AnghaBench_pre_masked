
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
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int*) ;
 int FUNC_1 (struct mtk_pinctrl*,unsigned long,unsigned int*,struct gpio_chip**) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned long VAR_2)
{
 struct mtk_pinctrl *VAR_3 = (struct mtk_pinctrl *)VAR_1;
 const struct mtk_pin_desc *VAR_4;
 struct gpio_chip *VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_2, &VAR_6, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_4 = (const struct mtk_pin_desc *)&VAR_3->soc->pins[VAR_6];

 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 return !!VAR_7;
}
