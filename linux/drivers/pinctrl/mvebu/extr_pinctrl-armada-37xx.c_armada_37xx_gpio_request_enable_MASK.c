
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct armada_37xx_pinctrl {int dev; } ;
struct armada_37xx_pin_group {int dummy; } ;


 struct armada_37xx_pin_group* FUNC_0 (struct armada_37xx_pinctrl*,unsigned int,int*) ;
 int FUNC_1 (struct pinctrl_dev*,char*,struct armada_37xx_pin_group*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct armada_37xx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0,
        struct pinctrl_gpio_range *VAR_1,
        unsigned int VAR_2)
{
 struct armada_37xx_pinctrl *VAR_3 = FUNC_3(VAR_0);
 struct armada_37xx_pin_group *VAR_4;
 int VAR_5 = 0;

 FUNC_2(VAR_3->dev, "requesting gpio %d\n", VAR_2);

 while ((VAR_4 = FUNC_0(VAR_3, VAR_2, &VAR_5)))
  FUNC_1(VAR_0, "gpio", VAR_4);

 return 0;
}
