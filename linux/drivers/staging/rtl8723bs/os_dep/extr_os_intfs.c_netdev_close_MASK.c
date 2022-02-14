
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwrctrl_priv {int bInternalAutoSuspend; scalar_t__ rf_pwrstate; int ps_flag; } ;
struct net_device {int dummy; } ;
struct adapter {int net_closed; int netif_up; int bup; int hw_init_completed; } ;
struct TYPE_2__ {int bandroid_scan; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pwrctrl_priv* FUNC_3 (struct adapter*) ;
 TYPE_1__* FUNC_4 (struct adapter*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct adapter*,int,int) ;
 int FUNC_6 (struct adapter*,int) ;
 int FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct adapter*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_4)
{
 struct adapter *VAR_5 = (struct adapter *)FUNC_9(VAR_4);
 struct pwrctrl_priv *VAR_6 = FUNC_3(VAR_5);

 FUNC_2(VAR_1, VAR_0, ("+871x_drv - drv_close\n"));

 if (VAR_6->bInternalAutoSuspend == 1) {

  if (VAR_6->rf_pwrstate == VAR_2)
   VAR_6->ps_flag = 1;
 }
 VAR_5->net_closed = 1;
 VAR_5->netif_up = 0;
 if (VAR_6->rf_pwrstate == VAR_3) {
  FUNC_0("(2)871x_drv - drv_close, bup =%d, hw_init_completed =%d\n", VAR_5->bup, VAR_5->hw_init_completed);


  if (VAR_4) {
   if (!FUNC_10(VAR_4))
    FUNC_11(VAR_4);
  }


  FUNC_1(VAR_5);
  FUNC_5(VAR_5, 500, 0);

  FUNC_8(VAR_5);

  FUNC_6(VAR_5, 1);

  FUNC_7(VAR_5, 1);
 }

 FUNC_12(VAR_5);
 FUNC_4(VAR_5)->bandroid_scan = 0;

 FUNC_2(VAR_1, VAR_0, ("-871x_drv - drv_close\n"));
 FUNC_0("-871x_drv - drv_close, bup =%d\n", VAR_5->bup);

 return 0;
}
