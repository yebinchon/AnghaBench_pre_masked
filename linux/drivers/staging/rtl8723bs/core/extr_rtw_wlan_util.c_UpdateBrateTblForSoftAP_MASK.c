
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;


 size_t VAR_0 ;





void FUNC_0(u8 *VAR_1, u32 VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = VAR_1[VAR_3] & 0x7f;
  switch (VAR_4) {
  case 130:
  case 129:
  case 128:
  case 131:
   VAR_1[VAR_3] |= VAR_0;
   break;
  }
 }
}
