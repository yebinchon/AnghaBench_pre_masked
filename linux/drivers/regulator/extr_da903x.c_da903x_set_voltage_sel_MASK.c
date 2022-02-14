
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct regulator_dev {TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct da903x_regulator_info {unsigned int vol_shift; int vol_nbits; int vol_reg; } ;
struct TYPE_2__ {int n_voltages; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int,int) ;
 struct da903x_regulator_info* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1, unsigned VAR_2)
{
 struct da903x_regulator_info *VAR_3 = FUNC_1(VAR_1);
 struct device *VAR_4 = FUNC_2(VAR_1);
 uint8_t VAR_5, VAR_6;

 if (VAR_1->desc->n_voltages == 1)
  return -VAR_0;

 VAR_5 = VAR_2 << VAR_3->vol_shift;
 VAR_6 = ((1 << VAR_3->vol_nbits) - 1) << VAR_3->vol_shift;

 return FUNC_0(VAR_4, VAR_3->vol_reg, VAR_5, VAR_6);
}
