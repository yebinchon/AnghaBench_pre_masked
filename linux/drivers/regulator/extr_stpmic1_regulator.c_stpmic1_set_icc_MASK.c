
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stpmic1_regulator_cfg {int icc_mask; int icc_reg; } ;
struct regulator_dev {int dummy; } ;
struct regmap {int dummy; } ;


 struct stpmic1_regulator_cfg* FUNC_0 (struct regulator_dev*) ;
 struct regmap* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct stpmic1_regulator_cfg *VAR_1 = FUNC_0(VAR_0);
 struct regmap *VAR_2 = FUNC_1(VAR_0);


 return FUNC_2(VAR_2, VAR_1->icc_reg, VAR_1->icc_mask,
      VAR_1->icc_mask);
}
