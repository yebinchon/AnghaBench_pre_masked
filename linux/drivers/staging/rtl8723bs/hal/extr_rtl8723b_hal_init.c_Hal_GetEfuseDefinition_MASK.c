
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
__attribute__((used)) static void FUNC_0(
 struct adapter *VAR_10,
 u8 VAR_11,
 u8 VAR_12,
 void *VAR_13,
 bool VAR_14
)
{
 switch (VAR_12) {
 case 130:
  {
   u8 *VAR_15;
   VAR_15 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_15 = VAR_5;
   else
    *VAR_15 = VAR_1;
  }
  break;

 case 128:
  {
   u16 *VAR_16;
   VAR_16 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_16 = VAR_8;
   else
    *VAR_16 = VAR_3;
  }
  break;

 case 134:
  {
   u16 *VAR_17;
   VAR_17 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_17 = (VAR_8-VAR_6);
   else
    *VAR_17 = (VAR_2-VAR_7);
  }
  break;

 case 133:
  {
   u16 *VAR_18;
   VAR_18 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_18 = (VAR_8-VAR_6);
   else
    *VAR_18 = (VAR_3-(VAR_7*3));
  }
  break;

 case 131:
  {
   u16 *VAR_19;
   VAR_19 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_19 = VAR_4;
   else
    *VAR_19 = VAR_0;
  }
  break;

 case 129:
  {
   u8 *VAR_20;
   VAR_20 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_20 = VAR_6;
   else
    *VAR_20 = VAR_7;
  }
  break;

 case 132:
  {
   u16 *VAR_21;
   VAR_21 = VAR_13;

   if (VAR_11 == VAR_9)
    *VAR_21 = VAR_8;
   else
    *VAR_21 = VAR_2;
  }
  break;

 default:
  {
   u8 *VAR_22;
   VAR_22 = VAR_13;
   *VAR_22 = 0;
  }
  break;
 }
}
