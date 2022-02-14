
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct hi655x_regulator {int disable_reg; } ;
struct TYPE_2__ {int enable_mask; } ;


 struct hi655x_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct hi655x_regulator *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_0->regmap, VAR_1->disable_reg,
       VAR_0->desc->enable_mask);
}
