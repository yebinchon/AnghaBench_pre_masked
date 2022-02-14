
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_desc {int n_voltages; int vsel_mask; } ;
struct regmap {int dummy; } ;
struct of_dvs_setting {int reg; int prop; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,int ,unsigned int*) ;
 int FUNC_2 (struct regmap*,int ,int ,int) ;
 int FUNC_3 (struct regulator_desc const*,int) ;

__attribute__((used)) static int FUNC_4(const struct of_dvs_setting *VAR_2,
     struct device_node *VAR_3,
     const struct regulator_desc *VAR_4,
     struct regmap *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned int VAR_8;

 VAR_6 = FUNC_1(VAR_3, VAR_2->prop, &VAR_8);
 if (VAR_6) {
  if (VAR_6 != -VAR_1)
   return VAR_6;
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->n_voltages; VAR_7++) {
  VAR_6 = FUNC_3(VAR_4, VAR_7);
  if (VAR_6 < 0)
   continue;
  if (VAR_6 == VAR_8) {
   VAR_7 <<= FUNC_0(VAR_4->vsel_mask) - 1;
   VAR_6 = FUNC_2(VAR_5, VAR_2->reg,
       VAR_0, VAR_7);
   break;
  }
 }
 return VAR_6;
}
