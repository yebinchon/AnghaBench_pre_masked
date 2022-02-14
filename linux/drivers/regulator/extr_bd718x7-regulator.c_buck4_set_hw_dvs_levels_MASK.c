
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
 int FUNC_1 (struct of_dvs_setting const*,struct device_node*,struct regulator_desc const*,int ) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_1,
       const struct regulator_desc *VAR_2,
       struct regulator_config *VAR_3)
{
 int VAR_4, VAR_5;
 const struct of_dvs_setting VAR_6[] = {
  {
   .prop = "rohm,dvs-run-voltage",
   .reg = VAR_0,
  },
 };

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_6); VAR_5++) {
  VAR_4 = FUNC_1(&VAR_6[VAR_5], VAR_1, VAR_2, VAR_3->regmap);
  if (VAR_4)
   break;
 }
 return VAR_4;
}
