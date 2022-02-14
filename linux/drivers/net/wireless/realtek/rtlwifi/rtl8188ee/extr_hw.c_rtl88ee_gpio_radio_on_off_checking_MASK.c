
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_ps_ctl {int rfchange_inprogress; int hwradiooff; int reg_rfps_level; scalar_t__ swrf_processing; } ;
struct TYPE_4__ {int rf_ps_lock; } ;
struct TYPE_3__ {scalar_t__ being_init_adapter; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

bool FUNC_8(struct ieee80211_hw *VAR_6, u8 *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_3(VAR_6);
 struct rtl_ps_ctl *VAR_9 = FUNC_4(FUNC_3(VAR_6));
 enum rf_pwrstate VAR_10;
 u32 VAR_11;
 bool VAR_12 = 0;

 if (VAR_8->rtlhal.being_init_adapter)
  return 0;

 if (VAR_9->swrf_processing)
  return 0;

 FUNC_6(&VAR_8->locks.rf_ps_lock);
 if (VAR_9->rfchange_inprogress) {
  FUNC_7(&VAR_8->locks.rf_ps_lock);
  return 0;
 } else {
  VAR_9->rfchange_inprogress = 1;
  FUNC_7(&VAR_8->locks.rf_ps_lock);
 }

 VAR_11 = FUNC_5(VAR_8, VAR_4);
 VAR_10 = (VAR_11 & FUNC_0(31)) ? VAR_3 : VAR_2;

 if (VAR_9->hwradiooff && (VAR_10 == VAR_3)) {
  FUNC_2(VAR_8, VAR_0, VAR_1,
    "GPIOChangeRF  - HW Radio ON, RF ON\n");

  VAR_10 = VAR_3;
  VAR_9->hwradiooff = 0;
  VAR_12 = 1;
 } else if ((!VAR_9->hwradiooff) &&
     (VAR_10 == VAR_2)) {
  FUNC_2(VAR_8, VAR_0, VAR_1,
    "GPIOChangeRF  - HW Radio OFF, RF OFF\n");

  VAR_10 = VAR_2;
  VAR_9->hwradiooff = 1;
  VAR_12 = 1;
 }

 if (VAR_12) {
  FUNC_6(&VAR_8->locks.rf_ps_lock);
  VAR_9->rfchange_inprogress = 0;
  FUNC_7(&VAR_8->locks.rf_ps_lock);
 } else {
  if (VAR_9->reg_rfps_level & VAR_5)
   FUNC_1(VAR_9, VAR_5);

  FUNC_6(&VAR_8->locks.rf_ps_lock);
  VAR_9->rfchange_inprogress = 0;
  FUNC_7(&VAR_8->locks.rf_ps_lock);
 }

 *VAR_7 = 1;
 return !VAR_9->hwradiooff;

}
