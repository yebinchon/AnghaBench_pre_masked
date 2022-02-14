
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct mc13xxx_regulator_priv {unsigned int powermisc_pwgt_state; int mc13xxx; } ;
struct TYPE_2__ {unsigned int enable_bit; int reg; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ) ;
 struct mc13xxx_regulator_priv* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2)
{
 struct mc13xxx_regulator_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5 = FUNC_4(VAR_2);
 unsigned int VAR_6;

 FUNC_0(VAR_3->mc13xxx);
 VAR_4 = FUNC_1(VAR_3->mc13xxx, VAR_1[VAR_5].reg, &VAR_6);
 FUNC_2(VAR_3->mc13xxx);

 if (VAR_4)
  return VAR_4;



 VAR_6 = (VAR_6 & ~VAR_0) |
  (VAR_3->powermisc_pwgt_state ^ VAR_0);

 return (VAR_6 & VAR_1[VAR_5].enable_bit) != 0;
}
