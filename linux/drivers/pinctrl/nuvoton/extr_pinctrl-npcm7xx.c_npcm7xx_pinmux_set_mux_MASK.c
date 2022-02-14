
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int gcr_regmap; int dev; } ;
struct TYPE_2__ {int npins; int pins; int name; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 struct npcm7xx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 struct npcm7xx_pinctrl *VAR_4 = FUNC_2(VAR_1);

 FUNC_0(VAR_4->dev, "set_mux: %d, %d[%s]\n", VAR_2, VAR_3,
  VAR_0[VAR_3].name);

 FUNC_1(VAR_4->gcr_regmap, VAR_0[VAR_3].pins,
   VAR_0[VAR_3].npins, VAR_3);

 return 0;
}
