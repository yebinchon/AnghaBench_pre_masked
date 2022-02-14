
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_min_undec_sm_pwdb; scalar_t__ undec_sm_pwdb; } ;
struct ps_t {scalar_t__ rssi_val_min; } ;
struct rtl_priv {TYPE_1__ dm; struct ps_t dm_pstable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_4);
 struct rtl_mac *VAR_6 = FUNC_2(FUNC_3(VAR_4));
 struct ps_t *VAR_7 = &VAR_5->dm_pstable;

 if (((VAR_6->link_state == VAR_2)) &&
     (VAR_5->dm.entry_min_undec_sm_pwdb == 0)) {
  VAR_7->rssi_val_min = 0;
  FUNC_0(VAR_5, VAR_0, VAR_0,
    "Not connected to any\n");
 }

 if (VAR_6->link_state == VAR_1) {
  if (VAR_6->opmode == VAR_3) {
   VAR_7->rssi_val_min =
       VAR_5->dm.entry_min_undec_sm_pwdb;
   FUNC_0(VAR_5, VAR_0, VAR_0,
     "AP Client PWDB = 0x%lx\n",
      VAR_7->rssi_val_min);
  } else {
   VAR_7->rssi_val_min =
       VAR_5->dm.undec_sm_pwdb;
   FUNC_0(VAR_5, VAR_0, VAR_0,
     "STA Default Port PWDB = 0x%lx\n",
      VAR_7->rssi_val_min);
  }
 } else {
  VAR_7->rssi_val_min =
      VAR_5->dm.entry_min_undec_sm_pwdb;

  FUNC_0(VAR_5, VAR_0, VAR_0,
    "AP Ext Port PWDB = 0x%lx\n",
     VAR_7->rssi_val_min);
 }

 FUNC_1(VAR_4, 0);
}
