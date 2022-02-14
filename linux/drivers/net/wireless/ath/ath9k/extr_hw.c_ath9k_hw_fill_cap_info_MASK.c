
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath_regulatory {int current_rd; } ;
struct TYPE_4__ {int max_patterns; } ;
struct TYPE_6__ {scalar_t__ subvendorid; scalar_t__ devid; } ;
struct ath9k_hw_capabilities {int hw_caps; int chip_chainmask; int tx_chainmask; int rx_chainmask; int rts_aggr_limit; int rx_status_len; int tx_desc_len; int txs_len; int max_rxchains; int max_txchains; int rx_lp_qdepth; int rx_hp_qdepth; } ;
struct ath_hw {scalar_t__ opmode; int txchainmask; int rxchainmask; int rfsilent; int ent_mode; TYPE_1__ wow; TYPE_2__* eep_ops; void* rfkill_polarity; void* rfkill_gpio; TYPE_3__ hw_version; int misc_mode; scalar_t__ disable_2ghz; scalar_t__ disable_5ghz; struct ath9k_hw_capabilities caps; } ;
struct ath_desc {int dummy; } ;
struct ath_common {int crypt_caps; } ;
struct ar9003_txs {int dummy; } ;
struct ar9003_txc {int dummy; } ;
struct ar9003_rxs {int dummy; } ;
struct TYPE_5__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 scalar_t__ FUNC_8 (struct ath_hw*) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 scalar_t__ FUNC_10 (struct ath_hw*) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 scalar_t__ FUNC_12 (struct ath_hw*) ;
 scalar_t__ FUNC_13 (struct ath_hw*) ;
 scalar_t__ FUNC_14 (struct ath_hw*) ;
 scalar_t__ FUNC_15 (struct ath_hw*) ;
 scalar_t__ FUNC_16 (struct ath_hw*) ;
 scalar_t__ FUNC_17 (struct ath_hw*) ;
 scalar_t__ VAR_8 ;
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
 int FUNC_18 (int ) ;
 int VAR_30 ;
 int VAR_31 ;
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
 void* FUNC_19 (int,int ) ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int FUNC_20 (struct ath_hw*,int ) ;
 int FUNC_21 (struct ath_hw*) ;
 struct ath_common* FUNC_22 (struct ath_hw*) ;
 scalar_t__ FUNC_23 (struct ath_hw*) ;
 scalar_t__ FUNC_24 (struct ath_hw*,int ) ;
 struct ath_regulatory* FUNC_25 (struct ath_hw*) ;
 int FUNC_26 (struct ath_common*,int ,char*,int) ;
 int FUNC_27 (struct ath_common*,char*) ;
 int FUNC_28 (struct ath_common*,char*) ;
 int FUNC_29 (struct ath_common*,char*) ;
 void* FUNC_30 (int,int) ;
 int FUNC_31 (struct ath_hw*,int ) ;
 int FUNC_32 (struct ath_hw*,int ) ;
 int FUNC_33 (struct ath_hw*,int ) ;
 int FUNC_34 (struct ath_hw*,int ) ;
 int FUNC_35 (struct ath_hw*,int ) ;
 int FUNC_36 (struct ath_hw*,int ) ;
 int FUNC_37 (struct ath_hw*,int ) ;
 int FUNC_38 (struct ath_hw*,int ) ;
 int FUNC_39 (struct ath_hw*,int ) ;
 int FUNC_40 (struct ath_hw*,int ) ;

