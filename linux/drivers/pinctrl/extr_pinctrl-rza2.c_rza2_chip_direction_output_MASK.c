
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rza2_pinctrl_priv {int base; } ;
struct gpio_chip {int dummy; } ;


 struct rza2_pinctrl_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0,
          unsigned int VAR_1, int VAR_2)
{
 struct rza2_pinctrl_priv *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3->base, VAR_1, 0);

 return 0;
}
