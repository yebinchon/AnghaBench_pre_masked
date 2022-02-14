
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sitesurvey_parm {void* ss_ssidlen; int ss_ssid; void* passive_mode; void* bsslimit; } ;
struct ndis_802_11_ssid {int SsidLength; int Ssid; } ;
struct mlme_priv {int passive_mode; int scan_to_timer; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct TYPE_2__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {scalar_t__ blnEnableRxFF0Filter; TYPE_1__ ledpriv; struct mlme_priv mlmepriv; struct cmd_priv cmdpriv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct cmd_obj*,struct sitesurvey_parm*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct cmd_obj*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_10 (struct mlme_priv*,int ) ;
 int FUNC_11 (struct _adapter*,int ) ;

u8 FUNC_12(struct _adapter *VAR_9,
   struct ndis_802_11_ssid *VAR_10)
{
 struct cmd_obj *VAR_11;
 struct sitesurvey_parm *VAR_12;
 struct cmd_priv *VAR_13 = &VAR_9->cmdpriv;
 struct mlme_priv *VAR_14 = &VAR_9->mlmepriv;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return VAR_4;
 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_0);
 if (!VAR_12) {
  FUNC_3(VAR_11);
  return VAR_4;
 }
 FUNC_2(VAR_11, VAR_12,
       FUNC_0(VAR_7));
 VAR_12->bsslimit = FUNC_1(48);
 VAR_12->passive_mode = FUNC_1(VAR_14->passive_mode);
 VAR_12->ss_ssidlen = 0;
 FUNC_6(VAR_12->ss_ssid, 0, VAR_1 + 1);
 if ((VAR_10 != ((void*)0)) && (VAR_10->SsidLength)) {
  FUNC_5(VAR_12->ss_ssid, VAR_10->Ssid, VAR_10->SsidLength);
  VAR_12->ss_ssidlen = FUNC_1(VAR_10->SsidLength);
 }
 FUNC_10(VAR_14, VAR_5);
 FUNC_9(VAR_13, VAR_11);
 FUNC_7(&VAR_14->scan_to_timer,
    VAR_8 + FUNC_8(VAR_3));
 VAR_9->ledpriv.LedControlHandler(VAR_9, VAR_2);
 VAR_9->blnEnableRxFF0Filter = 0;
 return VAR_6;
}
