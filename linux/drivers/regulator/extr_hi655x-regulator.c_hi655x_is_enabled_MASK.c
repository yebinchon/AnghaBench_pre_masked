
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct hi655x_regulator {int status_reg; } ;
struct TYPE_2__ {unsigned int enable_mask; } ;


 struct hi655x_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 unsigned int VAR_1 = 0;
 struct hi655x_regulator *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->regmap, VAR_2->status_reg, &VAR_1);
 return (VAR_1 & VAR_0->desc->enable_mask);
}
