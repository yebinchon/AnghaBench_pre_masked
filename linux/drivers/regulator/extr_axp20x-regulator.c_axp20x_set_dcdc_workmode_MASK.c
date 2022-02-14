
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_dev {int regmap; } ;
struct axp20x_dev {int variant; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

 unsigned int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;

 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 struct axp20x_dev* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_13, int VAR_14, u32 VAR_15)
{
 struct axp20x_dev *VAR_16 = FUNC_3(VAR_13);
 unsigned int VAR_17 = VAR_2;
 unsigned int VAR_18;

 switch (VAR_16->variant) {
 case 135:
 case 134:
  if ((VAR_14 != VAR_0) && (VAR_14 != VAR_1))
   return -VAR_12;

  VAR_18 = VAR_3;
  if (VAR_14 == VAR_1)
   VAR_18 = VAR_4;

  VAR_15 <<= FUNC_2(VAR_18) - 1;
  break;

 case 130:




  VAR_17 = VAR_9;

 case 133:
 case 132:
 case 129:
  if (VAR_14 < VAR_5 || VAR_14 > VAR_6)
   return -VAR_12;

  VAR_18 = FUNC_0(VAR_14 - VAR_5);
  VAR_15 <<= VAR_14 - VAR_5;
  break;

 case 131:
  if (VAR_14 < VAR_7 || VAR_14 > VAR_8)
   return -VAR_12;

  VAR_18 = FUNC_0(VAR_14 - VAR_7);
  VAR_15 <<= VAR_14 - VAR_7;
  break;

 case 128:
  if (VAR_14 < VAR_10 || VAR_14 > VAR_11)
   return -VAR_12;

  VAR_18 = FUNC_0(VAR_14 - VAR_10);
  VAR_15 <<= VAR_14 - VAR_10;
  break;

 default:

  FUNC_1(1);
  return -VAR_12;
 }

 return FUNC_4(VAR_13->regmap, VAR_17, VAR_18, VAR_15);
}
