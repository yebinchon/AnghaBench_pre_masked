
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct mc13xxx_regulator_priv {unsigned int powermisc_pwgt_state; int mc13xxx; struct mc13xxx_regulator* mc13xxx_regulators; } ;
struct mc13xxx_regulator {unsigned int enable_bit; int reg; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ) ;
 struct mc13xxx_regulator_priv* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1)
{
 struct mc13xxx_regulator_priv *VAR_2 = FUNC_3(VAR_1);
 struct mc13xxx_regulator *VAR_3 = VAR_2->mc13xxx_regulators;
 int VAR_4, VAR_5 = FUNC_4(VAR_1);
 unsigned int VAR_6;

 FUNC_0(VAR_2->mc13xxx);
 VAR_4 = FUNC_1(VAR_2->mc13xxx, VAR_3[VAR_5].reg, &VAR_6);
 FUNC_2(VAR_2->mc13xxx);

 if (VAR_4)
  return VAR_4;



 VAR_6 = (VAR_6 & ~VAR_0) |
       (VAR_2->powermisc_pwgt_state ^ VAR_0);

 return (VAR_6 & VAR_3[VAR_5].enable_bit) != 0;
}
