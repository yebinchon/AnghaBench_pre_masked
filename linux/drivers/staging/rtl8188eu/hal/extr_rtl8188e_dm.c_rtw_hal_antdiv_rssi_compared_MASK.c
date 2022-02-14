
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Optimum_antenna; } ;
struct wlan_bssid_ex {scalar_t__ Rssi; TYPE_2__ PhyInfo; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_3__ {scalar_t__ AntDivCfg; } ;



void FUNC_0(struct adapter *VAR_0, struct wlan_bssid_ex *VAR_1, struct wlan_bssid_ex *VAR_2)
{
 if (VAR_0->HalData->AntDivCfg != 0) {

  if (VAR_1->Rssi >= VAR_2->Rssi) {
   VAR_2->Rssi = VAR_1->Rssi;
   VAR_2->PhyInfo.Optimum_antenna = VAR_1->PhyInfo.Optimum_antenna;
  }
 }
}