int FUNC_41(struct ath_hw *VAR_47)
{
 struct ath9k_hw_capabilities *VAR_48 = &VAR_47->caps;
 struct ath_regulatory *VAR_49 = FUNC_25(VAR_47);
 struct ath_common *VAR_50 = FUNC_22(VAR_47);

 u16 VAR_51;
 u8 VAR_52, VAR_53, VAR_54;

 VAR_51 = VAR_47->eep_ops->get_eeprom(VAR_47, VAR_35);
 VAR_49->current_rd = VAR_51;

 if (VAR_47->opmode != VAR_45 &&
     VAR_47->hw_version.subvendorid == VAR_8) {
  if (VAR_49->current_rd == 0x64 ||
      VAR_49->current_rd == 0x65)
   VAR_49->current_rd += 5;
  else if (VAR_49->current_rd == 0x41)
   VAR_49->current_rd = 0x43;
  FUNC_26(VAR_50, VAR_46, "regdomain mapped to 0x%x\n",
   VAR_49->current_rd);
 }

 VAR_51 = VAR_47->eep_ops->get_eeprom(VAR_47, VAR_33);

 if (VAR_51 & VAR_2) {
  if (VAR_47->disable_5ghz)
   FUNC_29(VAR_50, "disabling 5GHz band\n");
  else
   VAR_48->hw_caps |= VAR_11;
 }

 if (VAR_51 & VAR_3) {
  if (VAR_47->disable_2ghz)
   FUNC_29(VAR_50, "disabling 2GHz band\n");
  else
   VAR_48->hw_caps |= VAR_9;
 }

 if ((VAR_48->hw_caps & (VAR_9 | VAR_11)) == 0) {
  FUNC_27(VAR_50, "both bands are disabled\n");
  return -VAR_42;
 }

 FUNC_21(VAR_47);

 if (FUNC_13(VAR_47) ||
     FUNC_6(VAR_47) ||
     FUNC_9(VAR_47) ||
     FUNC_16(VAR_47))
  VAR_48->chip_chainmask = 1;
 else if (!FUNC_5(VAR_47))
  VAR_48->chip_chainmask = 7;
 else if (!FUNC_8(VAR_47) ||
   FUNC_10(VAR_47) ||
   FUNC_11(VAR_47) ||
   FUNC_14(VAR_47))
  VAR_48->chip_chainmask = 3;
 else
  VAR_48->chip_chainmask = 7;

 VAR_48->tx_chainmask = VAR_47->eep_ops->get_eeprom(VAR_47, VAR_41);




 if ((VAR_47->hw_version.devid == VAR_1) &&
     !(VAR_51 & VAR_2) &&
     !(FUNC_2(VAR_47)))

  VAR_48->rx_chainmask = FUNC_24(VAR_47, 0) ? 0x5 : 0x7;
 else if (FUNC_0(VAR_47))
  VAR_48->rx_chainmask = 0x7;
 else

  VAR_48->rx_chainmask = VAR_47->eep_ops->get_eeprom(VAR_47, VAR_40);

 VAR_48->tx_chainmask = FUNC_30(VAR_48->chip_chainmask, VAR_48->tx_chainmask);
 VAR_48->rx_chainmask = FUNC_30(VAR_48->chip_chainmask, VAR_48->rx_chainmask);
 VAR_47->txchainmask = VAR_48->tx_chainmask;
 VAR_47->rxchainmask = VAR_48->rx_chainmask;

 VAR_47->misc_mode |= VAR_7;


 if (FUNC_8(VAR_47))
  VAR_47->misc_mode |= VAR_6;

 VAR_50->crypt_caps |= VAR_29;

 if (VAR_47->hw_version.devid != VAR_0)
  VAR_48->hw_caps |= VAR_18;
 else
  VAR_48->hw_caps &= ~VAR_18;

 if (FUNC_1(VAR_47) || FUNC_0(VAR_47))
  VAR_48->rts_aggr_limit = VAR_28;
 else
  VAR_48->rts_aggr_limit = (8 * 1024);
 if (FUNC_2(VAR_47) || FUNC_8(VAR_47))
  VAR_48->hw_caps |= VAR_14;
 else
  VAR_48->hw_caps &= ~VAR_14;

 if (FUNC_3(VAR_47) || FUNC_6(VAR_47))
  VAR_48->hw_caps &= ~VAR_10;
 else
  VAR_48->hw_caps |= VAR_10;

 if (FUNC_8(VAR_47)) {
  VAR_48->hw_caps |= VAR_16 | VAR_17;
  if (!FUNC_9(VAR_47) && !FUNC_13(VAR_47) &&
      !FUNC_15(VAR_47) && !FUNC_16(VAR_47))
   VAR_48->hw_caps |= VAR_19;

  VAR_48->rx_hp_qdepth = VAR_26;
  VAR_48->rx_lp_qdepth = VAR_27;
  VAR_48->rx_status_len = sizeof(struct ar9003_rxs);
  VAR_48->tx_desc_len = sizeof(struct ar9003_txc);
  VAR_48->txs_len = sizeof(struct ar9003_txs);
 } else {
  VAR_48->tx_desc_len = sizeof(struct ath_desc);
  if (FUNC_4(VAR_47))
   VAR_48->hw_caps |= VAR_17;
 }

 if (FUNC_8(VAR_47))
  VAR_48->hw_caps |= VAR_22;

 if (FUNC_15(VAR_47))
  VAR_47->ent_mode = 0x3BDA000;
 else if (FUNC_8(VAR_47))
  VAR_47->ent_mode = FUNC_20(VAR_47, VAR_4);

 if (FUNC_7(VAR_47) || FUNC_2(VAR_47))
  VAR_48->hw_caps |= VAR_25;

 if (FUNC_6(VAR_47)) {
  if (VAR_47->eep_ops->get_eeprom(VAR_47, VAR_32) >= 3) {
   VAR_52 =
    VAR_47->eep_ops->get_eeprom(VAR_47, VAR_30);
   if ((VAR_52 & 0x1) && ((VAR_52 >> 3) & 0x1)) {
    VAR_48->hw_caps |= VAR_12;
    FUNC_28(VAR_50, "Enable LNA combining\n");
   }
  }
 }

 if (FUNC_8(VAR_47)) {
  if (VAR_47->eep_ops->get_eeprom(VAR_47, VAR_31))
   VAR_48->hw_caps |= VAR_13;
 }

 if (FUNC_9(VAR_47) || FUNC_13(VAR_47) || FUNC_16(VAR_47)) {
  VAR_52 = VAR_47->eep_ops->get_eeprom(VAR_47, VAR_30);
  if ((VAR_52 >> 0x6) == 0x3) {
   VAR_48->hw_caps |= VAR_12;
   FUNC_28(VAR_50, "Enable LNA combining\n");
  }
 }

 if (FUNC_23(VAR_47))
  VAR_48->hw_caps |= VAR_15;

 VAR_53 = VAR_48->tx_chainmask;
 VAR_54 = VAR_48->rx_chainmask;
 while (VAR_53 || VAR_54) {
  if (VAR_53 & FUNC_18(0))
   VAR_48->max_txchains++;
  if (VAR_54 & FUNC_18(0))
   VAR_48->max_rxchains++;

  VAR_53 >>= 1;
  VAR_54 >>= 1;
 }

 if (FUNC_11(VAR_47) || FUNC_16(VAR_47)) {
  if (!(VAR_47->ent_mode & VAR_5))
   VAR_48->hw_caps |= VAR_20;

  if (FUNC_12(VAR_47))
   VAR_48->hw_caps |= VAR_24;
 }

 if (FUNC_8(VAR_47) &&
     VAR_47->eep_ops->get_eeprom(VAR_47, VAR_34))
   VAR_48->hw_caps |= VAR_21;
 return 0;
}
