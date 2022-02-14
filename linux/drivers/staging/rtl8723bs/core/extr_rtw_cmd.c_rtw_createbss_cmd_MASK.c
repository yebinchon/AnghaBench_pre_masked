
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wlan_bssid_ex {int Length; } ;
struct TYPE_4__ {scalar_t__ SsidLength; int Ssid; } ;
struct mlme_priv {TYPE_2__ assoc_ssid; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; scalar_t__ rspsz; int * rsp; int cmdcode; int list; } ;
struct TYPE_3__ {struct wlan_bssid_ex dev_network; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_priv mlmepriv; struct cmd_priv cmdpriv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct wlan_bssid_ex*) ;
 int FUNC_3 (struct cmd_priv*,struct cmd_obj*) ;
 struct cmd_obj* FUNC_4 (int) ;

u8 FUNC_5(struct adapter *VAR_5)
{
 struct cmd_obj *VAR_6;
 struct cmd_priv *VAR_7 = &VAR_5->cmdpriv;
 struct mlme_priv *VAR_8 = &VAR_5->mlmepriv;
 struct wlan_bssid_ex *VAR_9 = &VAR_5->registrypriv.dev_network;
 u8 VAR_10 = VAR_2;

 if (VAR_8->assoc_ssid.SsidLength == 0) {
  FUNC_1(VAR_4, VAR_3, (" createbss for Any SSid:%s\n", VAR_8->assoc_ssid.Ssid));
 } else {
  FUNC_1(VAR_4, VAR_3, (" createbss for SSid:%s\n", VAR_8->assoc_ssid.Ssid));
 }

 VAR_6 = FUNC_4(sizeof(struct cmd_obj));
 if (VAR_6 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto exit;
 }

 FUNC_0(&VAR_6->list);
 VAR_6->cmdcode = VAR_0;
 VAR_6->parmbuf = (unsigned char *)VAR_9;
 VAR_6->cmdsz = FUNC_2((struct wlan_bssid_ex *)VAR_9);
 VAR_6->rsp = ((void*)0);
 VAR_6->rspsz = 0;

 VAR_9->Length = VAR_6->cmdsz;

 VAR_10 = FUNC_3(VAR_7, VAR_6);

exit:
 return VAR_10;
}
