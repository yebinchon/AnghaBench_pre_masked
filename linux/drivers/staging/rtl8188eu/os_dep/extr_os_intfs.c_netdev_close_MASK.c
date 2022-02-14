
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ rf_pwrstate; int ps_flag; scalar_t__ bInternalAutoSuspend; } ;
struct adapter {int net_closed; int bup; int hw_init_completed; TYPE_1__ pwrctrlpriv; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct adapter*,int,int) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct adapter *VAR_6 = (struct adapter *)FUNC_9(VAR_5);

 FUNC_2(VAR_2, VAR_1, ("+88eu_drv - drv_close\n"));

 if (VAR_6->pwrctrlpriv.bInternalAutoSuspend) {
  if (VAR_6->pwrctrlpriv.rf_pwrstate == VAR_3)
   VAR_6->pwrctrlpriv.ps_flag = 1;
 }
 VAR_6->net_closed = 1;

 if (VAR_6->pwrctrlpriv.rf_pwrstate == VAR_4) {
  FUNC_0("(2)88eu_drv - drv_close, bup =%d, hw_init_completed =%d\n",
   VAR_6->bup, VAR_6->hw_init_completed);


  if (VAR_5) {
   if (!FUNC_10(VAR_5))
    FUNC_4(VAR_5);
  }


  FUNC_1(VAR_6);
  FUNC_5(VAR_6, 500, 0);

  FUNC_8(VAR_6);

  FUNC_6(VAR_6);

  FUNC_7(VAR_6, 1);

  FUNC_3(VAR_6, VAR_0);
 }

 FUNC_2(VAR_2, VAR_1, ("-88eu_drv - drv_close\n"));
 FUNC_0("-88eu_drv - drv_close, bup =%d\n", VAR_6->bup);
 return 0;
}
