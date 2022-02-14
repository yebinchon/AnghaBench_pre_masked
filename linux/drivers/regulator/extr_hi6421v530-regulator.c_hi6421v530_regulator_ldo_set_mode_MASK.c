
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct hi6421v530_regulator_info {unsigned int mode_mask; } ;
struct TYPE_2__ {int enable_reg; } ;


 int VAR_0 ;


 struct hi6421v530_regulator_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
      unsigned int VAR_2)
{
 struct hi6421v530_regulator_info *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 switch (VAR_2) {
 case 128:
  VAR_4 = 0;
  break;
 case 129:
  VAR_4 = VAR_3->mode_mask;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_1->regmap, VAR_1->desc->enable_reg,
      VAR_3->mode_mask, VAR_4);

 return 0;
}
