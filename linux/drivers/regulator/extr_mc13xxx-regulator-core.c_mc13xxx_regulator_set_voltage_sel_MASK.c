
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct mc13xxx_regulator_priv {int mc13xxx; struct mc13xxx_regulator* mc13xxx_regulators; } ;
struct mc13xxx_regulator {unsigned int vsel_shift; int vsel_mask; int vsel_reg; } ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;
 struct mc13xxx_regulator_priv* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
          unsigned VAR_1)
{
 struct mc13xxx_regulator_priv *VAR_2 = FUNC_1(VAR_0);
 struct mc13xxx_regulator *VAR_3 = VAR_2->mc13xxx_regulators;
 int VAR_4 = FUNC_2(VAR_0);

 return FUNC_0(VAR_2->mc13xxx, VAR_3[VAR_4].vsel_reg,
          VAR_3[VAR_4].vsel_mask,
          VAR_1 << VAR_3[VAR_4].vsel_shift);
}
