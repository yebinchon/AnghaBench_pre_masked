
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dm_flag; scalar_t__ dynamic_txhighpower_lvl; long UNDEC_SM_PWDB; scalar_t__ last_dtp_lvl; long undec_sm_pwdb; int dynamic_txpower_enable; } ;
struct rtl_phy {long current_channel; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 long VAR_11 ;
 long VAR_12 ;
 int FUNC_1 (struct ieee80211_hw*,long) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_4(VAR_13);
 struct rtl_phy *VAR_15 = &(VAR_14->phy);
 struct rtl_hal *VAR_16 = FUNC_2(VAR_14);
 struct rtl_mac *VAR_17 = FUNC_3(FUNC_4(VAR_13));
 long VAR_18;

 if ((!VAR_14->dm.dynamic_txpower_enable)
     || VAR_14->dm.dm_flag & VAR_5) {
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_10;
  return;
 }
 if ((VAR_17->link_state < VAR_6) &&
     (VAR_14->dm.UNDEC_SM_PWDB == 0)) {
  FUNC_0(VAR_14, VAR_2, VAR_4,
    "Not connected to any\n");
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_10;
  VAR_14->dm.last_dtp_lvl = VAR_10;
  return;
 }
 if (VAR_17->link_state >= VAR_6) {
  if (VAR_17->opmode == VAR_7) {
   VAR_18 =
       VAR_14->dm.UNDEC_SM_PWDB;
   FUNC_0(VAR_14, VAR_2, VAR_3,
     "IBSS Client PWDB = 0x%lx\n",
     VAR_18);
  } else {
   VAR_18 =
       VAR_14->dm.undec_sm_pwdb;
   FUNC_0(VAR_14, VAR_2, VAR_3,
     "STA Default Port PWDB = 0x%lx\n",
     VAR_18);
  }
 } else {
  VAR_18 =
      VAR_14->dm.UNDEC_SM_PWDB;

  FUNC_0(VAR_14, VAR_2, VAR_3,
    "AP Ext Port PWDB = 0x%lx\n",
    VAR_18);
 }
 if (VAR_16->current_bandtype == VAR_0) {
  if (VAR_18 >= 0x33) {
   VAR_14->dm.dynamic_txhighpower_lvl =
       VAR_9;
   FUNC_0(VAR_14, VAR_1, VAR_3,
     "5G:TxHighPwrLevel_Level2 (TxPwr=0x0)\n");
  } else if ((VAR_18 < 0x33)
      && (VAR_18 >= 0x2b)) {
   VAR_14->dm.dynamic_txhighpower_lvl =
       VAR_8;
   FUNC_0(VAR_14, VAR_1, VAR_3,
     "5G:TxHighPwrLevel_Level1 (TxPwr=0x10)\n");
  } else if (VAR_18 < 0x2b) {
   VAR_14->dm.dynamic_txhighpower_lvl =
       VAR_10;
   FUNC_0(VAR_14, VAR_1, VAR_3,
     "5G:TxHighPwrLevel_Normal\n");
  }
 } else {
  if (VAR_18 >=
      VAR_12) {
   VAR_14->dm.dynamic_txhighpower_lvl =
       VAR_9;
   FUNC_0(VAR_14, VAR_2, VAR_3,
     "TXHIGHPWRLEVEL_LEVEL1 (TxPwr=0x0)\n");
  } else
      if ((VAR_18 <
    (VAR_12 - 3))
   && (VAR_18 >=
       VAR_11)) {

   VAR_14->dm.dynamic_txhighpower_lvl =
       VAR_8;
   FUNC_0(VAR_14, VAR_2, VAR_3,
     "TXHIGHPWRLEVEL_LEVEL1 (TxPwr=0x10)\n");
  } else if (VAR_18 <
      (VAR_11 - 5)) {
   VAR_14->dm.dynamic_txhighpower_lvl =
       VAR_10;
   FUNC_0(VAR_14, VAR_2, VAR_3,
     "TXHIGHPWRLEVEL_NORMAL\n");
  }
 }
 if ((VAR_14->dm.dynamic_txhighpower_lvl != VAR_14->dm.last_dtp_lvl)) {
  FUNC_0(VAR_14, VAR_2, VAR_3,
    "PHY_SetTxPowerLevel8192S() Channel = %d\n",
    VAR_15->current_channel);
  FUNC_1(VAR_13, VAR_15->current_channel);
 }
 VAR_14->dm.last_dtp_lvl = VAR_14->dm.dynamic_txhighpower_lvl;
}
