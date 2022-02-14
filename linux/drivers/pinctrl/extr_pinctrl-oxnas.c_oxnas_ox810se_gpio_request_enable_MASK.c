
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int,scalar_t__,scalar_t__,int ) ;
 struct oxnas_gpio_bank* FUNC_2 (int ) ;
 struct oxnas_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_6,
          struct pinctrl_gpio_range *VAR_7,
          unsigned int VAR_8)
{
 struct oxnas_pinctrl *VAR_9 = FUNC_3(VAR_6);
 struct oxnas_gpio_bank *VAR_10 = FUNC_2(VAR_7->gc);
 u32 VAR_11 = FUNC_0(VAR_8 - VAR_10->gpio_chip.base);

 FUNC_1(VAR_9->dev, "requesting gpio %d in bank %d (id %d) with mask 0x%x\n",
  VAR_8, VAR_10->gpio_chip.base, VAR_10->id, VAR_11);

 FUNC_4(VAR_9->regmap,
     (VAR_10->id ?
    VAR_1 :
    VAR_0),
     VAR_11, 0);
 FUNC_4(VAR_9->regmap,
     (VAR_10->id ?
    VAR_3 :
    VAR_2),
     VAR_11, 0);
 FUNC_4(VAR_9->regmap,
     (VAR_10->id ?
    VAR_5 :
    VAR_4),
     VAR_11, 0);

 return 0;
}
