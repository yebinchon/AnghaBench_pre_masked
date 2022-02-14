
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hw_caps; int tx_chainmask; int rx_chainmask; } ;
struct ath_hw {int ah_flags; int enabled_cals; int txchainmask; int rxchainmask; TYPE_1__ caps; struct ath9k_hw_cal_data* caldata; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {int cal_flags; } ;
struct ath9k_channel {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct ath_hw*,int) ;
 int FUNC_9 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (struct ath_hw*) ;
 int FUNC_16 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_17 (struct ath_hw*,int) ;
 int FUNC_18 (struct ath_hw*,int ,int ) ;
 int FUNC_19 (struct ath_hw*,int ,int) ;
 int FUNC_20 (struct ath_hw*) ;
 int FUNC_21 (struct ath_hw*) ;
 int FUNC_22 (struct ath_hw*,int*) ;
 struct ath_common* FUNC_23 (struct ath_hw*) ;
 scalar_t__ FUNC_24 (struct ath_hw*) ;
 int FUNC_25 (struct ath_hw*) ;
 int FUNC_26 (struct ath_hw*) ;
 int FUNC_27 (struct ath_hw*,int ,int,int ,int) ;
 int FUNC_28 (struct ath_common*,int ,char*,...) ;
 int FUNC_29 (struct ath_common*,char*) ;
 scalar_t__ FUNC_30 (int ,int *) ;
 int FUNC_31 (int) ;

__attribute__((used)) static bool FUNC_32(struct ath_hw *VAR_27,
         struct ath9k_channel *VAR_28)
{
 struct ath_common *VAR_29 = FUNC_23(VAR_27);
 struct ath9k_hw_cal_data *VAR_30 = VAR_27->caldata;
 bool VAR_31 = 0;
 bool VAR_32 = 1, VAR_33 = 1;
 bool VAR_34 = 0, VAR_35;
 bool VAR_36 = !!(VAR_27->caps.hw_caps & VAR_18);
 u32 VAR_37 = 0;
 u32 VAR_38 = 0, VAR_39 = VAR_8 |
       VAR_7 |
       VAR_9;


 FUNC_18(VAR_27, VAR_27->caps.rx_chainmask, VAR_27->caps.tx_chainmask);

 if (VAR_36) {
  if (!FUNC_16(VAR_27, VAR_28))
   VAR_34 = 1;

  if (VAR_34)
   FUNC_28(VAR_29, VAR_19, "RTT calibration to be done\n");
 }

 VAR_35 = VAR_34;

 if (VAR_34) {
  FUNC_13(VAR_27);
  FUNC_17(VAR_27, 0x00);
  FUNC_11(VAR_27);
 }

 if (VAR_36) {
  if (!VAR_34) {
   VAR_38 = FUNC_4(VAR_27, VAR_5);
   VAR_39 &= VAR_38;
   VAR_38 &= ~(VAR_8 |
          VAR_7 |
          VAR_9);
   FUNC_7(VAR_27, VAR_5, VAR_38);
  } else {
   if (VAR_27->ah_flags & VAR_0)
    VAR_35 = 1;
  }
 }

 if (VAR_27->enabled_cals & VAR_24) {
  if (VAR_30 && FUNC_30(VAR_22, &VAR_30->cal_flags))
   FUNC_3(VAR_27, VAR_10,
        VAR_11);
  else {
   FUNC_6(VAR_27, VAR_10,
        VAR_11);
   VAR_35 = 1;
  }
 }

 if ((FUNC_1(VAR_28) || FUNC_2(VAR_28)) ||
     !(VAR_27->enabled_cals & VAR_25))
  goto skip_tx_iqcal;


 FUNC_5(VAR_27, VAR_16,
        VAR_17,
        VAR_20);





 if (VAR_27->enabled_cals & VAR_26) {
  if (VAR_30 && !FUNC_30(VAR_23, &VAR_30->cal_flags))
   FUNC_6(VAR_27, VAR_14,
        VAR_15);
  else
   FUNC_3(VAR_27, VAR_14,
        VAR_15);
  VAR_31 = VAR_35 = 1;
 }

skip_tx_iqcal:
 if (FUNC_24(VAR_27) && FUNC_0(VAR_28) && VAR_35)
  FUNC_22(VAR_27, &VAR_32);

 if (FUNC_4(VAR_27, VAR_10) & VAR_11) {
  VAR_37 = FUNC_4(VAR_27, VAR_12);

  FUNC_7(VAR_27, VAR_2, VAR_3);
  FUNC_31(5);
  FUNC_7(VAR_27, VAR_12, VAR_13);
  FUNC_7(VAR_27, VAR_2, VAR_4);
 }

 if (VAR_35 || !(VAR_27->ah_flags & VAR_0)) {

  FUNC_7(VAR_27, VAR_5,
     FUNC_4(VAR_27, VAR_5) |
     VAR_6);


  VAR_33 = FUNC_27(VAR_27, VAR_5,
           VAR_6,
           0, VAR_1);

  FUNC_9(VAR_27, VAR_28, VAR_34);
 }

 if (FUNC_4(VAR_27, VAR_10) & VAR_11) {
  FUNC_7(VAR_27, VAR_12, VAR_37);
  FUNC_31(5);
 }

 if (FUNC_24(VAR_27) && FUNC_0(VAR_28) && VAR_35)
  FUNC_21(VAR_27);

 if (VAR_36 && !VAR_34) {
  VAR_38 |= VAR_39;
  FUNC_7(VAR_27, VAR_5, VAR_38);
 }

 if (!VAR_33) {
  if (VAR_34)
   FUNC_12(VAR_27);

  FUNC_28(VAR_29, VAR_19,
   "offset calibration failed to complete in %d ms; noisy environment?\n",
   VAR_1 / 1000);
  return 0;
 }

 if (VAR_31)
  FUNC_19(VAR_27, 0, VAR_32);
 else if (VAR_30 && FUNC_30(VAR_23, &VAR_30->cal_flags))
  FUNC_20(VAR_27);

 FUNC_8(VAR_27, VAR_32);

 if (VAR_34 && VAR_30) {
  if (VAR_32) {
   if (!FUNC_26(VAR_27)) {
    FUNC_29(FUNC_23(VAR_27),
     "Could not stop baseband\n");
   } else {
    FUNC_14(VAR_27);

    if (FUNC_30(VAR_21, &VAR_30->cal_flags))
     FUNC_15(VAR_27);
   }

   FUNC_25(VAR_27);
  }

  FUNC_12(VAR_27);
 }


 FUNC_18(VAR_27, VAR_27->rxchainmask, VAR_27->txchainmask);

 FUNC_10(VAR_27);

 return 1;
}
