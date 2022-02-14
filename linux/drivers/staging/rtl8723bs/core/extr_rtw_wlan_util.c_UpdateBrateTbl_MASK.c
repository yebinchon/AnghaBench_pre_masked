
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;







 size_t VAR_1 ;

void FUNC_0(struct adapter *VAR_2, u8 *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = VAR_3[VAR_4] & 0x7f;
  switch (VAR_5) {
  case 133:
  case 132:
  case 131:
  case 134:
  case 128:
  case 130:
  case 129:
   VAR_3[VAR_4] |= VAR_0;
   break;
  }
 }
}
