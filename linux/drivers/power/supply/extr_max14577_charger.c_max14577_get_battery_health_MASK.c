
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct max14577_charger *VAR_9, int *VAR_10)
{
 struct regmap *VAR_11 = VAR_9->max14577->regmap;
 int VAR_12;
 u8 VAR_13;
 enum max14577_muic_charger_type VAR_14;

 VAR_12 = FUNC_0(VAR_11, VAR_2, &VAR_13);
 if (VAR_12 < 0)
  goto out;

 VAR_13 = ((VAR_13 & VAR_6) >> VAR_7);
 VAR_14 = FUNC_1(VAR_9->max14577->dev_type, VAR_13);
 if (VAR_14 == VAR_0) {
  *VAR_10 = VAR_3;
  goto out;
 }

 VAR_12 = FUNC_0(VAR_11, VAR_1, &VAR_13);
 if (VAR_12 < 0)
  goto out;

 if (VAR_13 & VAR_8) {
  *VAR_10 = VAR_5;
  goto out;
 }


 *VAR_10 = VAR_4;

out:
 return VAR_12;
}
