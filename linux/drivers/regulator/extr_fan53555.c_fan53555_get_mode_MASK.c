
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int regmap; } ;
struct fan53555_device_info {unsigned int mode_mask; int mode_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct fan53555_device_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_2)
{
 struct fan53555_device_info *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_2->regmap, VAR_3->mode_reg, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4 & VAR_3->mode_mask)
  return VAR_0;
 else
  return VAR_1;
}
