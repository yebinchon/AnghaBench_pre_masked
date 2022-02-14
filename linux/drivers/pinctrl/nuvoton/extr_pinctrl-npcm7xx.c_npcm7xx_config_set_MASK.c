
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int dummy; } ;


 int FUNC_0 (struct npcm7xx_pinctrl*,unsigned int,int ) ;
 struct npcm7xx_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0, unsigned int VAR_1,
         unsigned long *VAR_2, unsigned int VAR_3)
{
 struct npcm7xx_pinctrl *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 while (VAR_3--) {
  VAR_5 = FUNC_0(VAR_4, VAR_1, *VAR_2++);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
