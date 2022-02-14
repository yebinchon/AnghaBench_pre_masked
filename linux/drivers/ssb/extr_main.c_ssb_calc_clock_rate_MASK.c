
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;







 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

u32 FUNC_2(u32 VAR_21, u32 VAR_22, u32 VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

 VAR_24 = (VAR_22 & VAR_10);
 VAR_25 = ((VAR_22 & VAR_11) >> VAR_12);

 switch (VAR_21) {
 case 129:
  if (VAR_23 & VAR_20)
   return VAR_19;
  return VAR_18;
 case 134:
 case 132:
 case 131:
 case 128:
  VAR_24 = FUNC_1(VAR_24);
  VAR_25 += VAR_2;
  break;
 case 133:
  VAR_24 += VAR_17;
  VAR_25 += VAR_17;
  FUNC_0(!((VAR_24 >= 2) && (VAR_24 <= 7)));
  FUNC_0(!((VAR_25 >= 5) && (VAR_25 <= 23)));
  break;
 case 130:
  return 100000000;
 default:
  FUNC_0(1);
 }

 switch (VAR_21) {
 case 132:
 case 128:
  VAR_26 = VAR_1 * VAR_24 * VAR_25;
  break;
 default:
  VAR_26 = VAR_0 * VAR_24 * VAR_25;
 }
 if (!VAR_26)
  return 0;

 VAR_27 = (VAR_23 & VAR_3);
 VAR_28 = ((VAR_23 & VAR_4) >> VAR_5);
 VAR_29 = ((VAR_23 & VAR_6) >> VAR_7);
 VAR_30 = ((VAR_23 & VAR_8) >> VAR_9);

 switch (VAR_21) {
 case 134:
 case 132:
 case 131:
 case 128:
  VAR_27 = FUNC_1(VAR_27);
  if ((VAR_21 == 134) ||
      (VAR_21 == 132))
   VAR_28 += VAR_2;
  else
   VAR_28 = FUNC_1(VAR_28);
  VAR_29 = FUNC_1(VAR_29);

  switch (VAR_30) {
  case 139:
   return VAR_26;
  case 138:
   return (VAR_26 / VAR_27);
  case 137:
   return (VAR_26 / (VAR_27 * VAR_28));
  case 136:
   return (VAR_26 / (VAR_27 * VAR_28 * VAR_29));
  case 135:
   return (VAR_26 / (VAR_27 * VAR_29));
  }
  return 0;
 case 133:
  VAR_27 += VAR_17;
  VAR_28 += VAR_13;
  VAR_29 += VAR_17;
  FUNC_0(!((VAR_27 >= 2) && (VAR_27 <= 7)));
  FUNC_0(!((VAR_28 >= 3) && (VAR_28 <= 10)));
  FUNC_0(!((VAR_29 >= 2) && (VAR_29 <= 7)));

  if (!(VAR_30 & VAR_14))
   VAR_26 /= VAR_27;
  if (!(VAR_30 & VAR_15))
   VAR_26 /= VAR_28;
  if (!(VAR_30 & VAR_16))
   VAR_26 /= VAR_29;
  return VAR_26;
 default:
  FUNC_0(1);
 }
 return 0;
}
