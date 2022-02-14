
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct da903x_regulator_info {int max_uV; } ;
struct TYPE_2__ {int min_uV; int uV_step; } ;


 int VAR_0 ;
 struct da903x_regulator_info* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1,
         unsigned VAR_2)
{
 struct da903x_regulator_info *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (VAR_2 & 0x4)
  VAR_4 = VAR_1->desc->min_uV +
         VAR_1->desc->uV_step * (3 - (VAR_2 & ~0x4));
 else
  VAR_4 = (VAR_3->max_uV + VAR_1->desc->min_uV) / 2 +
         VAR_1->desc->uV_step * (VAR_2 & ~0x4);

 if (VAR_4 > VAR_3->max_uV)
  return -VAR_0;

 return VAR_4;
}
