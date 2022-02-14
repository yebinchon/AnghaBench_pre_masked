
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct maxim_charger_current {int min; int high_start; int high_step; } ;
struct max14577 {size_t dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 struct maxim_charger_current* VAR_6 ;
 struct max14577* FUNC_1 (struct regulator_dev*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_7)
{
 u8 VAR_8;
 struct regmap *VAR_9 = VAR_7->regmap;
 struct max14577 *VAR_10 = FUNC_1(VAR_7);
 const struct maxim_charger_current *VAR_11 =
  &VAR_6[VAR_10->dev_type];

 if (FUNC_2(VAR_7) != VAR_4)
  return -VAR_3;

 FUNC_0(VAR_9, VAR_5, &VAR_8);

 if ((VAR_8 & VAR_2) == 0)
  return VAR_11->min;

 VAR_8 = ((VAR_8 & VAR_0) >>
   VAR_1);
 return VAR_11->high_start + VAR_8 * VAR_11->high_step;
}
