
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct da9052_regulator_info {unsigned int step_uV; unsigned int min_uV; int max_uV; } ;
struct da9052_regulator {TYPE_1__* da9052; struct da9052_regulator_info* info; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct da9052_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_5,
    unsigned int VAR_6)
{
 struct da9052_regulator *VAR_7 = FUNC_0(VAR_5);
 struct da9052_regulator_info *VAR_8 = VAR_7->info;
 int VAR_9 = FUNC_1(VAR_5);
 int VAR_10;

 if ((VAR_9 == VAR_3) && (VAR_7->da9052->chip_id == VAR_0)
  && (VAR_6 >= VAR_2)) {
  VAR_10 = ((VAR_2 * VAR_8->step_uV)
     + VAR_8->min_uV);
  VAR_10 += (VAR_6 - VAR_2)
        * (VAR_1);
 } else {
  VAR_10 = (VAR_6 * VAR_8->step_uV) + VAR_8->min_uV;
 }

 if (VAR_10 > VAR_8->max_uV)
  return -VAR_4;

 return VAR_10;
}
