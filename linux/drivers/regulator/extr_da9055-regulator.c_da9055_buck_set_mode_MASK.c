
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int shift; int mask; int reg; } ;
struct da9055_regulator_info {TYPE_1__ mode; } ;
struct da9055_regulator {int da9055; struct da9055_regulator_info* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int ,int ,int) ;
 struct da9055_regulator* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3,
     unsigned int VAR_4)
{
 struct da9055_regulator *VAR_5 = FUNC_1(VAR_3);
 struct da9055_regulator_info *VAR_6 = VAR_5->info;
 int VAR_7 = 0;

 switch (VAR_4) {
 case 130:
  VAR_7 = VAR_2 << VAR_6->mode.shift;
  break;
 case 129:
  VAR_7 = VAR_0 << VAR_6->mode.shift;
  break;
 case 128:
  VAR_7 = VAR_1 << VAR_6->mode.shift;
  break;
 }

 return FUNC_0(VAR_5->da9055, VAR_6->mode.reg,
     VAR_6->mode.mask, VAR_7);
}
