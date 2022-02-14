
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_dev {int regmap; } ;
struct anatop_regulator {int delay_bit_width; int delay_bit_shift; int delay_reg; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct anatop_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2,
 unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct anatop_regulator *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6;
 int VAR_7 = 0;


 if (VAR_5->delay_bit_width && VAR_4 > VAR_3) {






  FUNC_1(VAR_2->regmap, VAR_5->delay_reg, &VAR_6);
  VAR_6 = (VAR_6 >> VAR_5->delay_bit_shift) &
   ((1 << VAR_5->delay_bit_width) - 1);
  VAR_7 = (VAR_4 - VAR_3) * (VAR_1 <<
   VAR_6) / VAR_0 + 1;
 }

 return VAR_7;
}
