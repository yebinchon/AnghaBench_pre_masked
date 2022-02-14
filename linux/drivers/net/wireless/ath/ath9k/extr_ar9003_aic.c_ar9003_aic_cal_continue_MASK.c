
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath9k_hw_aic {int* aic_sram; int aic_caled_chan; int aic_cal_state; } ;
struct ath9k_hw_mci {int config; } ;
struct TYPE_2__ {struct ath9k_hw_aic aic; struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static u8 FUNC_9(struct ath_hw *VAR_11, bool VAR_12)
{
 struct ath_common *VAR_13 = FUNC_6(VAR_11);
 struct ath9k_hw_mci *VAR_14 = &VAR_11->btcoex_hw.mci;
 struct ath9k_hw_aic *VAR_15 = &VAR_11->btcoex_hw.aic;
 int VAR_16, VAR_17;

 VAR_17 = FUNC_0(VAR_14->config, VAR_9);

 if (!VAR_17) {
  VAR_15->aic_cal_state = VAR_0;
  return VAR_15->aic_cal_state;
 }

 if (VAR_12) {
  for (VAR_16 = 0; VAR_16 < 10000; VAR_16++) {
   if ((FUNC_2(VAR_11, VAR_3) &
        VAR_2) == 0)
    break;

   FUNC_8(100);
  }
 }





 if ((FUNC_2(VAR_11, VAR_3) &
      VAR_2) != 0) {
  FUNC_7(VAR_13, VAR_10, "AIC cal is not done after 40ms");
  goto exit;
 }

 FUNC_4(VAR_11, VAR_4,
    (VAR_8 | VAR_7));

 for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
  u32 VAR_18;

  VAR_18 = FUNC_2(VAR_11, VAR_5);

  if (VAR_18 & 0x01) {
   if (VAR_15->aic_sram[VAR_16] == 0)
    VAR_15->aic_caled_chan++;

   VAR_15->aic_sram[VAR_16] = VAR_18;

   if (!VAR_12)
    break;
  }
 }

 if ((VAR_15->aic_caled_chan >= VAR_17) || VAR_12) {
  FUNC_5(VAR_11);
 } else {

  FUNC_1(VAR_11, VAR_3, VAR_2);
  FUNC_3(VAR_11, VAR_3,
       VAR_1);
  FUNC_3(VAR_11, VAR_3, VAR_2);
 }
exit:
 return VAR_15->aic_cal_state;

}
