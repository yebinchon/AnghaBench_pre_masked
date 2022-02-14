
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ tx_intr_mitigation; scalar_t__ rx_intr_mitigation; } ;
struct ath_hw {int imrs2_reg; int msi_reg; scalar_t__ msi_enabled; TYPE_1__ config; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (int ,int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct ath_hw *VAR_36,
       enum nl80211_iftype VAR_37)
{
 u32 VAR_38 = VAR_29;
 u32 VAR_39 = VAR_12 |
  VAR_16 |
  VAR_3 |
  VAR_9 |
  VAR_2;
 u32 VAR_40 = 0;

 if (FUNC_2(VAR_36) || FUNC_4(VAR_36) || FUNC_3(VAR_36) ||
     FUNC_5(VAR_36))
  VAR_38 &= ~VAR_31;

 if (FUNC_1(VAR_36)) {
  VAR_39 |= VAR_7;
  if (VAR_36->config.rx_intr_mitigation) {
   VAR_39 |= VAR_4 | VAR_5;
   VAR_40 |= VAR_18 | VAR_19;
  } else {
   VAR_39 |= VAR_8;
   VAR_40 |= VAR_20;
  }
 } else {
  if (VAR_36->config.rx_intr_mitigation) {
   VAR_39 |= VAR_4 | VAR_5;
   VAR_40 |= VAR_18 | VAR_19;
  } else {
   VAR_39 |= VAR_6;
   VAR_40 |= VAR_20;
  }
 }

 if (VAR_36->config.tx_intr_mitigation) {
  VAR_39 |= VAR_13 | VAR_14;
  VAR_40 |= VAR_21 | VAR_22;
 } else {
  VAR_39 |= VAR_15;
  VAR_40 |= VAR_23;
 }

 FUNC_6(VAR_36);

 FUNC_9(VAR_36, VAR_1, VAR_39);
 VAR_36->imrs2_reg |= VAR_11;
 FUNC_9(VAR_36, VAR_10, VAR_36->imrs2_reg);

 if (VAR_36->msi_enabled) {
  VAR_36->msi_reg = FUNC_8(VAR_36, VAR_33);
  VAR_36->msi_reg |= VAR_34;
  VAR_36->msi_reg &= VAR_35;
  FUNC_9(VAR_36, VAR_17, VAR_40);
  FUNC_11(FUNC_10(VAR_36), VAR_0,
   "value of AR_INTCFG=0x%X, msi_cfg=0x%X\n",
   FUNC_8(VAR_36, VAR_17), VAR_40);
 }

 if (!FUNC_0(VAR_36)) {
  FUNC_9(VAR_36, VAR_28, 0xFFFFFFFF);
  FUNC_9(VAR_36, VAR_30, VAR_38);
  FUNC_9(VAR_36, VAR_32, 0);
 }

 FUNC_7(VAR_36);

 if (FUNC_1(VAR_36)) {
  FUNC_9(VAR_36, VAR_24, 0);
  FUNC_9(VAR_36, VAR_25, 0);
  FUNC_9(VAR_36, VAR_26, 0);
  FUNC_9(VAR_36, VAR_27, 0);
 }
}
