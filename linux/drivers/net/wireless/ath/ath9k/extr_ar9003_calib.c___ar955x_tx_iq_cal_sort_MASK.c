
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coeff {int*** mag_coeff; int*** phs_coeff; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*,int ,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_2,
        struct coeff *VAR_3,
        int VAR_4, int VAR_5)
{
 struct ath_common *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8, VAR_9, VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_1 - 1; VAR_8++) {
   for (VAR_9 = VAR_8 + 1; VAR_9 <= VAR_1 - 1; VAR_9++) {
    if (VAR_3->mag_coeff[VAR_4][VAR_7][VAR_9] <
        VAR_3->mag_coeff[VAR_4][VAR_7][VAR_8]) {
     VAR_10 = VAR_3->mag_coeff[VAR_4][VAR_7][VAR_8];
     VAR_3->mag_coeff[VAR_4][VAR_7][VAR_8] =
      VAR_3->mag_coeff[VAR_4][VAR_7][VAR_9];
     VAR_3->mag_coeff[VAR_4][VAR_7][VAR_9] = VAR_10;
    }
    if (VAR_3->phs_coeff[VAR_4][VAR_7][VAR_9] <
        VAR_3->phs_coeff[VAR_4][VAR_7][VAR_8]) {
     VAR_10 = VAR_3->phs_coeff[VAR_4][VAR_7][VAR_8];
     VAR_3->phs_coeff[VAR_4][VAR_7][VAR_8] =
      VAR_3->phs_coeff[VAR_4][VAR_7][VAR_9];
     VAR_3->phs_coeff[VAR_4][VAR_7][VAR_9] = VAR_10;
    }
   }
  }
  VAR_3->mag_coeff[VAR_4][VAR_7][0] = VAR_3->mag_coeff[VAR_4][VAR_7][VAR_1 / 2];
  VAR_3->phs_coeff[VAR_4][VAR_7][0] = VAR_3->phs_coeff[VAR_4][VAR_7][VAR_1 / 2];

  FUNC_1(VAR_6, VAR_0,
   "IQCAL: Median [ch%d][gain%d]: mag = %d phase = %d\n",
   VAR_4, VAR_7,
   VAR_3->mag_coeff[VAR_4][VAR_7][0],
   VAR_3->phs_coeff[VAR_4][VAR_7][0]);
 }
}
