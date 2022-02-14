
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dev; int regmap; } ;
struct TYPE_2__ {int name; } ;
struct mt6358_regulator_info {int da_vsel_shift; int da_vsel_mask; TYPE_1__ desc; int da_vsel_reg; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 struct mt6358_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 int VAR_1, VAR_2;
 struct mt6358_regulator_info *VAR_3 = FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0->regmap, VAR_3->da_vsel_reg, &VAR_2);
 if (VAR_1 != 0) {
  FUNC_0(&VAR_0->dev,
   "Failed to get mt6358 Buck %s vsel reg: %d\n",
   VAR_3->desc.name, VAR_1);
  return VAR_1;
 }

 VAR_1 = (VAR_2 >> VAR_3->da_vsel_shift) & VAR_3->da_vsel_mask;

 return VAR_1;
}
