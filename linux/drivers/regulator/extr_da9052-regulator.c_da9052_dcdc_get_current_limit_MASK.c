
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct da9052_regulator {TYPE_1__* da9052; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int** VAR_4 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 struct da9052_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5)
{
 struct da9052_regulator *VAR_6 = FUNC_1(VAR_5);
 int VAR_7 = FUNC_2(VAR_5);
 int VAR_8, VAR_9 = 2;

 VAR_8 = FUNC_0(VAR_6->da9052, VAR_1 + VAR_7/2);
 if (VAR_8 < 0)
  return VAR_8;




 if (VAR_7 % 2 == 0)
  VAR_8 = (VAR_8 & VAR_2) >> 2;
 else
  VAR_8 = (VAR_8 & VAR_3) >> 6;


 if (VAR_6->da9052->chip_id == VAR_0)
  VAR_9 = 0;
 else if (VAR_7 == 0)
  VAR_9 = 1;

 return VAR_4[VAR_9][VAR_8];
}
