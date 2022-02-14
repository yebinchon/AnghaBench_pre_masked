
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_desc {int dummy; } ;
struct regulator_config {int regmap; } ;
struct of_dvs_setting {char* prop; int reg; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct of_dvs_setting const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct of_dvs_setting const*,struct device_node*,struct regulator_desc const*,int ) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_3,
       const struct regulator_desc *VAR_4,
       struct regulator_config *VAR_5)
{
 int VAR_6, VAR_7;
 const struct of_dvs_setting VAR_8[] = {
  {
   .prop = "rohm,dvs-run-voltage",
   .reg = VAR_1,
  },
  {
   .prop = "rohm,dvs-idle-voltage",
   .reg = VAR_0,
  },
  {
   .prop = "rohm,dvs-suspend-voltage",
   .reg = VAR_2,
  },
 };

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_8); VAR_7++) {
  VAR_6 = FUNC_1(&VAR_8[VAR_7], VAR_3, VAR_4, VAR_5->regmap);
  if (VAR_6)
   break;
 }
 return VAR_6;
}
