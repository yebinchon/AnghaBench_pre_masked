
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int gcr_regmap; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int*,int,int ) ;
 struct npcm7xx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_2,
           struct pinctrl_gpio_range *VAR_3,
           unsigned int VAR_4)
{
 struct npcm7xx_pinctrl *VAR_5 = FUNC_2(VAR_2);

 if (!VAR_3) {
  FUNC_0(VAR_5->dev, "invalid range\n");
  return -VAR_0;
 }
 if (!VAR_3->gc) {
  FUNC_0(VAR_5->dev, "invalid gpiochip\n");
  return -VAR_0;
 }

 FUNC_1(VAR_5->gcr_regmap, &VAR_4, 1, VAR_1);

 return 0;
}
