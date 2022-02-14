
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ InfrastructureMode; } ;
struct wlan_network {TYPE_3__ network; } ;
struct TYPE_5__ {scalar_t__ ATIMWindow; int DSConfig; } ;
struct wlan_bssid_ex {int Privacy; scalar_t__ InfrastructureMode; int ie_length; int Length; TYPE_2__ Configuration; void* NetworkTypeInUse; scalar_t__ Rssi; } ;
struct security_priv {scalar_t__ dot11PrivacyAlgrthm; } ;
struct registry_priv {int wireless_mode; int channel; struct wlan_bssid_ex dev_network; } ;
struct TYPE_4__ {struct wlan_network cur_network; } ;
struct adapter {TYPE_1__ mlmepriv; struct security_priv securitypriv; struct registry_priv registrypriv; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct wlan_bssid_ex*) ;
 int FUNC_2 (struct registry_priv*) ;

void FUNC_3(struct adapter *VAR_5)
{
 int VAR_6 = 0;
 struct registry_priv *VAR_7 = &VAR_5->registrypriv;
 struct wlan_bssid_ex *VAR_8 = &VAR_7->dev_network;
 struct security_priv *VAR_9 = &VAR_5->securitypriv;
 struct wlan_network *VAR_10 = &VAR_5->mlmepriv.cur_network;

 VAR_8->Privacy = VAR_9->dot11PrivacyAlgrthm > 0 ? 1 : 0;

 VAR_8->Rssi = 0;

 switch (VAR_7->wireless_mode) {
 case 133:
  VAR_8->NetworkTypeInUse = VAR_0;
  break;
 case 130:
 case 132:
 case 128:
 case 129:
 case 131:
  VAR_8->NetworkTypeInUse = VAR_2;
  break;
 default:
  VAR_8->NetworkTypeInUse = VAR_2;
  break;
 }

 VAR_8->Configuration.DSConfig = VAR_7->channel;
 FUNC_0(VAR_4, VAR_3,
   ("pregistrypriv->channel=%d, pdev_network->Configuration.DSConfig=0x%x\n",
   VAR_7->channel, VAR_8->Configuration.DSConfig));

 if (VAR_10->network.InfrastructureMode == VAR_1)
  VAR_8->Configuration.ATIMWindow = 0;

 VAR_8->InfrastructureMode = VAR_10->network.InfrastructureMode;




 VAR_6 = FUNC_2(VAR_7);
 VAR_8->ie_length = VAR_6;
 VAR_8->Length = FUNC_1((struct wlan_bssid_ex *)VAR_8);



}
