
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct act8945a_charger {int chglev_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct act8945a_charger *VAR_12,
        struct regmap *VAR_13, int *VAR_14)
{
 int VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18;
 int VAR_19 = FUNC_0(VAR_12->chglev_gpio);

 VAR_15 = FUNC_1(VAR_13, VAR_1, &VAR_16);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_13, VAR_0, &VAR_17);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_18 = (VAR_17 & VAR_2) >> 1;

 VAR_17 &= VAR_3;
 VAR_17 >>= VAR_4;

 switch (VAR_17) {
 case 128:
  if (VAR_18) {
   if (VAR_19)
    *VAR_14 = VAR_6;
   else
    *VAR_14 = VAR_8;
  } else {
   *VAR_14 = VAR_11;
  }
  break;
 case 129:
  if (VAR_18) {
   if (VAR_19)
    *VAR_14 = VAR_5;
   else
    *VAR_14 = VAR_7;
  } else {
   if (VAR_19)
    *VAR_14 = VAR_9;
   else
    *VAR_14 = VAR_10;
  }
  break;
 case 130:
 case 131:
 default:
  *VAR_14 = 0;
  break;
 }

 return 0;
}
