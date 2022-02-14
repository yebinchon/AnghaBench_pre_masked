
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regulator_dev {int dev; int regmap; } ;
struct TYPE_2__ {int enable_reg; } ;
struct mt6397_regulator_info {int qi; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct mt6397_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 int VAR_3;
 u32 VAR_4;
 struct mt6397_regulator_info *VAR_5 = FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_2->regmap, VAR_5->desc.enable_reg, &VAR_4);
 if (VAR_3 != 0) {
  FUNC_0(&VAR_2->dev, "Failed to get enable reg: %d\n", VAR_3);
  return VAR_3;
 }

 return (VAR_4 & VAR_5->qi) ? VAR_1 : VAR_0;
}
