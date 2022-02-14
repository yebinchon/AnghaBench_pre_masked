
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {unsigned int vsel_mask; int vsel_reg; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1,
          unsigned VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8 = VAR_1->desc->vsel_mask;

 VAR_3 = FUNC_1(VAR_1->regmap, VAR_1->desc->vsel_reg, &VAR_7);
 if (VAR_3 != 0)
  return VAR_3;

 VAR_6 = VAR_7 & ~VAR_8;
 VAR_5 = VAR_7 & VAR_8;
 VAR_5 >>= FUNC_0(VAR_8) - 1;
 VAR_4 = VAR_2 - VAR_5;






 while (VAR_4 > VAR_0) {
  VAR_5 += VAR_0;
  VAR_7 = VAR_5 << (FUNC_0(VAR_8) - 1);
  VAR_7 |= VAR_6;







  VAR_3 = FUNC_2(VAR_1->regmap, VAR_1->desc->vsel_reg, VAR_7);
  VAR_4 = VAR_2 - VAR_5;
 }

 VAR_2 <<= FUNC_0(VAR_8) - 1;
 VAR_7 = VAR_6 | VAR_2;
 VAR_3 = FUNC_2(VAR_1->regmap, VAR_1->desc->vsel_reg, VAR_7);






 FUNC_3(1);

 return VAR_3;
}
