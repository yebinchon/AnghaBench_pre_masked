
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ bHwRfOffAction; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
typedef enum rt_rf_power_state { ____Placeholder_rt_rf_power_state } rt_rf_power_state ;
struct TYPE_2__ {int eRFPowerState; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

bool FUNC_3(struct net_device *VAR_1,
          enum rt_rf_power_state VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_2(VAR_1);

 bool VAR_4 = 0;

 FUNC_0(VAR_0,
   "---------> rtl92e_set_rf_power_state(): eRFPowerState(%d)\n",
   VAR_2);
 if (VAR_2 == VAR_3->rtllib->eRFPowerState &&
     VAR_3->bHwRfOffAction == 0) {
  FUNC_0(VAR_0,
    "<--------- rtl92e_set_rf_power_state(): discard the request for eRFPowerState(%d) is the same.\n",
    VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_2);

 FUNC_0(VAR_0,
   "<--------- rtl92e_set_rf_power_state(): bResult(%d)\n",
   VAR_4);

 return VAR_4;
}
