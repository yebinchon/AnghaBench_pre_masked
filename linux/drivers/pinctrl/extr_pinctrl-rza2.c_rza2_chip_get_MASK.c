
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rza2_pinctrl_priv {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 struct rza2_pinctrl_priv* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct rza2_pinctrl_priv *VAR_2 = FUNC_4(VAR_0);
 u8 VAR_3 = FUNC_3(VAR_1);
 u8 VAR_4 = FUNC_2(VAR_1);

 return !!(FUNC_5(VAR_2->base + FUNC_1(VAR_3)) & FUNC_0(VAR_4));
}
