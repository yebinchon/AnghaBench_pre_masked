
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct act8945a_charger {int lbo_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct act8945a_charger *VAR_14,
           struct regmap *VAR_15, int *VAR_16)
{
 int VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20;
 int VAR_21 = FUNC_0(VAR_14->lbo_gpio);

 VAR_17 = FUNC_1(VAR_15, VAR_2, &VAR_18);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_15, VAR_0, &VAR_20);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_1(VAR_15, VAR_1, &VAR_19);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_19 &= VAR_4;
 VAR_19 >>= VAR_5;

 switch (VAR_19) {
 case 128:
  *VAR_16 = VAR_11;
  break;
 case 129:
  if (VAR_21)
   *VAR_16 = VAR_10;
  else
   *VAR_16 = VAR_11;
  break;
 case 130:
  if (VAR_18 & VAR_6)
   *VAR_16 = VAR_9;
  else
   *VAR_16 = VAR_12;
  break;
 case 131:
 default:
  if (VAR_20 & VAR_3) {
   *VAR_16 = VAR_13;
  } else {
   *VAR_16 = VAR_12;
   if (!(VAR_18 & VAR_7)) {
    if (!VAR_21)
     *VAR_16 = VAR_8;
   }
  }
  break;
 }

 return 0;
}
