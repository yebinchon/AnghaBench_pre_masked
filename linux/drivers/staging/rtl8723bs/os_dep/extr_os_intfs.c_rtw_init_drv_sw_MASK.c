
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {struct adapter* padapter; } ;
struct TYPE_3__ {struct adapter* padapter; } ;
struct adapter {int fix_rate; int setband; TYPE_2__ stapriv; int security_key_mutex; int recvpriv; int xmitpriv; int evtpriv; TYPE_1__ cmdpriv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,struct adapter*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct adapter*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct adapter*) ;
 scalar_t__ FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (int *) ;

u8 FUNC_15(struct adapter *VAR_6)
{
 u8 VAR_7 = VAR_2;

 FUNC_1(VAR_5, VAR_4, ("+rtw_init_drv_sw\n"));

 FUNC_9(VAR_6);

 FUNC_11(VAR_6);

 if (FUNC_8(&VAR_6->cmdpriv)) {
  FUNC_1(VAR_5, VAR_3, ("\n Can't init cmd_priv\n"));
  VAR_7 = VAR_1;
  goto exit;
 }

 VAR_6->cmdpriv.padapter = VAR_6;

 if (FUNC_10(&VAR_6->evtpriv)) {
  FUNC_1(VAR_5, VAR_3, ("\n Can't init evt_priv\n"));
  VAR_7 = VAR_1;
  goto exit;
 }


 if (FUNC_12(VAR_6) == VAR_1) {
  FUNC_1(VAR_5, VAR_3, ("\n Can't init mlme_priv\n"));
  VAR_7 = VAR_1;
  goto exit;
 }

 FUNC_5(VAR_6);

 if (FUNC_4(&VAR_6->xmitpriv, VAR_6) == VAR_1) {
  FUNC_0("Can't _rtw_init_xmit_priv\n");
  VAR_7 = VAR_1;
  goto exit;
 }

 if (FUNC_2(&VAR_6->recvpriv, VAR_6) == VAR_1) {
  FUNC_0("Can't _rtw_init_recv_priv\n");
  VAR_7 = VAR_1;
  goto exit;
 }

 FUNC_14(&VAR_6->security_key_mutex);




 if (FUNC_3(&VAR_6->stapriv) == VAR_1) {
  FUNC_0("Can't _rtw_init_sta_priv\n");
  VAR_7 = VAR_1;
  goto exit;
 }

 VAR_6->stapriv.padapter = VAR_6;
 VAR_6->setband = VAR_0;
 VAR_6->fix_rate = 0xFF;
 FUNC_7(VAR_6);

 FUNC_13(VAR_6);

 FUNC_6(VAR_6);

exit:

 FUNC_1(VAR_5, VAR_4, ("-rtw_init_drv_sw\n"));

 return VAR_7;
}
