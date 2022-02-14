
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct axp20x_dev {int variant; int regmap; } ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;

 int VAR_7 ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct axp20x_dev *VAR_8, int VAR_9)
{
 u32 VAR_10 = 0;





 switch (VAR_8->variant) {
 case 133:
 case 128:
  FUNC_0(VAR_8->regmap, VAR_2, &VAR_10);

  switch (VAR_9) {
  case 135:
   return !!(VAR_10 & VAR_0);
  case 134:
   return !!(VAR_10 & VAR_1);
  }
  break;

 case 129:
  FUNC_0(VAR_8->regmap, VAR_7, &VAR_10);

  switch (VAR_9) {
  case 132:
   return (((VAR_10 & VAR_3) ==
    VAR_5) ||
    ((VAR_10 & VAR_3) ==
    VAR_4));
  case 131:
   return ((VAR_10 & VAR_3) ==
    VAR_4);
  case 130:
   return !!(VAR_10 & VAR_6);
  }
  break;

 default:
  return 0;
 }

 return 0;
}
