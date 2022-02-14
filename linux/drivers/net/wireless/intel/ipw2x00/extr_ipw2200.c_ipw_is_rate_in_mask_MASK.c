
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipw_priv {int rates_mask; } ;


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

__attribute__((used)) static int FUNC_0(struct ipw_priv *VAR_15, int VAR_16, u8 VAR_17)
{
 VAR_17 &= ~VAR_2;
 if (VAR_16 == VAR_0) {
  switch (VAR_17) {
  case 129:
   return VAR_15->rates_mask & VAR_13 ?
       1 : 0;
  case 128:
   return VAR_15->rates_mask & VAR_14 ?
       1 : 0;
  case 135:
   return VAR_15->
       rates_mask & VAR_7 ? 1 : 0;
  case 134:
   return VAR_15->
       rates_mask & VAR_8 ? 1 : 0;
  case 133:
   return VAR_15->
       rates_mask & VAR_9 ? 1 : 0;
  case 132:
   return VAR_15->
       rates_mask & VAR_10 ? 1 : 0;
  case 131:
   return VAR_15->
       rates_mask & VAR_11 ? 1 : 0;
  case 130:
   return VAR_15->
       rates_mask & VAR_12 ? 1 : 0;
  default:
   return 0;
  }
 }


 switch (VAR_17) {
 case 138:
  return VAR_15->rates_mask & VAR_4 ? 1 : 0;
 case 137:
  return VAR_15->rates_mask & VAR_5 ? 1 : 0;
 case 136:
  return VAR_15->rates_mask & VAR_6 ? 1 : 0;
 case 139:
  return VAR_15->rates_mask & VAR_3 ? 1 : 0;
 }


 if (VAR_16 == VAR_1)
  return 0;


 switch (VAR_17) {
 case 129:
  return VAR_15->rates_mask & VAR_13 ? 1 : 0;
 case 128:
  return VAR_15->rates_mask & VAR_14 ? 1 : 0;
 case 135:
  return VAR_15->rates_mask & VAR_7 ? 1 : 0;
 case 134:
  return VAR_15->rates_mask & VAR_8 ? 1 : 0;
 case 133:
  return VAR_15->rates_mask & VAR_9 ? 1 : 0;
 case 132:
  return VAR_15->rates_mask & VAR_10 ? 1 : 0;
 case 131:
  return VAR_15->rates_mask & VAR_11 ? 1 : 0;
 case 130:
  return VAR_15->rates_mask & VAR_12 ? 1 : 0;
 }

 return 0;
}
