
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct act8945a_pmic {unsigned int* op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;


 struct act8945a_pmic* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regmap*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_8, unsigned int VAR_9)
{
 struct act8945a_pmic *VAR_10 = FUNC_1(VAR_8);
 struct regmap *VAR_11 = VAR_8->regmap;
 int VAR_12 = FUNC_2(VAR_8);
 int VAR_13, VAR_14, VAR_15 = 0;

 switch (VAR_12) {
 case 136:
  VAR_13 = VAR_0;
  break;
 case 135:
  VAR_13 = VAR_1;
  break;
 case 134:
  VAR_13 = VAR_2;
  break;
 case 133:
  VAR_13 = VAR_3;
  break;
 case 132:
  VAR_13 = VAR_4;
  break;
 case 131:
  VAR_13 = VAR_5;
  break;
 case 130:
  VAR_13 = VAR_6;
  break;
 default:
  return -VAR_7;
 }

 switch (VAR_9) {
 case 128:
  if (VAR_12 > 134)
   VAR_15 = FUNC_0(5);
  break;
 case 129:
  if (VAR_12 <= 134)
   VAR_15 = FUNC_0(5);
  break;
 default:
  return -VAR_7;
 }

 VAR_14 = FUNC_3(VAR_11, VAR_13, FUNC_0(5), VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_10->op_mode[VAR_12] = VAR_9;

 return 0;
}
