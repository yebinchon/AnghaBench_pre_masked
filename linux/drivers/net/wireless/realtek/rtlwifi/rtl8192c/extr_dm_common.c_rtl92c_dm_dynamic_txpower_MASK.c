
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dm_flag; scalar_t__ dynamic_txhighpower_lvl; long entry_min_undec_sm_pwdb; scalar_t__ last_dtp_lvl; long undec_sm_pwdb; int dynamic_txpower_enable; } ;
struct rtl_phy {long current_channel; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,long) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_5(VAR_11);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 struct rtl_mac *VAR_14 = FUNC_4(FUNC_5(VAR_11));
 long VAR_15;

 if (!VAR_12->dm.dynamic_txpower_enable)
  return;

 if (VAR_12->dm.dm_flag & VAR_3) {
  VAR_12->dm.dynamic_txhighpower_lvl = VAR_8;
  return;
 }

 if ((VAR_14->link_state < VAR_4) &&
     (VAR_12->dm.entry_min_undec_sm_pwdb == 0)) {
  FUNC_0(VAR_12, VAR_0, VAR_2,
    "Not connected to any\n");

  VAR_12->dm.dynamic_txhighpower_lvl = VAR_8;

  VAR_12->dm.last_dtp_lvl = VAR_8;
  return;
 }

 if (VAR_14->link_state >= VAR_4) {
  if (VAR_14->opmode == VAR_5) {
   VAR_15 = VAR_12->dm.entry_min_undec_sm_pwdb;
   FUNC_0(VAR_12, VAR_0, VAR_1,
     "AP Client PWDB = 0x%lx\n",
     VAR_15);
  } else {
   VAR_15 = VAR_12->dm.undec_sm_pwdb;
   FUNC_0(VAR_12, VAR_0, VAR_1,
     "STA Default Port PWDB = 0x%lx\n",
     VAR_15);
  }
 } else {
  VAR_15 = VAR_12->dm.entry_min_undec_sm_pwdb;

  FUNC_0(VAR_12, VAR_0, VAR_1,
    "AP Ext Port PWDB = 0x%lx\n",
    VAR_15);
 }

 if (VAR_15 >= VAR_10) {
  VAR_12->dm.dynamic_txhighpower_lvl = VAR_7;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "TXHIGHPWRLEVEL_LEVEL1 (TxPwr=0x0)\n");
 } else if ((VAR_15 < (VAR_10 - 3)) &&
     (VAR_15 >= VAR_9)) {

  VAR_12->dm.dynamic_txhighpower_lvl = VAR_6;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "TXHIGHPWRLEVEL_LEVEL1 (TxPwr=0x10)\n");
 } else if (VAR_15 < (VAR_9 - 5)) {
  VAR_12->dm.dynamic_txhighpower_lvl = VAR_8;
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "TXHIGHPWRLEVEL_NORMAL\n");
 }

 if ((VAR_12->dm.dynamic_txhighpower_lvl != VAR_12->dm.last_dtp_lvl)) {
  FUNC_0(VAR_12, VAR_0, VAR_1,
    "PHY_SetTxPowerLevel8192S() Channel = %d\n",
    VAR_13->current_channel);
  FUNC_3(VAR_11, VAR_13->current_channel);
  if (VAR_12->dm.dynamic_txhighpower_lvl ==
      VAR_8)
   FUNC_1(VAR_11);
  else if (VAR_12->dm.dynamic_txhighpower_lvl ==
    VAR_6)
   FUNC_2(VAR_11, 0x14);
  else if (VAR_12->dm.dynamic_txhighpower_lvl ==
    VAR_7)
   FUNC_2(VAR_11, 0x10);
 }
 VAR_12->dm.last_dtp_lvl = VAR_12->dm.dynamic_txhighpower_lvl;
}
