
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee_ets {int* tc_tsa; scalar_t__* tc_tx_bw; } ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ieee_ets *VAR_2, u8 *VAR_3, int VAR_4)
{
 bool VAR_5 = 0;
 bool VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++) {
  if (VAR_2->tc_tsa[VAR_8] == 130) {
   VAR_5 = 1;
   if (!VAR_2->tc_tx_bw[VAR_8])
    VAR_6 = 1;
  }
 }


 VAR_7 = VAR_0;
 if (VAR_5)
  VAR_7++;
 if (VAR_6)
  VAR_7++;

 for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++) {
  switch (VAR_2->tc_tsa[VAR_8]) {
  case 128:
   VAR_3[VAR_8] = VAR_1;
   break;
  case 129:
   VAR_3[VAR_8] = VAR_7++;
   break;
  case 130:
   VAR_3[VAR_8] = VAR_0;
   if (VAR_2->tc_tx_bw[VAR_8] && VAR_6)
    VAR_3[VAR_8] = VAR_0 + 1;
   break;
  }
 }
}
