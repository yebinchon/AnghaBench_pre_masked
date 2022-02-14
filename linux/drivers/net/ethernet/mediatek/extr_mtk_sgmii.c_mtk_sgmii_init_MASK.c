
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_sgmii {int * regmap; int ana_rgc3; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;
 int FUNC_3 (struct device_node*) ;

int FUNC_4(struct mtk_sgmii *VAR_1, struct device_node *VAR_2, u32 VAR_3)
{
 struct device_node *VAR_4;
 int VAR_5;

 VAR_1->ana_rgc3 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_2(VAR_2, "mediatek,sgmiisys", VAR_5);
  if (!VAR_4)
   break;

  VAR_1->regmap[VAR_5] = FUNC_3(VAR_4);
  if (FUNC_0(VAR_1->regmap[VAR_5]))
   return FUNC_1(VAR_1->regmap[VAR_5]);
 }

 return 0;
}
