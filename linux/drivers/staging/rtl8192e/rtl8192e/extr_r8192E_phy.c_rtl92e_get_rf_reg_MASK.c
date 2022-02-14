
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ Rf_Mode; int rf_mutex; int being_init_adapter; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;
struct TYPE_2__ {scalar_t__ eRFPowerState; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct net_device*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,int) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;

u32 FUNC_8(struct net_device *VAR_2, enum rf90_radio_path VAR_3,
        u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 struct r8192_priv *VAR_9 = FUNC_6(VAR_2);

 if (!FUNC_5(VAR_2, VAR_3))
  return 0;
 if (VAR_9->rtllib->eRFPowerState != VAR_1 && !VAR_9->being_init_adapter)
  return 0;
 FUNC_3(&VAR_9->rf_mutex);
 if (VAR_9->Rf_Mode == VAR_0) {
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_7(200);
 } else {
  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 }
 VAR_8 = FUNC_0(VAR_5);
 VAR_7 = (VAR_6 & VAR_5) >> VAR_8;
 FUNC_4(&VAR_9->rf_mutex);
 return VAR_7;
}
