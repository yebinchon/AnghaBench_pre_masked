
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {int enable_bit; int enable_reg; } ;


 int FUNC_0 (struct device*,int ,int*) ;
 struct da903x_regulator_info* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct da903x_regulator_info *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = FUNC_2(VAR_0);
 uint8_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1->enable_reg, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return !!(VAR_3 & (1 << VAR_1->enable_bit));
}
