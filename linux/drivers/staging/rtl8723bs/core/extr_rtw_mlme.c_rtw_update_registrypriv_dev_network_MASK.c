
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ InfrastructureMode; } ;
struct wlan_network {TYPE_3__ network; } ;
struct TYPE_5__ {int DSConfig; int ATIMWindow; } ;
struct wlan_bssid_ex {int Privacy; scalar_t__ InfrastructureMode; int IELength; int Length; TYPE_2__ Configuration; void* NetworkTypeInUse; scalar_t__ Rssi; } ;
struct security_priv {scalar_t__ dot11PrivacyAlgrthm; } ;
struct registry_priv {int wireless_mode; int channel; struct wlan_bssid_ex dev_network; } ;
struct TYPE_4__ {struct wlan_network cur_network; } ;
struct adapter {TYPE_1__ mlmepriv; struct security_priv securitypriv; struct registry_priv registrypriv; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct wlan_bssid_ex*) ;
 int FUNC_2 (struct registry_priv*) ;

void FUNC_3(struct adapter *VAR_6)
{
 int VAR_7 = 0;
 struct registry_priv *VAR_8 = &VAR_6->registrypriv;
 struct wlan_bssid_ex *VAR_9 = &VAR_8->dev_network;
 struct security_priv *VAR_10 = &VAR_6->securitypriv;
 struct wlan_network *VAR_11 = &VAR_6->mlmepriv.cur_network;


 VAR_9->Privacy = (VAR_10->dot11PrivacyAlgrthm > 0 ? 1 : 0) ;

 VAR_9->Rssi = 0;

 switch (VAR_8->wireless_mode) {
 case 133:
  VAR_9->NetworkTypeInUse = (VAR_0);
  break;
 case 130:
 case 132:
 case 128:
 case 129:
 case 131:
  VAR_9->NetworkTypeInUse = (VAR_2);
  break;
 case 136:
 case 134:
  VAR_9->NetworkTypeInUse = (VAR_3);
  break;
 case 135:
  if (VAR_8->channel > 14)
   VAR_9->NetworkTypeInUse = (VAR_3);
  else
   VAR_9->NetworkTypeInUse = (VAR_2);
  break;
 default:

  break;
 }

 VAR_9->Configuration.DSConfig = (VAR_8->channel);
 FUNC_0(VAR_5, VAR_4, ("pregistrypriv->channel =%d, pdev_network->Configuration.DSConfig = 0x%x\n", VAR_8->channel, VAR_9->Configuration.DSConfig));

 if (VAR_11->network.InfrastructureMode == VAR_1)
  VAR_9->Configuration.ATIMWindow = (0);

 VAR_9->InfrastructureMode = (VAR_11->network.InfrastructureMode);





 VAR_7 = FUNC_2(VAR_8);

 VAR_9->IELength = VAR_7;

 VAR_9->Length = FUNC_1((struct wlan_bssid_ex *)VAR_9);



}
