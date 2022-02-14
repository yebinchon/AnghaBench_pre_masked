
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2mps11_info {int dummy; } ;
struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct s2mps11_info *VAR_1,
  struct regulator_dev *VAR_2)
{
 return FUNC_0(VAR_2->regmap, VAR_2->desc->enable_reg,
   VAR_2->desc->enable_mask, VAR_0);
}
