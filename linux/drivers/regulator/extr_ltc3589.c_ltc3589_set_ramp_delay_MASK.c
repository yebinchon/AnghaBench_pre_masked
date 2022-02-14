
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct ltc3589 {int regmap; } ;
struct TYPE_2__ {int apply_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ltc3589* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2, int VAR_3)
{
 struct ltc3589 *VAR_4 = FUNC_1(VAR_2);
 int VAR_5, VAR_6;

 if (FUNC_3(VAR_3 <= 0))
  return -VAR_0;


 VAR_6 = FUNC_0(VAR_2->desc->apply_bit) - 1;


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if ((880 << VAR_5) >= VAR_3) {
   return FUNC_2(VAR_4->regmap,
        VAR_1,
        0x3 << VAR_6, VAR_5 << VAR_6);
  }
 }
 return -VAR_0;
}
