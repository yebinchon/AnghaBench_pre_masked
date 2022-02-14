
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dm_flag; scalar_t__ dynamic_txhighpower_lvl; long entry_min_undec_sm_pwdb; scalar_t__ last_dtp_lvl; long undec_sm_pwdb; int dynamic_txpower_enable; } ;
struct rtl_phy {scalar_t__ rf_type; int current_channel; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 long VAR_11 ;
 long VAR_12 ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_4(VAR_13);
 struct rtl_phy *VAR_15 = &(VAR_14->phy);
 struct rtl_mac *VAR_16 = FUNC_3(FUNC_4(VAR_13));
 long VAR_17;
 long VAR_18, VAR_19;


 if (VAR_15->rf_type == VAR_7)
  return;

 if (!VAR_14->dm.dynamic_txpower_enable ||
     VAR_14->dm.dm_flag & VAR_3) {
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_8;
  return;
 }

 if ((VAR_16->link_state < VAR_4) &&
     (VAR_14->dm.entry_min_undec_sm_pwdb == 0)) {
  FUNC_0(VAR_14, VAR_0, VAR_2,
    "Not connected to any\n");

  VAR_14->dm.dynamic_txhighpower_lvl = VAR_8;

  VAR_14->dm.last_dtp_lvl = VAR_8;
  return;
 }

 if (VAR_16->link_state >= VAR_4) {
  if (VAR_16->opmode == VAR_6) {
   VAR_17 = VAR_14->dm.entry_min_undec_sm_pwdb;
   FUNC_0(VAR_14, VAR_0, VAR_1,
     "AP Client PWDB = 0x%lx\n",
     VAR_17);
  } else {
   VAR_17 = VAR_14->dm.undec_sm_pwdb;
   FUNC_0(VAR_14, VAR_0, VAR_1,
     "STA Default Port PWDB = 0x%lx\n",
     VAR_17);
  }
 } else {
  VAR_17 = VAR_14->dm.entry_min_undec_sm_pwdb;

  FUNC_0(VAR_14, VAR_0, VAR_1,
    "AP Ext Port PWDB = 0x%lx\n",
    VAR_17);
 }

 VAR_19 = VAR_12;
 VAR_18 = VAR_11;

 if (FUNC_2(VAR_13, 0xc90, VAR_5) == 1)
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_8;
 else if (VAR_17 >= VAR_19)
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_10;
 else if ((VAR_17 < (VAR_19 - 3)) &&
  (VAR_17 >= VAR_18))
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_9;
 else if (VAR_17 < (VAR_18 - 3))
  VAR_14->dm.dynamic_txhighpower_lvl = VAR_8;

 if ((VAR_14->dm.dynamic_txhighpower_lvl != VAR_14->dm.last_dtp_lvl))
  FUNC_1(VAR_13, VAR_15->current_channel);

 VAR_14->dm.last_dtp_lvl = VAR_14->dm.dynamic_txhighpower_lvl;
}
