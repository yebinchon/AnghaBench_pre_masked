
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {struct npcm7xx_gpio* gpio_bank; } ;
struct TYPE_2__ {unsigned int ngpio; int parent; } ;
struct npcm7xx_gpio {scalar_t__ base; TYPE_1__ gc; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (int,scalar_t__) ;
 struct npcm7xx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
       struct pinctrl_gpio_range *VAR_4,
       unsigned int VAR_5, bool VAR_6)
{
 struct npcm7xx_pinctrl *VAR_7 = FUNC_3(VAR_3);
 struct npcm7xx_gpio *VAR_8 =
  &VAR_7->gpio_bank[VAR_5 / VAR_0];
 int VAR_9 = FUNC_0(VAR_5 % VAR_8->gc.ngpio);

 FUNC_1(VAR_8->gc.parent, "GPIO Set Direction: %d = %d\n", VAR_5,
  VAR_6);
 if (VAR_6)
  FUNC_2(VAR_9, VAR_8->base + VAR_1);
 else
  FUNC_2(VAR_9, VAR_8->base + VAR_2);

 return 0;
}
