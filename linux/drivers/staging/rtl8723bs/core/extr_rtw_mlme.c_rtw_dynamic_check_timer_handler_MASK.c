
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct adapter {int hw_init_completed; int bDriverStopped; int bSurpriseRemoved; int net_closed; } ;
struct TYPE_2__ {int bFwCurrentInPSMode; } ;


 int FUNC_0 (char*,int ,int) ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 scalar_t__ FUNC_9 (struct adapter*,int) ;

void FUNC_10(struct adapter *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->hw_init_completed == 0)
  return;

 if ((VAR_0->bDriverStopped == 1) || (VAR_0->bSurpriseRemoved == 1))
  return;

 if (VAR_0->net_closed == 1)
  return;

 if (FUNC_4(VAR_0))
  FUNC_0("IsBtDisabled =%d, IsBtControlLps =%d\n", FUNC_3(VAR_0), FUNC_2(VAR_0));

 if ((FUNC_1(VAR_0)->bFwCurrentInPSMode == 1)
  && (FUNC_2(VAR_0) == 0)
  ) {
  u8 VAR_1;

  FUNC_5(VAR_0);

  VAR_1 = FUNC_9(VAR_0, 1);
  if (VAR_1) {

   FUNC_8(VAR_0);
  } else {

  }

 } else {
  if (FUNC_4(VAR_0)) {
   FUNC_7(VAR_0);
  }
 }


 FUNC_6(VAR_0);
}
