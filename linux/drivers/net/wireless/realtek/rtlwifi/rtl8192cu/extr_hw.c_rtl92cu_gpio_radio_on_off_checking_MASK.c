
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int rfchange_inprogress; int rfpwr_state; int hwradiooff; int reg_rfps_level; scalar_t__ pwrdown_mode; scalar_t__ swrf_processing; } ;
struct TYPE_2__ {int rf_ps_lock; } ;
struct rtl_priv {TYPE_1__ locks; } ;
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 scalar_t__ FUNC_2 (struct rtl_ps_ctl*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct rtl_ps_ctl*,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct rtl_priv*,int ) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;
 int FUNC_9 (struct rtl_priv*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

bool FUNC_12(struct ieee80211_hw *VAR_12, u8 * VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_5(VAR_12);
 struct rtl_ps_ctl *VAR_15 = FUNC_6(FUNC_5(VAR_12));
 enum rf_pwrstate VAR_16, VAR_17;
 u8 VAR_18 = 0;
 bool VAR_19 = 0;
 unsigned long VAR_20 = 0;

 u8 VAR_21 = 0;

 if (VAR_15->swrf_processing)
  return 0;
 FUNC_10(&VAR_14->locks.rf_ps_lock, VAR_20);
 if (VAR_15->rfchange_inprogress) {
  FUNC_11(&VAR_14->locks.rf_ps_lock, VAR_20);
  return 0;
 } else {
  VAR_15->rfchange_inprogress = 1;
  FUNC_11(&VAR_14->locks.rf_ps_lock, VAR_20);
 }
 VAR_17 = VAR_15->rfpwr_state;
 if (VAR_21) {

 } else {
  if (VAR_15->pwrdown_mode) {
   VAR_18 = FUNC_7(VAR_14, VAR_7);
   VAR_16 = (VAR_18 & FUNC_0(7)) ?
            VAR_3 : VAR_4;
   FUNC_4(VAR_14, VAR_0, VAR_1,
     "pwrdown, 0x5c(BIT7)=%02x\n", VAR_18);
  } else {
   FUNC_8(VAR_14, VAR_8,
           FUNC_7(VAR_14,
           VAR_8) & ~(FUNC_0(3)));
   VAR_18 = FUNC_7(VAR_14, VAR_6);
   VAR_16 = (VAR_18 & FUNC_0(3)) ?
       VAR_4 : VAR_3;
   FUNC_4(VAR_14, VAR_0, VAR_1,
     "GPIO_IN=%02x\n", VAR_18);
  }
  FUNC_4(VAR_14, VAR_0, VAR_2, "N-SS RF =%x\n",
    VAR_16);
 }
 if ((VAR_15->hwradiooff) && (VAR_16 == VAR_4)) {
  FUNC_4(VAR_14, VAR_0, VAR_2,
    "GPIOChangeRF  - HW Radio ON, RF ON\n");
  VAR_15->hwradiooff = 0;
  VAR_19 = 1;
 } else if ((!VAR_15->hwradiooff) && (VAR_16 ==
      VAR_3)) {
  FUNC_4(VAR_14, VAR_0, VAR_2,
    "GPIOChangeRF  - HW Radio OFF\n");
  VAR_15->hwradiooff = 1;
  VAR_19 = 1;
 } else {
  FUNC_4(VAR_14, VAR_0, VAR_2,
    "pHalData->bHwRadioOff and eRfPowerStateToSet do not match: pHalData->bHwRadioOff %x, eRfPowerStateToSet %x\n",
    VAR_15->hwradiooff, VAR_16);
 }
 if (VAR_19) {
  VAR_15->hwradiooff = 1;
  if (VAR_16 == VAR_4) {
   if ((VAR_15->reg_rfps_level & VAR_10) &&
        FUNC_2(VAR_15, VAR_10))
    FUNC_1(VAR_15, VAR_10);
   else if ((VAR_15->reg_rfps_level & VAR_11)
     && FUNC_2(VAR_15, VAR_11))
    FUNC_1(VAR_15, VAR_11);
  }
  FUNC_10(&VAR_14->locks.rf_ps_lock, VAR_20);
  VAR_15->rfchange_inprogress = 0;
  FUNC_11(&VAR_14->locks.rf_ps_lock, VAR_20);




  if (VAR_15->pwrdown_mode && VAR_16 == VAR_3) {

   FUNC_8(VAR_14, VAR_9, 0x0);
   FUNC_9(VAR_14, VAR_5, 0x8812);
  }
  if (VAR_16 == VAR_3) {
   if (VAR_15->reg_rfps_level & VAR_10)
    FUNC_3(VAR_15, VAR_10);
   else if (VAR_15->reg_rfps_level & VAR_11)
    FUNC_3(VAR_15, VAR_11);
  }
 } else if (VAR_16 == VAR_3 || VAR_17 == VAR_3) {

  if (VAR_15->reg_rfps_level & VAR_10)
   FUNC_3(VAR_15, VAR_10);
  else if (VAR_15->reg_rfps_level & VAR_11)
   FUNC_3(VAR_15, VAR_11);
  FUNC_10(&VAR_14->locks.rf_ps_lock, VAR_20);
  VAR_15->rfchange_inprogress = 0;
  FUNC_11(&VAR_14->locks.rf_ps_lock, VAR_20);
 } else {
  FUNC_10(&VAR_14->locks.rf_ps_lock, VAR_20);
  VAR_15->rfchange_inprogress = 0;
  FUNC_11(&VAR_14->locks.rf_ps_lock, VAR_20);
 }
 *VAR_13 = 1;
 return !VAR_15->hwradiooff;
}
