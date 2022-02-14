
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct mc13xxx_regulator_priv {int mc13xxx; struct mc13xxx_regulator* mc13xxx_regulators; } ;
struct mc13xxx_regulator {unsigned int enable_bit; int reg; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 struct mc13xxx_regulator_priv* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct mc13xxx_regulator_priv *VAR_1 = FUNC_1(VAR_0);
 struct mc13xxx_regulator *VAR_2 = VAR_1->mc13xxx_regulators;
 int VAR_3, VAR_4 = FUNC_2(VAR_0);
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_1->mc13xxx, VAR_2[VAR_4].reg, &VAR_5);
 if (VAR_3)
  return VAR_3;

 return (VAR_5 & VAR_2[VAR_4].enable_bit) != 0;
}
