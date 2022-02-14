
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
 void* VAR_6 ;
 void* VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 int FUNC_1 (struct ieee80211_hw*,long) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_10);
 struct rtl_phy *VAR_12 = &VAR_11->phy;
 struct rtl_mac *VAR_13 = FUNC_2(FUNC_3(VAR_10));
 long VAR_14;

 if (!VAR_11->dm.dynamic_txpower_enable)
  return;

 if (VAR_11->dm.dm_flag & VAR_3) {
  VAR_11->dm.dynamic_txhighpower_lvl = VAR_7;
  return;
 }

 if ((VAR_13->link_state < VAR_4) &&
     (VAR_11->dm.entry_min_undec_sm_pwdb == 0)) {
  FUNC_0(VAR_11, VAR_0, VAR_2,
    "Not connected to any\n");

  VAR_11->dm.dynamic_txhighpower_lvl = VAR_7;

  VAR_11->dm.last_dtp_lvl = VAR_7;
  return;
 }

 if (VAR_13->link_state >= VAR_4) {
  if (VAR_13->opmode == VAR_5) {
   VAR_14 =
       VAR_11->dm.entry_min_undec_sm_pwdb;
   FUNC_0(VAR_11, VAR_0, VAR_1,
     "AP Client PWDB = 0x%lx\n",
      VAR_14);
  } else {
   VAR_14 =
       VAR_11->dm.undec_sm_pwdb;
   FUNC_0(VAR_11, VAR_0, VAR_1,
     "STA Default Port PWDB = 0x%lx\n",
      VAR_14);
  }
 } else {
  VAR_14 =
      VAR_11->dm.entry_min_undec_sm_pwdb;

  FUNC_0(VAR_11, VAR_0, VAR_1,
    "AP Ext Port PWDB = 0x%lx\n",
     VAR_14);
 }

 if (VAR_14 >= VAR_9) {
  VAR_11->dm.dynamic_txhighpower_lvl = VAR_6;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "TXHIGHPWRLEVEL_LEVEL1 (TxPwr = 0x0)\n");
 } else if ((VAR_14 <
      (VAR_9 - 3)) &&
     (VAR_14 >=
      VAR_8)) {
  VAR_11->dm.dynamic_txhighpower_lvl = VAR_6;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "TXHIGHPWRLEVEL_LEVEL1 (TxPwr = 0x10)\n");
 } else if (VAR_14 <
     (VAR_8 - 5)) {
  VAR_11->dm.dynamic_txhighpower_lvl = VAR_7;
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "TXHIGHPWRLEVEL_NORMAL\n");
 }

 if ((VAR_11->dm.dynamic_txhighpower_lvl !=
  VAR_11->dm.last_dtp_lvl)) {
  FUNC_0(VAR_11, VAR_0, VAR_1,
    "PHY_SetTxPowerLevel8192S() Channel = %d\n",
     VAR_12->current_channel);
  FUNC_1(VAR_10, VAR_12->current_channel);
 }

 VAR_11->dm.last_dtp_lvl = VAR_11->dm.dynamic_txhighpower_lvl;
}
