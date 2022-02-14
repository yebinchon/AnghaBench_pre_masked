
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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

void FUNC_0(struct adapter *VAR_14, u8 *VAR_15, u16 *VAR_16)
{
 u8 VAR_17, VAR_18, VAR_19;

 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++) {

  VAR_18 = VAR_15[VAR_17] & VAR_0;
  VAR_19 = VAR_15[VAR_17] & 0x7f;

  if (VAR_18) {
   switch (VAR_19) {
   case 138:
    *VAR_16 |= VAR_5;
    break;
   case 137:
    *VAR_16 |= VAR_7;
    break;
   case 136:
    *VAR_16 |= VAR_11;
    break;
   case 139:
    *VAR_16 |= VAR_2;
    break;
   case 129:
    *VAR_16 |= VAR_12;
    break;
   case 128:
    *VAR_16 |= VAR_13;
    break;
   case 135:
    *VAR_16 |= VAR_3;
    break;
   case 134:
    *VAR_16 |= VAR_4;
    break;
   case 133:
    *VAR_16 |= VAR_6;
    break;
   case 132:
    *VAR_16 |= VAR_8;
    break;
   case 131:
    *VAR_16 |= VAR_9;
    break;
   case 130:
    *VAR_16 |= VAR_10;
    break;
   }
  }
 }
}
