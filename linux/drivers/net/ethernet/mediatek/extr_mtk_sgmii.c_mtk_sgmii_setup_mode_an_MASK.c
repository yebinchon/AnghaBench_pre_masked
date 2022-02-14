
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sgmii {int * regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

int FUNC_2(struct mtk_sgmii *VAR_9, int VAR_10)
{
 unsigned int VAR_11;

 if (!VAR_9->regmap[VAR_10])
  return -VAR_0;


 FUNC_1(VAR_9->regmap[VAR_10], VAR_6,
       VAR_2);

 FUNC_0(VAR_9->regmap[VAR_10], VAR_8, &VAR_11);
 VAR_11 |= VAR_4;
 FUNC_1(VAR_9->regmap[VAR_10], VAR_8, VAR_11);

 FUNC_0(VAR_9->regmap[VAR_10], VAR_5, &VAR_11);
 VAR_11 |= VAR_1;
 FUNC_1(VAR_9->regmap[VAR_10], VAR_5, VAR_11);

 FUNC_0(VAR_9->regmap[VAR_10], VAR_7, &VAR_11);
 VAR_11 &= ~VAR_3;
 FUNC_1(VAR_9->regmap[VAR_10], VAR_7, VAR_11);

 return 0;
}
