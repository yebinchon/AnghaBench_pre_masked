
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee_ets {int* tc_tsa; int* tc_tx_bw; } ;





 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ieee_ets *VAR_1, u8 *VAR_2,
     u8 *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = -1;
 int VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++) {
  if (VAR_1->tc_tsa[VAR_8] == 130 &&
      !VAR_1->tc_tx_bw[VAR_8]) {
   VAR_7++;
   VAR_6 = VAR_8;
  }
 }

 if (VAR_7)
  VAR_5 = VAR_0 / VAR_7;

 for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++) {
  switch (VAR_1->tc_tsa[VAR_8]) {
  case 128:
   VAR_2[VAR_8] = VAR_0;
   break;
  case 129:
   VAR_2[VAR_8] = VAR_0;
   break;
  case 130:
   VAR_2[VAR_8] = VAR_1->tc_tx_bw[VAR_8] ?
          VAR_1->tc_tx_bw[VAR_8] :
          VAR_5;
   break;
  }
 }


 if (VAR_6 != -1)
  VAR_2[VAR_6] +=
   VAR_0 % VAR_7;
}
