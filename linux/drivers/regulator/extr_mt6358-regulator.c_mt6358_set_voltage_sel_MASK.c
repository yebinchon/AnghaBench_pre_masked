
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regulator_dev {int regmap; } ;
struct TYPE_2__ {int vsel_mask; int vsel_reg; } ;
struct mt6358_regulator_info {int* index_table; int vsel_shift; TYPE_1__ desc; } ;


 struct mt6358_regulator_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0,
      unsigned int VAR_1)
{
 int VAR_2, VAR_3;
 const u32 *VAR_4;
 struct mt6358_regulator_info *VAR_5 = FUNC_0(VAR_0);

 VAR_4 = VAR_5->index_table;

 VAR_2 = VAR_4[VAR_1];
 VAR_3 = FUNC_1(VAR_0->regmap, VAR_5->desc.vsel_reg,
     VAR_5->desc.vsel_mask,
     VAR_2 << VAR_5->vsel_shift);

 return VAR_3;
}
