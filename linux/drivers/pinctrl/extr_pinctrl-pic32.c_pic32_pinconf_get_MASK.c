
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct pic32_pinctrl {int dev; } ;
struct TYPE_2__ {unsigned int base; } ;
struct pic32_gpio_bank {scalar_t__ reg_base; TYPE_1__ gpio_chip; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;







 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct pic32_gpio_bank* FUNC_2 (struct pic32_pinctrl*,unsigned int) ;
 unsigned long FUNC_3 (unsigned int,int) ;
 unsigned int FUNC_4 (unsigned long) ;
 struct pic32_pinctrl* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_6, unsigned VAR_7,
     unsigned long *VAR_8)
{
 struct pic32_pinctrl *VAR_9 = FUNC_5(VAR_6);
 struct pic32_gpio_bank *VAR_10 = FUNC_2(VAR_9, VAR_7);
 unsigned VAR_11 = FUNC_4(*VAR_8);
 u32 VAR_12 = FUNC_0(VAR_7 - VAR_10->gpio_chip.base);
 u32 VAR_13;

 switch (VAR_11) {
 case 133:
  VAR_13 = !!(FUNC_6(VAR_10->reg_base + VAR_2) & VAR_12);
  break;
 case 134:
  VAR_13 = !!(FUNC_6(VAR_10->reg_base + VAR_1) & VAR_12);
  break;
 case 129:
  VAR_13 = !(FUNC_6(VAR_10->reg_base + VAR_0) & VAR_12);
  break;
 case 130:
  VAR_13 = !!(FUNC_6(VAR_10->reg_base + VAR_0) & VAR_12);
  break;
 case 132:
  VAR_13 = !!(FUNC_6(VAR_10->reg_base + VAR_4) & VAR_12);
  break;
 case 131:
  VAR_13 = !!(FUNC_6(VAR_10->reg_base + VAR_5) & VAR_12);
  break;
 case 128:
  VAR_13 = !(FUNC_6(VAR_10->reg_base + VAR_5) & VAR_12);
  break;
 default:
  FUNC_1(VAR_9->dev, "Property %u not supported\n", VAR_11);
  return -VAR_3;
 }

 *VAR_8 = FUNC_3(VAR_11, VAR_13);

 return 0;
}
