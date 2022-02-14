
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;
struct pic32_pinctrl {int dev; } ;
struct TYPE_2__ {unsigned int base; } ;
struct pic32_gpio_bank {scalar_t__ reg_base; TYPE_1__ gpio_chip; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,int ) ;
 struct pic32_gpio_bank* FUNC_3 (int ) ;
 struct pic32_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
         struct pinctrl_gpio_range *VAR_2,
         unsigned VAR_3)
{
 struct pic32_pinctrl *VAR_4 = FUNC_4(VAR_1);
 struct pic32_gpio_bank *VAR_5 = FUNC_3(VAR_2->gc);
 u32 VAR_6 = FUNC_0(VAR_3 - VAR_5->gpio_chip.base);

 FUNC_2(VAR_4->dev, "requesting gpio %d in bank %d with mask 0x%x\n",
  VAR_3, VAR_5->gpio_chip.base, VAR_6);

 FUNC_5(VAR_6, VAR_5->reg_base + FUNC_1(VAR_0));

 return 0;
}
