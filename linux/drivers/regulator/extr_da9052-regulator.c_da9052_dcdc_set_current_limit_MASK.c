
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
 int VAR_4 ;
 int VAR_5 ;
 int** VAR_6 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ,int) ;
 struct da9052_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_7, int VAR_8,
       int VAR_9)
{
 struct da9052_regulator *VAR_10 = FUNC_1(VAR_7);
 int VAR_11 = FUNC_2(VAR_7);
 int VAR_12 = 0;
 int VAR_13, VAR_14 = 2;


 if (VAR_10->da9052->chip_id == VAR_0)
  VAR_14 = 0;
 else if (VAR_11 == 0)
  VAR_14 = 1;

 for (VAR_13 = VAR_4 - 1; VAR_13 >= 0; VAR_13--) {
  if ((VAR_8 <= VAR_6[VAR_14][VAR_13]) &&
      (VAR_6[VAR_14][VAR_13] <= VAR_9)) {
   VAR_12 = VAR_13;
   break;
  }
 }

 if (VAR_13 < 0)
  return -VAR_5;




 if (VAR_11 % 2 == 0)
  return FUNC_0(VAR_10->da9052,
      VAR_1 + VAR_11/2,
      VAR_2,
      VAR_12 << 2);
 else
  return FUNC_0(VAR_10->da9052,
      VAR_1 + VAR_11/2,
      VAR_3,
      VAR_12 << 6);
}
