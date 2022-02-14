
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bInternalAutoSuspend; } ;
struct TYPE_4__ {scalar_t__ ack_tx; } ;
struct adapter {int bup; int bDriverStopped; int bSurpriseRemoved; TYPE_1__ pwrctrlpriv; TYPE_2__ xmitpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_3)
{
 FUNC_0(VAR_2, VAR_1, ("+rtw_dev_unload\n"));

 if (VAR_3->bup) {
  FUNC_1("===> rtw_dev_unload\n");
  VAR_3->bDriverStopped = 1;
  if (VAR_3->xmitpriv.ack_tx)
   FUNC_2(&VAR_3->xmitpriv, VAR_0);

  FUNC_5(VAR_3);

  if (!VAR_3->pwrctrlpriv.bInternalAutoSuspend)
   FUNC_4(VAR_3);


  if (!VAR_3->bSurpriseRemoved) {
   FUNC_3(VAR_3);
   VAR_3->bSurpriseRemoved = 1;
  }

  VAR_3->bup = 0;
 } else {
  FUNC_0(VAR_2, VAR_1,
    ("r871x_dev_unload():padapter->bup == false\n"));
 }

 FUNC_1("<=== rtw_dev_unload\n");

 FUNC_0(VAR_2, VAR_1, ("-rtw_dev_unload\n"));
}
