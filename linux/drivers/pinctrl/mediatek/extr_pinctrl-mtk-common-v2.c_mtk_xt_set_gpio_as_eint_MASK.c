
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* soc; } ;
struct TYPE_4__ {int eint_m; } ;
struct mtk_pin_desc {TYPE_2__ eint; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int ) ;
 int FUNC_1 (struct mtk_pinctrl*,unsigned long,unsigned int*,struct gpio_chip**) ;

__attribute__((used)) static int FUNC_2(void *VAR_6, unsigned long VAR_7)
{
 struct mtk_pinctrl *VAR_8 = (struct mtk_pinctrl *)VAR_6;
 const struct mtk_pin_desc *VAR_9;
 struct gpio_chip *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_7, &VAR_11, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_9 = (const struct mtk_pin_desc *)&VAR_8->soc->pins[VAR_11];

 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_4,
          VAR_9->eint.eint_m);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_3, VAR_2);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_5, VAR_1);






 if (VAR_12 && VAR_12 != -VAR_0)
  return VAR_12;

 return 0;
}
