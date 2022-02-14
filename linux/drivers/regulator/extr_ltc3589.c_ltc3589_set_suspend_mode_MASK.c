
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct ltc3589 {int regmap; } ;
struct TYPE_2__ {int apply_bit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct ltc3589* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2,
        unsigned int VAR_3)
{
 struct ltc3589 *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6 = 0;


 VAR_5 = VAR_2->desc->apply_bit << 1;

 if (VAR_3 == VAR_1)
  VAR_6 = VAR_5;

 VAR_5 |= VAR_2->desc->apply_bit;
 VAR_6 |= VAR_2->desc->apply_bit;
 return FUNC_1(VAR_4->regmap, VAR_0, VAR_5, VAR_6);
}
