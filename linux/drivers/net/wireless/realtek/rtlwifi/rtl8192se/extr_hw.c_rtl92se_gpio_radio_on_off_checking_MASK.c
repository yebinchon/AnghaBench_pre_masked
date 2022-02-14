
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int rfchange_inprogress; int hwradiooff; int reg_rfps_level; scalar_t__ swrf_processing; } ;
struct TYPE_2__ {int rf_ps_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct rtl_pci {int up_first_time; scalar_t__ being_init_adapter; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtl_ps_ctl*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_pci* FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_9 (struct rtl_priv*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

bool FUNC_12(struct ieee80211_hw *VAR_5, u8 *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_8(VAR_5);
 struct rtl_ps_ctl *VAR_8 = FUNC_9(FUNC_8(VAR_5));
 struct rtl_pci *VAR_9 = FUNC_6(FUNC_7(VAR_5));
 enum rf_pwrstate VAR_10 ;
 unsigned long VAR_11 = 0;
 bool VAR_12 = 0;
 bool VAR_13 = 0;


 if ((VAR_9->up_first_time == 1) || (VAR_9->being_init_adapter))
  return 0;

 if (VAR_8->swrf_processing)
  return 0;

 FUNC_10(&VAR_7->locks.rf_ps_lock, VAR_11);
 if (VAR_8->rfchange_inprogress) {
  FUNC_11(&VAR_7->locks.rf_ps_lock, VAR_11);
  return 0;
 } else {
  VAR_8->rfchange_inprogress = 1;
  FUNC_11(&VAR_7->locks.rf_ps_lock, VAR_11);
 }







 if (FUNC_0(VAR_8, VAR_4)) {
  FUNC_4(VAR_5);
  VAR_13 = 1;
 }

 VAR_10 = FUNC_5(VAR_5);

 if ((VAR_8->hwradiooff) && (VAR_10 == VAR_3)) {
  FUNC_2(VAR_7, VAR_0, VAR_1,
    "RFKILL-HW Radio ON, RF ON\n");

  VAR_10 = VAR_3;
  VAR_8->hwradiooff = 0;
  VAR_12 = 1;
 } else if ((!VAR_8->hwradiooff) && (VAR_10 == VAR_2)) {
  FUNC_2(VAR_7, VAR_0,
    VAR_1, "RFKILL-HW Radio OFF, RF OFF\n");

  VAR_10 = VAR_2;
  VAR_8->hwradiooff = 1;
  VAR_12 = 1;
 }

 if (VAR_12) {
  FUNC_10(&VAR_7->locks.rf_ps_lock, VAR_11);
  VAR_8->rfchange_inprogress = 0;
  FUNC_11(&VAR_7->locks.rf_ps_lock, VAR_11);



 } else {





  if (VAR_8->reg_rfps_level & VAR_4 &&
   VAR_13) {
   FUNC_3(VAR_5);
   FUNC_1(VAR_8, VAR_4);
  }

  FUNC_10(&VAR_7->locks.rf_ps_lock, VAR_11);
  VAR_8->rfchange_inprogress = 0;
  FUNC_11(&VAR_7->locks.rf_ps_lock, VAR_11);
 }

 *VAR_6 = 1;
 return !VAR_8->hwradiooff;

}
