
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* txp_pd_table; int** tmpL; int txp_min_idx; } ;
struct ath5k_hw {TYPE_1__ ah_txpower; } ;
typedef int s16 ;



__attribute__((used)) static void
FUNC_0(struct ath5k_hw *VAR_0, s16* VAR_1,
      s16 *VAR_2, u8 VAR_3)
{
 u8 *VAR_4 = VAR_0->ah_txpower.txp_pd_table;
 u8 *VAR_5;
 u8 *VAR_6;
 u8 *VAR_7;
 u8 VAR_8;
 s16 VAR_9;
 s16 VAR_10;
 s16 VAR_11 = 0;






 u8 VAR_12;
 int VAR_13;





 if (VAR_3 > 1) {
  VAR_5 = VAR_0->ah_txpower.tmpL[1];
  VAR_6 = VAR_0->ah_txpower.tmpL[0];
  VAR_11 = VAR_2[1] - VAR_1[1] - 1;
  VAR_9 = (VAR_2[0] - VAR_1[0]) / 2;




  if (VAR_2[0] - VAR_1[1] > 126)
   VAR_10 = VAR_2[0] - 126;
  else
   VAR_10 = VAR_1[1];



  VAR_7 = VAR_6;

  VAR_12 = 0x40;
 } else {
  VAR_5 = VAR_0->ah_txpower.tmpL[1];
  VAR_6 = VAR_0->ah_txpower.tmpL[0];
  VAR_10 = VAR_1[0];
  VAR_9 = (VAR_2[0] - VAR_1[0]) / 2;
  VAR_7 = VAR_6;
  VAR_12 = 0;
 }


 VAR_0->ah_txpower.txp_min_idx = VAR_10 / 2;


 VAR_8 = VAR_9;
 for (VAR_13 = 63; VAR_13 >= 0; VAR_13--) {



  if (VAR_12 == 0x40 &&
  (2 * VAR_8 <= (VAR_2[1] - VAR_1[0]) || VAR_8 == 0)) {
   VAR_12 = 0x00;
   VAR_7 = VAR_5;
   VAR_8 = VAR_11 / 2;
  }





  if (VAR_7[VAR_8] < 1 && (VAR_12 == 0x00)) {
   while (VAR_13 >= 0) {
    VAR_4[VAR_13] = VAR_4[VAR_13 + 1];
    VAR_13--;
   }
   break;
  }

  VAR_4[VAR_13] = VAR_7[VAR_8] | VAR_12;




  if (VAR_4[VAR_13] > 126)
   VAR_4[VAR_13] = 126;


  VAR_8--;
 }
}
