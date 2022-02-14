
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int SsidLength; } ;
struct wlan_bssid_ex {TYPE_3__ Ssid; int IELength; int Length; } ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {unsigned char* parmbuf; int cmdsz; scalar_t__ rspsz; int * rsp; int cmdcode; int list; } ;
struct TYPE_5__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct TYPE_4__ {struct wlan_bssid_ex dev_network; } ;
struct _adapter {TYPE_2__ ledpriv; TYPE_1__ registrypriv; struct cmd_priv cmdpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_obj* FUNC_1 (int,int ) ;
 int FUNC_2 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_3 (struct wlan_bssid_ex*) ;
 int FUNC_4 (struct _adapter*,int ) ;

int FUNC_5(struct _adapter *VAR_4)
{
 struct cmd_obj *VAR_5;
 struct cmd_priv *VAR_6 = &VAR_4->cmdpriv;
 struct wlan_bssid_ex *VAR_7 =
     &VAR_4->registrypriv.dev_network;

 VAR_4->ledpriv.LedControlHandler(VAR_4, VAR_2);
 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_5->list);
 VAR_5->cmdcode = VAR_3;
 VAR_5->parmbuf = (unsigned char *)VAR_7;
 VAR_5->cmdsz = FUNC_3(VAR_7);
 VAR_5->rsp = ((void*)0);
 VAR_5->rspsz = 0;

 VAR_7->Length = VAR_5->cmdsz;
 VAR_7->IELength = VAR_7->IELength;
 VAR_7->Ssid.SsidLength = VAR_7->Ssid.SsidLength;
 FUNC_2(VAR_6, VAR_5);
 return 0;
}
