
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct byt_gpio {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct byt_gpio*,unsigned int) ;
 struct byt_gpio* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_0,
      struct pinctrl_gpio_range *VAR_1,
      unsigned int VAR_2)
{
 struct byt_gpio *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_2);
 FUNC_2(&VAR_3->pdev->dev);
}
