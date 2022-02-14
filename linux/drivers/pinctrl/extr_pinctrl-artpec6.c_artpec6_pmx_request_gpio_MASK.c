
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct artpec6_pmx {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 struct artpec6_pmx* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_4,
        struct pinctrl_gpio_range *VAR_5,
        unsigned int VAR_6)
{
 struct artpec6_pmx *VAR_7 = FUNC_1(VAR_4);
 unsigned int VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9;

 if (VAR_6 >= 32)
  return -VAR_3;

 VAR_9 = FUNC_2(VAR_7->base + VAR_8);
 VAR_9 &= ~VAR_1;
 VAR_9 |= VAR_0 << VAR_2;
 FUNC_3(VAR_9, VAR_7->base + VAR_8);

 return 0;
}
