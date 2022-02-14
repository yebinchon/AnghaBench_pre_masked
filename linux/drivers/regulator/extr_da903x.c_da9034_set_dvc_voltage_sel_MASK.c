
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {unsigned int vol_shift; int vol_nbits; int update_bit; int update_reg; int vol_reg; } ;


 int FUNC_0 (struct device*,int ,int) ;
 int FUNC_1 (struct device*,int ,int,int) ;
 struct da903x_regulator_info* FUNC_2 (struct regulator_dev*) ;
 struct device* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
          unsigned VAR_1)
{
 struct da903x_regulator_info *VAR_2 = FUNC_2(VAR_0);
 struct device *VAR_3 = FUNC_3(VAR_0);
 uint8_t VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = VAR_1 << VAR_2->vol_shift;
 VAR_5 = ((1 << VAR_2->vol_nbits) - 1) << VAR_2->vol_shift;

 VAR_6 = FUNC_1(VAR_3, VAR_2->vol_reg, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2->update_reg,
     1 << VAR_2->update_bit);
 return VAR_6;
}
