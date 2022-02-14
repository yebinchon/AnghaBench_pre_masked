
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct oxnas_pinctrl {int regmap; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct oxnas_gpio_bank {int id; TYPE_1__ gpio_chip; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 struct oxnas_gpio_bank* FUNC_1 (struct oxnas_pinctrl*,unsigned int) ;
 unsigned long FUNC_2 (unsigned int,int) ;
 unsigned int FUNC_3 (unsigned long) ;
 struct oxnas_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_3,
         unsigned int VAR_4, unsigned long *VAR_5)
{
 struct oxnas_pinctrl *VAR_6 = FUNC_4(VAR_3);
 struct oxnas_gpio_bank *VAR_7 = FUNC_1(VAR_6, VAR_4);
 unsigned int VAR_8 = FUNC_3(*VAR_5);
 u32 VAR_9 = FUNC_0(VAR_4 - VAR_7->gpio_chip.base);
 int VAR_10;
 u32 VAR_11;

 switch (VAR_8) {
 case 128:
  VAR_10 = FUNC_5(VAR_6->regmap,
      (VAR_7->id ?
     VAR_2 :
     VAR_1),
      &VAR_11);
  if (VAR_10)
   return VAR_10;

  VAR_11 = !!(VAR_11 & VAR_9);
  break;
 default:
  return -VAR_0;
 }

 *VAR_5 = FUNC_2(VAR_8, VAR_11);

 return 0;
}
