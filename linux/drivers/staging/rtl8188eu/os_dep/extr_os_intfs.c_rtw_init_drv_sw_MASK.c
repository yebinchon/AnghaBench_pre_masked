
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {struct adapter* padapter; } ;
struct TYPE_3__ {struct adapter* padapter; } ;
struct adapter {TYPE_2__ stapriv; int recvpriv; int xmitpriv; TYPE_1__ cmdpriv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,struct adapter*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,struct adapter*) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct adapter*) ;
 scalar_t__ FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct adapter*) ;

u8 FUNC_14(struct adapter *VAR_5)
{
 u8 VAR_6 = VAR_1;

 FUNC_1(VAR_4, VAR_3, ("+rtw_init_drv_sw\n"));

 if ((FUNC_10(&VAR_5->cmdpriv)) == VAR_0) {
  FUNC_1(VAR_4, VAR_2, ("\n Can't init cmd_priv\n"));
  VAR_6 = VAR_0;
  goto exit;
 }

 VAR_5->cmdpriv.padapter = VAR_5;

 if (FUNC_12(VAR_5) == VAR_0) {
  FUNC_1(VAR_4, VAR_2, ("\n Can't init mlme_priv\n"));
  VAR_6 = VAR_0;
  goto exit;
 }

 if (FUNC_5(VAR_5) == VAR_0) {
  FUNC_1(VAR_4, VAR_2, ("\n Can't init mlme_ext_priv\n"));
  VAR_6 = VAR_0;
  goto exit;
 }

 if (FUNC_4(&VAR_5->xmitpriv, VAR_5) == VAR_0) {
  FUNC_0("Can't _rtw_init_xmit_priv\n");
  VAR_6 = VAR_0;
  goto exit;
 }

 if (FUNC_2(&VAR_5->recvpriv, VAR_5) == VAR_0) {
  FUNC_0("Can't _rtw_init_recv_priv\n");
  VAR_6 = VAR_0;
  goto exit;
 }

 if (FUNC_3(&VAR_5->stapriv) == VAR_0) {
  FUNC_0("Can't _rtw_init_sta_priv\n");
  VAR_6 = VAR_0;
  goto exit;
 }

 VAR_5->stapriv.padapter = VAR_5;

 FUNC_9(VAR_5);

 FUNC_13(VAR_5);

 VAR_6 = FUNC_11(VAR_5);

 FUNC_6(VAR_5);
 FUNC_8(VAR_5);

 FUNC_7(VAR_5);

exit:
 FUNC_1(VAR_4, VAR_3, ("-rtw_init_drv_sw\n"));

 return VAR_6;
}
