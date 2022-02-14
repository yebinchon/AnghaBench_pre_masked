
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tx_corr_coeff ;
struct coeff {int*** mag_coeff; int*** phs_coeff; int* iqc_coeff; } ;
struct ath_hw {int txchainmask; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int** tx_corr_coeff; int* num_measures; int cal_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int) ;
 int VAR_12 ;
 int FUNC_7 (int**,int,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int **,int ,int) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_13,
        struct coeff *VAR_14,
        bool VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 u32 VAR_21[VAR_10][VAR_0];
 struct ath9k_hw_cal_data *VAR_22 = VAR_13->caldata;

 FUNC_9(VAR_21, 0, sizeof(VAR_21));
 for (VAR_16 = 0; VAR_16 < VAR_10 / 2; VAR_16++) {
  VAR_21[VAR_16 * 2][0] = VAR_21[(VAR_16 * 2) + 1][0] =
     FUNC_0(VAR_16);
  if (!FUNC_3(VAR_13)) {
   VAR_21[VAR_16 * 2][1] =
   VAR_21[(VAR_16 * 2) + 1][1] =
     FUNC_1(VAR_16);

   VAR_21[VAR_16 * 2][2] =
   VAR_21[(VAR_16 * 2) + 1][2] =
     FUNC_2(VAR_16);
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  if (!(VAR_13->txchainmask & (1 << VAR_16)))
   continue;
  VAR_18 = FUNC_5(VAR_13,
    VAR_8,
    VAR_1);

  if (VAR_18 > VAR_10)
   VAR_18 = VAR_10;




  if (!FUNC_4(VAR_13)) {

   if (VAR_18 > 1) {

    FUNC_7(VAR_14->mag_coeff[VAR_16],
        VAR_18,
        VAR_9);


    FUNC_7(VAR_14->phs_coeff[VAR_16],
        VAR_18,
        VAR_11);
   }
  }

  for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
   VAR_19 = VAR_14->mag_coeff[VAR_16][VAR_17][0];
   VAR_20 = VAR_14->phs_coeff[VAR_16][VAR_17][0];

   VAR_14->iqc_coeff[0] =
    (VAR_20 & 0x7f) | ((VAR_19 & 0x7f) << 7);

   if ((VAR_17 % 2) == 0)
    FUNC_6(VAR_13, VAR_21[VAR_17][VAR_16],
     VAR_6,
     VAR_14->iqc_coeff[0]);
   else
    FUNC_6(VAR_13, VAR_21[VAR_17][VAR_16],
     VAR_7,
     VAR_14->iqc_coeff[0]);

   if (VAR_22)
    VAR_22->tx_corr_coeff[VAR_17][VAR_16] =
     VAR_14->iqc_coeff[0];
  }
  if (VAR_22)
   VAR_22->num_measures[VAR_16] = VAR_18;
 }

 FUNC_6(VAR_13, VAR_4,
        VAR_5, 0x1);
 FUNC_6(VAR_13, VAR_2,
        VAR_3, 0x1);

 if (VAR_22) {
  if (VAR_15)
   FUNC_10(VAR_12, &VAR_22->cal_flags);
  else
   FUNC_8(VAR_12, &VAR_22->cal_flags);
 }

 return;
}
