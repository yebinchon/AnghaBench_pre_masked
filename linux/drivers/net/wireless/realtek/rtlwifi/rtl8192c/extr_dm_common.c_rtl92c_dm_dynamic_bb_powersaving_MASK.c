
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_min_undec_sm_pwdb; scalar_t__ undec_sm_pwdb; } ;
struct ps_t {scalar_t__ rssi_val_min; } ;
struct rtl_priv {TYPE_1__ dm; struct ps_t dm_pstable; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ opmode; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_5(VAR_4);
 struct ps_t *VAR_6 = &VAR_5->dm_pstable;
 struct rtl_mac *VAR_7 = FUNC_4(FUNC_5(VAR_4));
 struct rtl_hal *VAR_8 = FUNC_3(FUNC_5(VAR_4));


 if (((VAR_7->link_state == VAR_2)) &&
     (VAR_5->dm.entry_min_undec_sm_pwdb == 0)) {
  VAR_6->rssi_val_min = 0;
  FUNC_1(VAR_5, VAR_0, VAR_0, "Not connected to any\n");
 }

 if (VAR_7->link_state == VAR_1) {
  if (VAR_7->opmode == VAR_3) {
   VAR_6->rssi_val_min =
       VAR_5->dm.entry_min_undec_sm_pwdb;
   FUNC_1(VAR_5, VAR_0, VAR_0,
     "AP Client PWDB = 0x%lx\n",
     VAR_6->rssi_val_min);
  } else {
   VAR_6->rssi_val_min = VAR_5->dm.undec_sm_pwdb;
   FUNC_1(VAR_5, VAR_0, VAR_0,
     "STA Default Port PWDB = 0x%lx\n",
     VAR_6->rssi_val_min);
  }
 } else {
  VAR_6->rssi_val_min =
      VAR_5->dm.entry_min_undec_sm_pwdb;

  FUNC_1(VAR_5, VAR_0, VAR_0,
    "AP Ext Port PWDB = 0x%lx\n",
    VAR_6->rssi_val_min);
 }


 if (FUNC_0(VAR_8->version))
  ;
 else
  FUNC_2(VAR_4, 0);
}
