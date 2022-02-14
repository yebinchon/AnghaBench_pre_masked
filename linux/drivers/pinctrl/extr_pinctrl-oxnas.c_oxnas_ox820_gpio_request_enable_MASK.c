
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;
struct oxnas_pinctrl {int regmap; int dev; } ;
struct TYPE_2__ {scalar_t__ base; } ;
struct oxnas_gpio_bank {scalar_t__ id; TYPE_1__ gpio_chip; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int,scalar_t__,scalar_t__,int ) ;
 struct oxnas_gpio_bank* FUNC_2 (int ) ;
 struct oxnas_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_6,
        struct pinctrl_gpio_range *VAR_7,
        unsigned int VAR_8)
{
 struct oxnas_pinctrl *VAR_9 = FUNC_3(VAR_6);
 struct oxnas_gpio_bank *VAR_10 = FUNC_2(VAR_7->gc);
 unsigned int VAR_11 = (VAR_10->id ? VAR_1 : 0);
 u32 VAR_12 = FUNC_0(VAR_8 - VAR_10->gpio_chip.base);

 FUNC_1(VAR_9->dev, "requesting gpio %d in bank %d (id %d) with mask 0x%x\n",
  VAR_8, VAR_10->gpio_chip.base, VAR_10->id, VAR_12);

 FUNC_4(VAR_9->regmap,
     VAR_11 + VAR_4,
     VAR_12, 0);
 FUNC_4(VAR_9->regmap,
     VAR_11 + VAR_5,
     VAR_12, 0);
 FUNC_4(VAR_9->regmap,
     VAR_11 + VAR_3,
     VAR_12, 0);
 FUNC_4(VAR_9->regmap,
     VAR_11 + VAR_2,
     VAR_12, 0);
 FUNC_4(VAR_9->regmap,
     VAR_11 + VAR_0,
     VAR_12, 0);

 return 0;
}
