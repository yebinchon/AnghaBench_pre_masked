
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hw_hang_checks; scalar_t__ rx_intr_mitigation; scalar_t__ tx_intr_mitigation; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {int imask; int msi_mask; int imrs2_reg; TYPE_1__ config; scalar_t__ txeol_interrupt_mask; scalar_t__ txerr_interrupt_mask; scalar_t__ txdesc_interrupt_mask; scalar_t__ txok_interrupt_mask; scalar_t__ msi_enabled; struct ath9k_hw_capabilities caps; } ;
struct ath_common {int dummy; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*,...) ;

void FUNC_8(struct ath_hw *VAR_50)
{
 enum ath9k_int VAR_51 = VAR_50->imask;
 u32 VAR_52, VAR_53;
 struct ath9k_hw_capabilities *VAR_54 = &VAR_50->caps;
 struct ath_common *VAR_55 = FUNC_5(VAR_50);

 if (!(VAR_51 & VAR_41))
  FUNC_6(VAR_50);

 if (VAR_50->msi_enabled) {
  FUNC_7(VAR_55, VAR_49, "Clearing AR_INTR_PRIO_ASYNC_ENABLE\n");

  FUNC_4(VAR_50, VAR_28, 0);
  FUNC_2(VAR_50, VAR_28);
 }

 FUNC_7(VAR_55, VAR_49, "New interrupt mask 0x%x\n", VAR_51);

 VAR_52 = VAR_51 & VAR_36;
 VAR_53 = 0;

 VAR_50->msi_mask = 0;
 if (VAR_51 & VAR_47) {
  VAR_50->msi_mask |= VAR_31;
  if (VAR_50->config.tx_intr_mitigation)
   VAR_52 |= VAR_26 | VAR_25;
  else {
   if (VAR_50->txok_interrupt_mask)
    VAR_52 |= VAR_27;
   if (VAR_50->txdesc_interrupt_mask)
    VAR_52 |= VAR_22;
  }
  if (VAR_50->txerr_interrupt_mask)
   VAR_52 |= VAR_24;
  if (VAR_50->txeol_interrupt_mask)
   VAR_52 |= VAR_23;
 }
 if (VAR_51 & VAR_43) {
  VAR_50->msi_mask |= VAR_30 | VAR_29;
  if (FUNC_0(VAR_50)) {
   VAR_52 |= VAR_4 | VAR_8;
   if (VAR_50->config.rx_intr_mitigation) {
    VAR_52 &= ~VAR_9;
    VAR_52 |= VAR_6 | VAR_5;
   } else {
    VAR_52 |= VAR_9;
   }
  } else {
   if (VAR_50->config.rx_intr_mitigation)
    VAR_52 |= VAR_6 | VAR_5;
   else
    VAR_52 |= VAR_7 | VAR_3;
  }
  if (!(VAR_54->hw_caps & VAR_32))
   VAR_52 |= VAR_2;
 }

 if (VAR_51 & VAR_40)
  VAR_52 |= VAR_2;

 if (VAR_51 & (VAR_34)) {
  VAR_52 |= VAR_1;
  if (VAR_51 & VAR_44)
   VAR_53 |= VAR_18;
  if (VAR_51 & VAR_38)
   VAR_53 |= VAR_15;
  if (VAR_51 & VAR_39)
   VAR_53 |= VAR_16;
  if (VAR_51 & VAR_35)
   VAR_53 |= VAR_12;
  if (VAR_51 & VAR_46)
   VAR_53 |= VAR_19;
 }

 if (VAR_51 & (VAR_42 | VAR_37)) {
  VAR_52 |= VAR_1;
  if (VAR_51 & VAR_42)
   VAR_53 |= VAR_17;
  if (VAR_51 & VAR_37)
   VAR_53 |= VAR_14;
 }

 if (VAR_50->config.hw_hang_checks & VAR_48) {
  if (VAR_51 & VAR_33) {
   VAR_52 |= VAR_1;
   VAR_53 |= VAR_11;
  }
 }

 FUNC_7(VAR_55, VAR_49, "new IMR 0x%x\n", VAR_52);
 FUNC_4(VAR_50, VAR_0, VAR_52);
 VAR_50->imrs2_reg &= ~(VAR_18 |
      VAR_15 |
      VAR_16 |
      VAR_12 |
      VAR_13 |
      VAR_19 |
      VAR_17 |
      VAR_14);

 if (VAR_50->config.hw_hang_checks & VAR_48) {
  if (VAR_51 & VAR_33)
   VAR_50->imrs2_reg &= ~VAR_11;
 }

 VAR_50->imrs2_reg |= VAR_53;
 FUNC_4(VAR_50, VAR_10, VAR_50->imrs2_reg);

 if (!(VAR_54->hw_caps & VAR_32)) {
  if (VAR_51 & VAR_45)
   FUNC_3(VAR_50, VAR_20, VAR_21);
  else
   FUNC_1(VAR_50, VAR_20, VAR_21);
 }

 return;
}
