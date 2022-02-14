
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pinctrl_dev {int dummy; } ;
struct pic32_pinctrl {int dev; } ;
struct TYPE_3__ {unsigned int base; } ;
struct pic32_gpio_bank {TYPE_1__ gpio_chip; scalar_t__ reg_base; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;







 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 struct pic32_gpio_bank* FUNC_5 (struct pic32_pinctrl*,unsigned int) ;
 int FUNC_6 (TYPE_1__*,unsigned int) ;
 int FUNC_7 (TYPE_1__*,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (unsigned long) ;
 unsigned int FUNC_9 (unsigned long) ;
 struct pic32_pinctrl* FUNC_10 (struct pinctrl_dev*) ;
 int FUNC_11 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct pinctrl_dev *VAR_5, unsigned VAR_6,
     unsigned long *VAR_7, unsigned VAR_8)
{
 struct pic32_pinctrl *VAR_9 = FUNC_10(VAR_5);
 struct pic32_gpio_bank *VAR_10 = FUNC_5(VAR_9, VAR_6);
 unsigned VAR_11;
 u32 VAR_12;
 unsigned int VAR_13;
 u32 VAR_14 = VAR_6 - VAR_10->gpio_chip.base;
 u32 VAR_15 = FUNC_0(VAR_14);

 FUNC_3(VAR_9->dev, "setting pin %d bank %d mask 0x%x\n",
  VAR_6, VAR_10->gpio_chip.base, VAR_15);

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_11 = FUNC_9(VAR_7[VAR_13]);
  VAR_12 = FUNC_8(VAR_7[VAR_13]);

  switch (VAR_11) {
  case 133:
   FUNC_3(VAR_9->dev, "   pullup\n");
   FUNC_11(VAR_15, VAR_10->reg_base +FUNC_2(VAR_2));
   break;
  case 134:
   FUNC_3(VAR_9->dev, "   pulldown\n");
   FUNC_11(VAR_15, VAR_10->reg_base + FUNC_2(VAR_1));
   break;
  case 129:
   FUNC_3(VAR_9->dev, "   digital\n");
   FUNC_11(VAR_15, VAR_10->reg_base + FUNC_1(VAR_0));
   break;
  case 130:
   FUNC_3(VAR_9->dev, "   analog\n");
   FUNC_11(VAR_15, VAR_10->reg_base + FUNC_2(VAR_0));
   break;
  case 132:
   FUNC_3(VAR_9->dev, "   opendrain\n");
   FUNC_11(VAR_15, VAR_10->reg_base + FUNC_2(VAR_4));
   break;
  case 131:
   FUNC_6(&VAR_10->gpio_chip, VAR_14);
   break;
  case 128:
   FUNC_7(&VAR_10->gpio_chip,
          VAR_14, VAR_12);
   break;
  default:
   FUNC_4(VAR_9->dev, "Property %u not supported\n",
    VAR_11);
   return -VAR_3;
  }
 }

 return 0;
}
