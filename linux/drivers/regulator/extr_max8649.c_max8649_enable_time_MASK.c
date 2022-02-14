
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct max8649_regulator_info {int regmap; } ;
struct TYPE_2__ {int vsel_reg; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct max8649_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (struct regulator_dev*,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3)
{
 struct max8649_regulator_info *VAR_4 = FUNC_1(VAR_3);
 int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;


 VAR_7 = FUNC_2(VAR_4->regmap, VAR_3->desc->vsel_reg, &VAR_8);
 if (VAR_7 != 0)
  return VAR_7;
 VAR_8 &= VAR_2;
 VAR_5 = FUNC_3(VAR_3, (unsigned char)VAR_8);


 VAR_7 = FUNC_2(VAR_4->regmap, VAR_0, &VAR_8);
 if (VAR_7 != 0)
  return VAR_7;
 VAR_7 = (VAR_8 & VAR_1) >> 5;
 VAR_6 = (32 * 1000) >> VAR_7;

 return FUNC_0(VAR_5, VAR_6);
}
