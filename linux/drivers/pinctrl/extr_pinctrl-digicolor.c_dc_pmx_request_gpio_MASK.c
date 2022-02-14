
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct dc_pinmap {scalar_t__ regs; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int*,int*) ;
 struct dc_pinmap* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
          struct pinctrl_gpio_range *VAR_2,
          unsigned VAR_3)
{
 struct dc_pinmap *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6;
 u8 VAR_7;

 FUNC_0(VAR_3, &VAR_6, &VAR_5);

 VAR_7 = FUNC_2(VAR_4->regs + VAR_6);
 if ((VAR_7 & (3 << VAR_5)) != 0)
  return -VAR_0;

 return 0;
}
