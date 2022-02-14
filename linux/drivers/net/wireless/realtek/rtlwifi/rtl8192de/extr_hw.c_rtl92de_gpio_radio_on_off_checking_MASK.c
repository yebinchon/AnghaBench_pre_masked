
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int rfchange_inprogress; int hwradiooff; int reg_rfps_level; scalar_t__ swrf_processing; } ;
struct TYPE_2__ {int rf_ps_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
struct rtl_pci {scalar_t__ being_init_adapter; } ;
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
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct rtl_priv*,int ) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

bool FUNC_11(struct ieee80211_hw *VAR_7, u8 *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_5(VAR_7);
 struct rtl_ps_ctl *VAR_10 = FUNC_6(FUNC_5(VAR_7));
 struct rtl_pci *VAR_11 = FUNC_3(FUNC_4(VAR_7));
 enum rf_pwrstate VAR_12;
 u8 VAR_13;
 bool VAR_14 = 0;
 unsigned long VAR_15;

 if (VAR_11->being_init_adapter)
  return 0;
 if (VAR_10->swrf_processing)
  return 0;
 FUNC_9(&VAR_9->locks.rf_ps_lock, VAR_15);
 if (VAR_10->rfchange_inprogress) {
  FUNC_10(&VAR_9->locks.rf_ps_lock, VAR_15);
  return 0;
 } else {
  VAR_10->rfchange_inprogress = 1;
  FUNC_10(&VAR_9->locks.rf_ps_lock, VAR_15);
 }
 FUNC_8(VAR_9, VAR_5, FUNC_7(VAR_9,
     VAR_5) & ~(FUNC_0(3)));
 VAR_13 = FUNC_7(VAR_9, VAR_4);
 VAR_12 = (VAR_13 & FUNC_0(3)) ? VAR_3 : VAR_2;
 if (VAR_10->hwradiooff && (VAR_12 == VAR_3)) {
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
  FUNC_9(&VAR_9->locks.rf_ps_lock, VAR_15);
  VAR_10->rfchange_inprogress = 0;
  FUNC_10(&VAR_9->locks.rf_ps_lock, VAR_15);
 } else {
  if (VAR_10->reg_rfps_level & VAR_6)
   FUNC_1(VAR_10, VAR_6);
  FUNC_9(&VAR_9->locks.rf_ps_lock, VAR_15);
  VAR_10->rfchange_inprogress = 0;
  FUNC_10(&VAR_9->locks.rf_ps_lock, VAR_15);
 }
 *VAR_8 = 1;
 return !VAR_10->hwradiooff;
}
