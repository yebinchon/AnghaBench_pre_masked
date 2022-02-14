
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
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regmap*,int,int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_11)
{
 struct regmap *VAR_12 = VAR_11->regmap;
 int VAR_13 = FUNC_1(VAR_11);
 int VAR_14, VAR_15, VAR_16 = 0;

 switch (VAR_13) {
 case 134:
  VAR_14 = VAR_0;
  break;
 case 133:
  VAR_14 = VAR_1;
  break;
 case 132:
  VAR_14 = VAR_2;
  break;
 case 131:
  VAR_14 = VAR_3;
  break;
 case 130:
  VAR_14 = VAR_4;
  break;
 case 129:
  VAR_14 = VAR_5;
  break;
 case 128:
  VAR_14 = VAR_6;
  break;
 default:
  return -VAR_7;
 }

 VAR_15 = FUNC_2(VAR_12, VAR_14, &VAR_16);
 if (VAR_15)
  return VAR_15;

 if (VAR_13 <= 132 && (VAR_16 & FUNC_0(5)))
  return VAR_8;
 else if (VAR_13 > 132 && !(VAR_16 & FUNC_0(5)))
  return VAR_9;
 else
  return VAR_10;
}
