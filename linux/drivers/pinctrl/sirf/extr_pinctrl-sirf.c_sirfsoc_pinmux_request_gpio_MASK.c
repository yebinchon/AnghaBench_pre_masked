
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sirfsoc_pmx {scalar_t__ gpio_virtbase; } ;
struct pinctrl_gpio_range {int id; unsigned int pin_base; } ;
struct pinctrl_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct sirfsoc_pmx* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0,
 struct pinctrl_gpio_range *VAR_1, unsigned VAR_2)
{
 struct sirfsoc_pmx *VAR_3;

 int VAR_4 = VAR_1->id;

 u32 VAR_5;

 VAR_3 = FUNC_1(VAR_0);

 VAR_5 = FUNC_2(VAR_3->gpio_virtbase +
  FUNC_0(VAR_4));
 VAR_5 = VAR_5 | (1 << (VAR_2 - VAR_1->pin_base));
 FUNC_3(VAR_5, VAR_3->gpio_virtbase +
  FUNC_0(VAR_4));

 return 0;
}
