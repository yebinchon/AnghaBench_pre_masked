
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int regmap; TYPE_1__* desc; } ;
struct cpcap_regulator {int assign_mask; int assign_reg; } ;
struct TYPE_2__ {int enable_val; } ;


 int VAR_0 ;
 struct cpcap_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct cpcap_regulator *VAR_2 = FUNC_0(VAR_1);
 int VAR_3, VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (VAR_1->desc->enable_val & VAR_0) {
  VAR_3 = FUNC_1(VAR_1->regmap, VAR_2->assign_reg,
        VAR_2->assign_mask,
        VAR_2->assign_mask);
  if (VAR_3)
   VAR_4 = FUNC_2(VAR_1);
 }

 return VAR_3;
}
