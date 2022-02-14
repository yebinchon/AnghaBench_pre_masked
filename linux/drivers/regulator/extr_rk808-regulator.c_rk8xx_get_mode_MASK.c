
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {int vsel_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct regulator_dev *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_3->desc->vsel_reg, &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 & VAR_0)
  return VAR_1;
 else
  return VAR_2;
}
