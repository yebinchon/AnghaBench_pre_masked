
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {int vsel_mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0,
      unsigned int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_2(VAR_0->regmap, FUNC_0(VAR_2),
     VAR_0->desc->vsel_mask, VAR_1);
}
