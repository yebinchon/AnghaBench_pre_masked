
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int rfchange_inprogress; int hwradiooff; int reg_rfps_level; scalar_t__ swrf_processing; } ;
struct TYPE_4__ {int rf_ps_lock; } ;
struct TYPE_3__ {scalar_t__ being_init_adapter; } ;
struct rtl_phy {scalar_t__ polarity_ctl; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_1__ rtlhal; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

bool FUNC_9(struct ieee80211_hw *VAR_7, u8 *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_3(VAR_7);
 struct rtl_ps_ctl *VAR_10 = FUNC_4(FUNC_3(VAR_7));
 struct rtl_phy *VAR_11 = &(VAR_9->phy);
 enum rf_pwrstate VAR_12;
 u8 VAR_13;
 bool VAR_14 = 0;

 if (VAR_9->rtlhal.being_init_adapter)
  return 0;

 if (VAR_10->swrf_processing)
  return 0;

 FUNC_7(&VAR_9->locks.rf_ps_lock);
 if (VAR_10->rfchange_inprogress) {
  FUNC_8(&VAR_9->locks.rf_ps_lock);
  return 0;
 } else {
  VAR_10->rfchange_inprogress = 1;
  FUNC_8(&VAR_9->locks.rf_ps_lock);
 }

 FUNC_6(VAR_9, VAR_4,
         FUNC_5(VAR_9, VAR_4) & ~(FUNC_0(1)));

 VAR_13 = FUNC_5(VAR_9, VAR_5);

 if (VAR_11->polarity_ctl)
  VAR_12 = (VAR_13 & FUNC_0(1)) ? VAR_2 : VAR_3;
 else
  VAR_12 = (VAR_13 & FUNC_0(1)) ? VAR_3 : VAR_2;

 if ((VAR_10->hwradiooff) && (VAR_12 == VAR_3)) {
  FUNC_2(VAR_9, VAR_0, VAR_1,
    "GPIOChangeRF  - HW Radio ON, RF ON\n");

  VAR_12 = VAR_3;
  VAR_10->hwradiooff = 0;
  VAR_14 = 1;
 } else if (!VAR_10->hwradiooff && (VAR_12 == VAR_2)) {
  FUNC_2(VAR_9, VAR_0, VAR_1,
    "GPIOChangeRF  - HW Radio OFF, RF OFF\n");

  VAR_12 = VAR_2;
  VAR_10->hwradiooff = 1;
  VAR_14 = 1;
 }

 if (VAR_14) {
  FUNC_7(&VAR_9->locks.rf_ps_lock);
  VAR_10->rfchange_inprogress = 0;
  FUNC_8(&VAR_9->locks.rf_ps_lock);
 } else {
  if (VAR_10->reg_rfps_level & VAR_6)
   FUNC_1(VAR_10, VAR_6);

  FUNC_7(&VAR_9->locks.rf_ps_lock);
  VAR_10->rfchange_inprogress = 0;
  FUNC_8(&VAR_9->locks.rf_ps_lock);
 }

 *VAR_8 = 1;
 return !VAR_10->hwradiooff;

}
