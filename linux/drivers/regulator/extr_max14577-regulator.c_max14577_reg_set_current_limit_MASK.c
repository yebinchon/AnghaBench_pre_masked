
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int regmap; } ;
struct maxim_charger_current {int dummy; } ;
struct max14577 {size_t dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct maxim_charger_current const*,int,int,int *) ;
 struct maxim_charger_current* VAR_5 ;
 struct max14577* FUNC_2 (struct regulator_dev*) ;
 scalar_t__ FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6,
  int VAR_7, int VAR_8)
{
 u8 VAR_9;
 int VAR_10;
 struct max14577 *VAR_11 = FUNC_2(VAR_6);
 const struct maxim_charger_current *VAR_12 =
  &VAR_5[VAR_11->dev_type];

 if (FUNC_3(VAR_6) != VAR_3)
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_12, VAR_7, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 return FUNC_0(VAR_6->regmap, VAR_4,
   VAR_1 | VAR_0,
   VAR_9);
}
