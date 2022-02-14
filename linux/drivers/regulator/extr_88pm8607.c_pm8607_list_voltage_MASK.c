
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct pm8607_regulator_info {scalar_t__ slope_double; } ;


 struct pm8607_regulator_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0, unsigned VAR_1)
{
 struct pm8607_regulator_info *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->slope_double)
  VAR_3 <<= 1;

 return VAR_3;
}
