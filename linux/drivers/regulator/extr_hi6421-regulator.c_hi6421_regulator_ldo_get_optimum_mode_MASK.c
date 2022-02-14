
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct hi6421_regulator_info {int eco_microamp; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct hi6421_regulator_info* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct regulator_dev *VAR_2,
   int VAR_3, int VAR_4, int VAR_5)
{
 struct hi6421_regulator_info *VAR_6 = FUNC_0(VAR_2);

 if (VAR_5 > VAR_6->eco_microamp)
  return VAR_1;

 return VAR_0;
}
