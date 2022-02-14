
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rza2_pinctrl_priv {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct rza2_pinctrl_priv* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct rza2_pinctrl_priv *VAR_5 = FUNC_3(VAR_3);
 u8 VAR_6 = FUNC_2(VAR_4);
 u8 VAR_7 = FUNC_1(VAR_4);
 u16 VAR_8;

 VAR_8 = FUNC_4(VAR_5->base + FUNC_0(VAR_6));
 VAR_8 = (VAR_8 >> (VAR_7 * 2)) & VAR_1;

 if (VAR_8 == VAR_2)
  return 0;

 if (VAR_8 == VAR_0)
  return 1;





 FUNC_5(VAR_5->base, VAR_4, 1);

 return 1;
}
