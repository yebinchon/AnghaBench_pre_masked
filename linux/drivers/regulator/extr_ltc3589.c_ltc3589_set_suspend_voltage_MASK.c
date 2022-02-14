
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct ltc3589 {int regmap; } ;
struct TYPE_2__ {int vsel_mask; scalar_t__ vsel_reg; } ;


 struct ltc3589* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int FUNC_2 (struct regulator_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0, int VAR_1)
{
 struct ltc3589 *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;


 return FUNC_1(VAR_2->regmap, VAR_0->desc->vsel_reg + 1,
      VAR_0->desc->vsel_mask, VAR_3);
}
