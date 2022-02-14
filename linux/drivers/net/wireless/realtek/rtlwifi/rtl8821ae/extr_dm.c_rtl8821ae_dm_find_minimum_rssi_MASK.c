
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_min_undec_sm_pwdb; scalar_t__ undec_sm_pwdb; } ;
struct dig_t {scalar_t__ min_undec_pwdb_for_dm; } ;
struct rtl_priv {TYPE_1__ dm; struct dig_t dm_digtable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_3(VAR_6);
 struct dig_t *VAR_8 = &VAR_7->dm_digtable;
 struct rtl_mac *VAR_9 = FUNC_2(VAR_7);


 if ((VAR_9->link_state < VAR_3) &&
     (VAR_7->dm.entry_min_undec_sm_pwdb == 0)) {
  VAR_8->min_undec_pwdb_for_dm = 0;
  FUNC_1("rtl8821ae: Not connected to any AP\n");
 }
 if (VAR_9->link_state >= VAR_3) {
  if (VAR_9->opmode == VAR_5 ||
      VAR_9->opmode == VAR_4) {
   VAR_8->min_undec_pwdb_for_dm =
       VAR_7->dm.entry_min_undec_sm_pwdb;
   FUNC_0(VAR_7, VAR_0, VAR_2,
     "AP Client PWDB = 0x%lx\n",
     VAR_7->dm.entry_min_undec_sm_pwdb);
  } else {
   VAR_8->min_undec_pwdb_for_dm =
       VAR_7->dm.undec_sm_pwdb;
   FUNC_0(VAR_7, VAR_0, VAR_2,
     "STA Default Port PWDB = 0x%x\n",
     VAR_8->min_undec_pwdb_for_dm);
  }
 } else {
  VAR_8->min_undec_pwdb_for_dm =
      VAR_7->dm.entry_min_undec_sm_pwdb;
  FUNC_0(VAR_7, VAR_0, VAR_2,
    "AP Ext Port or disconnect PWDB = 0x%x\n",
    VAR_8->min_undec_pwdb_for_dm);
 }
 FUNC_0(VAR_7, VAR_1, VAR_2,
   "MinUndecoratedPWDBForDM =%d\n",
   VAR_8->min_undec_pwdb_for_dm);
}
