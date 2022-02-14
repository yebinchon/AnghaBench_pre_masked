
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {struct regmap* regmap; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_8, bool VAR_9)
{
 struct regmap *VAR_10 = VAR_8->regmap;
 int VAR_11 = FUNC_1(VAR_8);
 int VAR_12, VAR_13;

 switch (VAR_11) {
 case 134:
  VAR_12 = VAR_0;
  VAR_13 = 0xa8;
  break;
 case 133:
  VAR_12 = VAR_1;
  VAR_13 = 0xa8;
  break;
 case 132:
  VAR_12 = VAR_2;
  VAR_13 = 0xa8;
  break;
 case 131:
  VAR_12 = VAR_3;
  VAR_13 = 0xe8;
  break;
 case 130:
  VAR_12 = VAR_4;
  VAR_13 = 0xe8;
  break;
 case 129:
  VAR_12 = VAR_5;
  VAR_13 = 0xe8;
  break;
 case 128:
  VAR_12 = VAR_6;
  VAR_13 = 0xe8;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_9)
  VAR_13 |= FUNC_0(4);





 return FUNC_2(VAR_10, VAR_12, VAR_13);
}
