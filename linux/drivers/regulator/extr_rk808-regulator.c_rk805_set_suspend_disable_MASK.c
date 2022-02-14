
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int enable_reg; int enable_mask; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1->desc->enable_reg + VAR_0;

 return FUNC_0(VAR_1->regmap, VAR_2,
      VAR_1->desc->enable_mask,
      0);
}
