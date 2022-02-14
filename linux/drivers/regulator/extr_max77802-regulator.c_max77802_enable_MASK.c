
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct max77802_regulator_prv {int* opmode; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct max77802_regulator_prv* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2)
{
 struct max77802_regulator_prv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = FUNC_0(VAR_4);

 if (VAR_3->opmode[VAR_4] == VAR_0)
  VAR_3->opmode[VAR_4] = VAR_1;

 return FUNC_3(VAR_2->regmap, VAR_2->desc->enable_reg,
      VAR_2->desc->enable_mask,
      VAR_3->opmode[VAR_4] << VAR_5);
}
