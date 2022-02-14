
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ Rf_Mode; int being_init_adapter; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;
struct TYPE_2__ {scalar_t__ eRFPowerState; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int,int,int) ;
 int FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (struct net_device*,int,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct net_device*,int) ;
 struct r8192_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int) ;

void FUNC_9(struct net_device *VAR_4, enum rf90_radio_path VAR_5,
         u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_7(VAR_4);
 u32 VAR_10, VAR_11, VAR_12;

 if (!FUNC_6(VAR_4, VAR_5))
  return;
 if (VAR_9->rtllib->eRFPowerState != VAR_3 && !VAR_9->being_init_adapter)
  return;

 FUNC_0(VAR_0, "FW RF CTRL is not ready now\n");
 if (VAR_9->Rf_Mode == VAR_1) {
  if (VAR_7 != VAR_2) {
   VAR_10 = FUNC_2(VAR_4, VAR_5,
        VAR_6);
   VAR_11 = FUNC_1(VAR_7);
   VAR_12 = (VAR_10 & ~VAR_7) | (VAR_8 << VAR_11);

   FUNC_3(VAR_4, VAR_5, VAR_6,
      VAR_12);
  } else
   FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8);
  FUNC_8(200);

 } else {
  if (VAR_7 != VAR_2) {
   VAR_10 = FUNC_4(VAR_4, VAR_5,
            VAR_6);
   VAR_11 = FUNC_1(VAR_7);
   VAR_12 = (VAR_10 & ~VAR_7) | (VAR_8 << VAR_11);

   FUNC_5(VAR_4, VAR_5, VAR_6, VAR_12);
  } else
   FUNC_5(VAR_4, VAR_5, VAR_6, VAR_8);
 }
}
