
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct da9063_regulator_info {int suspend_vsel_reg; } ;
struct da9063_regulator {TYPE_1__* hw; struct da9063_regulator_info* info; } ;
struct TYPE_4__ {int vsel_mask; } ;
struct TYPE_3__ {int regmap; } ;


 int FUNC_0 (int ) ;
 struct da9063_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct regulator_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0, int VAR_1)
{
 struct da9063_regulator *VAR_2 = FUNC_1(VAR_0);
 const struct da9063_regulator_info *VAR_3 = VAR_2->info;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 <<= FUNC_0(VAR_0->desc->vsel_mask) - 1;

 VAR_4 = FUNC_2(VAR_2->hw->regmap, VAR_3->suspend_vsel_reg,
     VAR_0->desc->vsel_mask, VAR_5);

 return VAR_4;
}
