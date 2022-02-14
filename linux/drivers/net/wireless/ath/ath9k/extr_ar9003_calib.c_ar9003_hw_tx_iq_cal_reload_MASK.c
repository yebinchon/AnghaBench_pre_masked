
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tx_corr_coeff ;
struct ath_hw {int txchainmask; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int* num_measures; int** tx_corr_coeff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hw*) ;
 int VAR_7 ;
 int FUNC_4 (struct ath_hw*,int ,int ,int) ;
 int FUNC_5 (int **,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_8)
{
 struct ath9k_hw_cal_data *VAR_9 = VAR_8->caldata;
 u32 VAR_10[VAR_7][VAR_0];
 int VAR_11, VAR_12;

 FUNC_5(VAR_10, 0, sizeof(VAR_10));
 for (VAR_11 = 0; VAR_11 < VAR_7 / 2; VAR_11++) {
  VAR_10[VAR_11 * 2][0] = VAR_10[(VAR_11 * 2) + 1][0] =
     FUNC_0(VAR_11);
  if (!FUNC_3(VAR_8)) {
   VAR_10[VAR_11 * 2][1] =
   VAR_10[(VAR_11 * 2) + 1][1] =
     FUNC_1(VAR_11);

   VAR_10[VAR_11 * 2][2] =
   VAR_10[(VAR_11 * 2) + 1][2] =
     FUNC_2(VAR_11);
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (!(VAR_8->txchainmask & (1 << VAR_11)))
   continue;

  for (VAR_12 = 0; VAR_12 < VAR_9->num_measures[VAR_11]; VAR_12++) {
   if ((VAR_12 % 2) == 0)
    FUNC_4(VAR_8, VAR_10[VAR_12][VAR_11],
         VAR_5,
         VAR_9->tx_corr_coeff[VAR_12][VAR_11]);
   else
    FUNC_4(VAR_8, VAR_10[VAR_12][VAR_11],
         VAR_6,
         VAR_9->tx_corr_coeff[VAR_12][VAR_11]);
  }
 }

 FUNC_4(VAR_8, VAR_3,
        VAR_4, 0x1);
 FUNC_4(VAR_8, VAR_1,
        VAR_2, 0x1);
}
