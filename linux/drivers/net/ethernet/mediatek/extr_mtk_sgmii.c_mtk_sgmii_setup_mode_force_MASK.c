
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {scalar_t__ interface; int speed; scalar_t__ duplex; } ;
struct mtk_sgmii {int * regmap; int ana_rgc3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

int FUNC_2(struct mtk_sgmii *VAR_15, int VAR_16,
          const struct phylink_link_state *VAR_17)
{
 unsigned int VAR_18;

 if (!VAR_15->regmap[VAR_16])
  return -VAR_1;

 FUNC_0(VAR_15->regmap[VAR_16], VAR_15->ana_rgc3, &VAR_18);
 VAR_18 &= ~VAR_4;
 if (VAR_17->interface == VAR_2)
  VAR_18 |= VAR_3;
 FUNC_1(VAR_15->regmap[VAR_16], VAR_15->ana_rgc3, VAR_18);


 FUNC_0(VAR_15->regmap[VAR_16], VAR_12, &VAR_18);
 VAR_18 &= ~VAR_5;
 FUNC_1(VAR_15->regmap[VAR_16], VAR_12, VAR_18);


 FUNC_0(VAR_15->regmap[VAR_16], VAR_14, &VAR_18);
 VAR_18 &= ~VAR_7;

 switch (VAR_17->speed) {
 case 131:
  VAR_18 |= VAR_9;
  break;
 case 130:
  VAR_18 |= VAR_10;
  break;
 case 128:
 case 129:
  VAR_18 |= VAR_11;
  break;
 };

 if (VAR_17->duplex == VAR_0)
  VAR_18 |= VAR_6;

 FUNC_1(VAR_15->regmap[VAR_16], VAR_14, VAR_18);


 FUNC_0(VAR_15->regmap[VAR_16], VAR_13, &VAR_18);
 VAR_18 &= ~VAR_8;
 FUNC_1(VAR_15->regmap[VAR_16], VAR_13, VAR_18);

 return 0;
}
