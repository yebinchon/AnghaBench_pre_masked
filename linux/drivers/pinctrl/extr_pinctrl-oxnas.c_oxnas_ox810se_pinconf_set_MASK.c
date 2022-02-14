
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pinctrl_dev {int dummy; } ;
struct oxnas_pinctrl {int dev; int regmap; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct oxnas_gpio_bank {int id; TYPE_1__ gpio_chip; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct oxnas_gpio_bank* FUNC_3 (struct oxnas_pinctrl*,unsigned int) ;
 unsigned int FUNC_4 (unsigned long) ;
 struct oxnas_pinctrl* FUNC_5 (struct pinctrl_dev*) ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_3,
         unsigned int VAR_4, unsigned long *VAR_5,
         unsigned int VAR_6)
{
 struct oxnas_pinctrl *VAR_7 = FUNC_5(VAR_3);
 struct oxnas_gpio_bank *VAR_8 = FUNC_3(VAR_7, VAR_4);
 unsigned int VAR_9;
 unsigned int VAR_10;
 u32 VAR_11 = VAR_4 - VAR_8->gpio_chip.base;
 u32 VAR_12 = FUNC_0(VAR_11);

 FUNC_1(VAR_7->dev, "setting pin %d bank %d mask 0x%x\n",
  VAR_4, VAR_8->gpio_chip.base, VAR_12);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9 = FUNC_4(VAR_5[VAR_10]);

  switch (VAR_9) {
  case 128:
   FUNC_1(VAR_7->dev, "   pullup\n");
   FUNC_6(VAR_7->regmap,
       (VAR_8->id ?
      VAR_2 :
      VAR_1),
       VAR_12, VAR_12);
   break;
  default:
   FUNC_2(VAR_7->dev, "Property %u not supported\n",
    VAR_9);
   return -VAR_0;
  }
 }

 return 0;
}
