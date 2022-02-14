
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {unsigned int vol_shift; int vol_nbits; int vol_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int,int) ;
 struct da903x_regulator_info* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2,
       unsigned VAR_3)
{
 struct da903x_regulator_info *VAR_4 = FUNC_1(VAR_2);
 struct device *VAR_5 = FUNC_2(VAR_2);
 uint8_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_3 << VAR_4->vol_shift;
 VAR_7 = ((1 << VAR_4->vol_nbits) - 1) << VAR_4->vol_shift;
 VAR_6 |= VAR_0;
 VAR_7 |= VAR_1;


 VAR_8 = FUNC_0(VAR_5, VAR_4->vol_reg, VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_5, VAR_4->vol_reg, VAR_6, VAR_7);
}
