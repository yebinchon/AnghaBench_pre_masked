
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_sgmii {int * regmap; } ;
struct mtk_eth {TYPE_1__* soc; struct mtk_sgmii* sgmii; } ;
struct TYPE_2__ {int caps; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

void FUNC_3(struct mtk_eth *VAR_3, int VAR_4)
{
 struct mtk_sgmii *VAR_5 = VAR_3->sgmii;
 unsigned int VAR_6, VAR_7;


 VAR_7 = (FUNC_0(VAR_3->soc->caps, VAR_0)) ?
        0 : VAR_4;

 if (!VAR_5->regmap[VAR_7])
  return;

 FUNC_1(VAR_5->regmap[VAR_7], VAR_2, &VAR_6);
 VAR_6 |= VAR_1;
 FUNC_2(VAR_5->regmap[VAR_7], VAR_2, VAR_6);
}
