
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int domain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 struct npcm7xx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_0,
          struct pinctrl_gpio_range *VAR_1,
          unsigned int VAR_2)
{
 struct npcm7xx_pinctrl *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->domain, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_4);
}
