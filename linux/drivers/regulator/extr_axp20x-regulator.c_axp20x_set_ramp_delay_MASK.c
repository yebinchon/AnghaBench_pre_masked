
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct axp20x_dev {int variant; int regmap; int dev; } ;


 int FUNC_0 (int*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int FUNC_2 (int ,char*,int) ;
 struct axp20x_dev* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_12, int VAR_13)
{
 struct axp20x_dev *VAR_14 = FUNC_3(VAR_12);
 int VAR_15 = FUNC_4(VAR_12);
 u8 VAR_16, VAR_17, VAR_18, VAR_19 = 0xff;
 const int *VAR_20;
 int VAR_21 = 0;

 switch (VAR_14->variant) {
 case 128:
  if (VAR_15 == VAR_0) {
   VAR_20 = VAR_11;
   VAR_21 = FUNC_0(VAR_11);
   VAR_16 = VAR_1;
   VAR_17 = VAR_4 |
          VAR_3;
   VAR_18 = (VAR_13 > 0) ?
     VAR_2 :
     !VAR_2;
   break;
  }

  if (VAR_15 == VAR_8) {
   VAR_20 = VAR_11;
   VAR_21 = FUNC_0(VAR_11);
   VAR_16 = VAR_1;
   VAR_17 = VAR_7 |
          VAR_6;
   VAR_18 = (VAR_13 > 0) ?
     VAR_5 :
     !VAR_5;
   break;
  }

  if (VAR_21 > 0)
   break;


 default:

  return -VAR_10;
 }

 if (VAR_13 == 0) {
  VAR_19 = VAR_18;
 } else {
  int VAR_22;

  for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
   if (VAR_13 <= VAR_20[VAR_22])
    VAR_19 = FUNC_1(VAR_22);
   else
    break;
  }

  if (VAR_19 == 0xff) {
   FUNC_2(VAR_14->dev, "unsupported ramp value %d", VAR_13);
   return -VAR_9;
  }

  VAR_19 |= VAR_18;
 }

 return FUNC_5(VAR_14->regmap, VAR_16, VAR_17, VAR_19);
}
