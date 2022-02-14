
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ InfrastructureMode; } ;
struct wlan_network {TYPE_3__ network; } ;
struct TYPE_5__ {int ATIMWindow; int DSConfig; } ;
struct wlan_bssid_ex {scalar_t__ InfrastructureMode; int IELength; int Length; TYPE_2__ Configuration; int NetworkTypeInUse; scalar_t__ Rssi; int Privacy; } ;
struct security_priv {scalar_t__ PrivacyAlgrthm; } ;
struct registry_priv {int wireless_mode; int channel; struct wlan_bssid_ex dev_network; } ;
struct TYPE_4__ {struct wlan_network cur_network; } ;
struct _adapter {TYPE_1__ mlmepriv; struct security_priv securitypriv; struct registry_priv registrypriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct registry_priv*) ;
 int FUNC_2 (struct wlan_bssid_ex*) ;

void FUNC_3(struct _adapter *VAR_4)
{
 int VAR_5 = 0;
 struct registry_priv *VAR_6 = &VAR_4->registrypriv;
 struct wlan_bssid_ex *VAR_7 = &VAR_6->dev_network;
 struct security_priv *VAR_8 = &VAR_4->securitypriv;
 struct wlan_network *VAR_9 = &VAR_4->mlmepriv.cur_network;

 VAR_7->Privacy = FUNC_0(VAR_8->PrivacyAlgrthm
         > 0 ? 1 : 0);
 VAR_7->Rssi = 0;
 switch (VAR_6->wireless_mode) {
 case 130:
  VAR_7->NetworkTypeInUse = VAR_0;
  break;
 case 128:
 case 129:
  VAR_7->NetworkTypeInUse = VAR_2;
  break;
 case 131:
  VAR_7->NetworkTypeInUse = VAR_3;
  break;
 default:

  break;
 }
 VAR_7->Configuration.DSConfig = VAR_6->channel;
 if (VAR_9->network.InfrastructureMode == VAR_1)
  VAR_7->Configuration.ATIMWindow = 3;
 VAR_7->InfrastructureMode = VAR_9->network.InfrastructureMode;



 VAR_5 = FUNC_1(VAR_6);
 VAR_7->IELength = VAR_5;
 VAR_7->Length = FUNC_2(VAR_7);
}
