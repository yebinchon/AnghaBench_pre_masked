
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps80031_regulator {int device_flags; } ;
struct regulator_dev {int dummy; } ;


 struct tps80031_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,unsigned int) ;
 int** VAR_0 ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1, unsigned VAR_2)
{
 struct tps80031_regulator *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_3->device_flags & 0x3;

 if (VAR_2 == 0)
  return 0;
 else if (VAR_2 < 58)
  return FUNC_1(VAR_1, VAR_2 - 1);
 else
  return VAR_0[VAR_4][VAR_2 - 58] * 1000;
}
