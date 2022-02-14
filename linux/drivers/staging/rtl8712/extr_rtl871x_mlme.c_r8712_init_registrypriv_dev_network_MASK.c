
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ DwellTime; scalar_t__ HopSet; scalar_t__ HopPattern; scalar_t__ Length; } ;
struct TYPE_4__ {int Length; int BeaconPeriod; TYPE_1__ FHConfig; } ;
struct wlan_bssid_ex {TYPE_2__ Configuration; int Ssid; int * MacAddress; } ;
struct registry_priv {int ssid; struct wlan_bssid_ex dev_network; } ;
struct ndis_802_11_ssid {int dummy; } ;
struct eeprom_priv {int dummy; } ;
struct _adapter {struct eeprom_priv eeprompriv; struct registry_priv registrypriv; } ;
struct NDIS_802_11_CONFIGURATION {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (struct eeprom_priv*) ;

void FUNC_2(struct _adapter *VAR_1)
{
 struct registry_priv *VAR_2 = &VAR_1->registrypriv;
 struct eeprom_priv *VAR_3 = &VAR_1->eeprompriv;
 struct wlan_bssid_ex *VAR_4 = &VAR_2->dev_network;
 u8 *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->MacAddress, VAR_5, VAR_0);
 FUNC_0(&VAR_4->Ssid, &VAR_2->ssid,
  sizeof(struct ndis_802_11_ssid));
 VAR_4->Configuration.Length =
    sizeof(struct NDIS_802_11_CONFIGURATION);
 VAR_4->Configuration.BeaconPeriod = 100;
 VAR_4->Configuration.FHConfig.Length = 0;
 VAR_4->Configuration.FHConfig.HopPattern = 0;
 VAR_4->Configuration.FHConfig.HopSet = 0;
 VAR_4->Configuration.FHConfig.DwellTime = 0;
}
