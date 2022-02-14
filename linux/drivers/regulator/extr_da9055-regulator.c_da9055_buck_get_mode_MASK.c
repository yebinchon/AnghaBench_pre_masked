
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int mask; int shift; int reg; } ;
struct da9055_regulator_info {TYPE_1__ mode; } ;
struct da9055_regulator {int da9055; struct da9055_regulator_info* info; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_3)
{
 struct da9055_regulator *VAR_4 = FUNC_1(VAR_3);
 struct da9055_regulator_info *VAR_5 = VAR_4->info;
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_4->da9055, VAR_5->mode.reg);
 if (VAR_6 < 0)
  return VAR_6;

 switch ((VAR_6 & VAR_5->mode.mask) >> VAR_5->mode.shift) {
 case 128:
  VAR_7 = VAR_0;
  break;
 case 130:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_2;
  break;
 }

 return VAR_7;
}
