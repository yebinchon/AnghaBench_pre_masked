
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_14, int *VAR_15)
{
 int VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19;

 VAR_16 = FUNC_0(VAR_14, VAR_2, &VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_0(VAR_14, VAR_0, &VAR_19);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_0(VAR_14, VAR_1, &VAR_18);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_18 &= VAR_4;
 VAR_18 >>= VAR_5;

 switch (VAR_18) {
 case 131:
  if (VAR_19 & VAR_3) {
   *VAR_15 = VAR_13;
  } else if (VAR_17 & VAR_6) {
   if (!(VAR_17 & VAR_7))
    *VAR_15 = VAR_10;
   else if (VAR_17 & VAR_8)
    *VAR_15 = VAR_12;
   else
    *VAR_15 = VAR_11;
  } else {
   *VAR_15 = VAR_9;
  }
  break;
 case 128:
 case 129:
 case 130:
 default:
  *VAR_15 = VAR_9;
  break;
 }

 return 0;
}
