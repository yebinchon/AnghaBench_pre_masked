
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct da9052_regulator_info {int min_uV; int step_uV; } ;
struct da9052_regulator {TYPE_1__* da9052; struct da9052_regulator_info* info; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct regulator_dev*,int) ;
 struct da9052_regulator* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct da9052_regulator_info*,int,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_5,
         int VAR_6, int VAR_7)
{
 struct da9052_regulator *VAR_8 = FUNC_2(VAR_5);
 struct da9052_regulator_info *VAR_9 = VAR_8->info;
 int VAR_10 = FUNC_3(VAR_5);
 int VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_9, VAR_6, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_6 < VAR_9->min_uV)
  VAR_6 = VAR_9->min_uV;

 if ((VAR_10 == VAR_4) && (VAR_8->da9052->chip_id == VAR_0)
  && (VAR_6 >= VAR_3)) {
   VAR_12 = VAR_2 +
         FUNC_0(VAR_6 - VAR_3,
        VAR_1);
 } else {
  VAR_12 = FUNC_0(VAR_6 - VAR_9->min_uV, VAR_9->step_uV);
 }

 VAR_11 = FUNC_1(VAR_5, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;

 return VAR_12;
}
