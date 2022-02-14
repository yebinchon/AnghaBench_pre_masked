
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rtl_ps_ctl {int rfchange_inprogress; int rfpwr_state; int hwradiooff; int rfoff_reason; } ;
struct TYPE_6__ {int rf_ps_lock; } ;
struct rtl_priv {TYPE_3__ locks; TYPE_2__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_rf_power_state ) (struct ieee80211_hw*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_4 (struct rtl_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_hw*,int) ;

__attribute__((used)) static bool FUNC_8(struct ieee80211_hw *VAR_3,
    enum rf_pwrstate VAR_4,
    u32 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_3);
 struct rtl_ps_ctl *VAR_7 = FUNC_4(FUNC_3(VAR_3));
 enum rf_pwrstate VAR_8;
 bool VAR_9 = 0;
 u16 VAR_10 = 0;





 while (1) {
  FUNC_5(&VAR_6->locks.rf_ps_lock);
  if (VAR_7->rfchange_inprogress) {
   FUNC_6(&VAR_6->locks.rf_ps_lock);

   FUNC_0(VAR_6, VAR_0, VAR_1,
     "RF Change in progress! Wait to set..state_toset(%d).\n",
      VAR_4);


   while (VAR_7->rfchange_inprogress) {
    VAR_10++;
    FUNC_1(1);



    if (VAR_10 > 100)
     return 0;
   }
  } else {
   VAR_7->rfchange_inprogress = 1;
   FUNC_6(&VAR_6->locks.rf_ps_lock);
   break;
  }
 }

 VAR_8 = VAR_7->rfpwr_state;

 switch (VAR_4) {
 case 129:
  VAR_7->rfoff_reason &= (~VAR_5);

  if ((VAR_5 == VAR_2) &&
      (VAR_7->hwradiooff)) {
   VAR_7->hwradiooff = 0;
  }

  if (!VAR_7->rfoff_reason) {
   VAR_7->rfoff_reason = 0;
   VAR_9 = 1;
  }

  break;

 case 130:

  if ((VAR_5 == VAR_2) && !VAR_7->hwradiooff) {
   VAR_7->hwradiooff = 1;
  }

  VAR_7->rfoff_reason |= VAR_5;
  VAR_9 = 1;
  break;

 case 128:
  VAR_7->rfoff_reason |= VAR_5;
  VAR_9 = 1;
  break;

 default:
  FUNC_2("switch case %#x not processed\n", VAR_4);
  break;
 }

 if (VAR_9)
  VAR_6->cfg->ops->set_rf_power_state(VAR_3, VAR_4);

 FUNC_5(&VAR_6->locks.rf_ps_lock);
 VAR_7->rfchange_inprogress = 0;
 FUNC_6(&VAR_6->locks.rf_ps_lock);

 return VAR_9;
}
