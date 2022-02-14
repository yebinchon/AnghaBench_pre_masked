
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; int dev; } ;
struct TYPE_2__ {int enable_reg; int enable_mask; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_4->desc->enable_reg,
     VAR_4->desc->enable_mask,
     VAR_4->desc->enable_mask);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "Error in updating reg %#x\n",
   VAR_4->desc->enable_reg);
  return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_2(VAR_4->regmap, VAR_4->desc->enable_reg,
      &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;

  if (!(VAR_5 & FUNC_0(VAR_1)))
   break;

  FUNC_4(1000, 1500);
 }
 if (!(VAR_5 & FUNC_0(VAR_0)))
  return -VAR_2;

 return 0;
}
