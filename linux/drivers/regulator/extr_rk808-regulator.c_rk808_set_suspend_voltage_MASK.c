
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int vsel_reg; int vsel_mask; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ,int) ;
 int FUNC_1 (struct regulator_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_3);

 if (VAR_5 < 0)
  return -VAR_0;

 VAR_4 = VAR_2->desc->vsel_reg + VAR_1;

 return FUNC_0(VAR_2->regmap, VAR_4,
      VAR_2->desc->vsel_mask,
      VAR_5);
}
