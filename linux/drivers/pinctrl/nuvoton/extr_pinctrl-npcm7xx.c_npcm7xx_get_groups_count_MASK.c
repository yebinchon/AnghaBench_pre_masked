
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 struct npcm7xx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1)
{
 struct npcm7xx_pinctrl *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->dev, "group size: %d\n", FUNC_0(VAR_0));
 return FUNC_0(VAR_0);
}
