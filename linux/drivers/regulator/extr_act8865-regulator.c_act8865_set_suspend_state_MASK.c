
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct regmap*,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_8, bool VAR_9)
{
 struct regmap *VAR_10 = VAR_8->regmap;
 int VAR_11 = VAR_8->desc->id, VAR_12, VAR_13;

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





 return FUNC_1(VAR_10, VAR_12, VAR_13);
}
