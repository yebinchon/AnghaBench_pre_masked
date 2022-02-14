
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {int dummy; } ;
struct TYPE_2__ {int gpio_m; int * pins; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int ) ;
 struct mtk_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
       struct pinctrl_gpio_range *VAR_2,
       unsigned int VAR_3)
{
 struct mtk_pinctrl *VAR_4 = FUNC_1(VAR_1);
 const struct mtk_pin_desc *VAR_5;

 VAR_5 = (const struct mtk_pin_desc *)&VAR_4->soc->pins[VAR_3];

 return FUNC_0(VAR_4, VAR_5, VAR_0,
    VAR_4->soc->gpio_m);
}
