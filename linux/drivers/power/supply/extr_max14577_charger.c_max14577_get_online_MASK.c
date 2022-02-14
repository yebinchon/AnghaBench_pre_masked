
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regmap {int dummy; } ;
struct max14577_charger {TYPE_1__* max14577; } ;
typedef enum max14577_muic_charger_type { ____Placeholder_max14577_muic_charger_type } max14577_muic_charger_type ;
struct TYPE_2__ {int dev_type; struct regmap* regmap; } ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct max14577_charger *VAR_3, int *VAR_4)
{
 struct regmap *VAR_5 = VAR_3->max14577->regmap;
 u8 VAR_6;
 int VAR_7;
 enum max14577_muic_charger_type VAR_8;

 VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = ((VAR_6 & VAR_1) >> VAR_2);
 VAR_8 = FUNC_1(VAR_3->max14577->dev_type, VAR_6);
 switch (VAR_8) {
 case 130:
 case 136:
 case 131:
 case 132:
 case 137:
 case 128:
  *VAR_4 = 1;
  break;
 case 134:
 case 135:
 case 133:
 case 129:
 default:
  *VAR_4 = 0;
 }

 return 0;
}
