
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wlan_bssid_ex {int Length; } ;
struct TYPE_4__ {scalar_t__ ssid_length; int ssid; } ;
struct mlme_priv {TYPE_2__ assoc_ssid; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; scalar_t__ rspsz; int * rsp; int cmdcode; int list; } ;
struct TYPE_3__ {struct wlan_bssid_ex dev_network; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_priv mlmepriv; struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct wlan_bssid_ex*) ;
 struct cmd_obj* FUNC_3 (int,int ) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct cmd_priv*,struct cmd_obj*) ;

u8 FUNC_6(struct adapter *VAR_7)
{
 struct cmd_obj *VAR_8;
 struct cmd_priv *VAR_9 = &VAR_7->cmdpriv;
 struct mlme_priv *VAR_10 = &VAR_7->mlmepriv;
 struct wlan_bssid_ex *VAR_11 = &VAR_7->registrypriv.dev_network;
 u8 VAR_12 = VAR_4;

 FUNC_4(VAR_7, VAR_1);

 if (VAR_10->assoc_ssid.ssid_length == 0)
  FUNC_1(VAR_6, VAR_5, (" createbss for Any SSid:%s\n", VAR_10->assoc_ssid.ssid));
 else
  FUNC_1(VAR_6, VAR_5, (" createbss for SSid:%s\n", VAR_10->assoc_ssid.ssid));

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0);
 if (!VAR_8) {
  VAR_12 = VAR_3;
  goto exit;
 }

 FUNC_0(&VAR_8->list);
 VAR_8->cmdcode = VAR_2;
 VAR_8->parmbuf = (unsigned char *)VAR_11;
 VAR_8->cmdsz = FUNC_2((struct wlan_bssid_ex *)VAR_11);
 VAR_8->rsp = ((void*)0);
 VAR_8->rspsz = 0;
 VAR_11->Length = VAR_8->cmdsz;
 VAR_12 = FUNC_5(VAR_9, VAR_8);
exit:

 return VAR_12;
}
