
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int SignalQuality; int SignalStrength; } ;
struct wlan_bssid_ex {long Rssi; TYPE_3__ PhyInfo; } ;
struct TYPE_6__ {int signal_strength; int signal_qual; } ;
struct TYPE_5__ {int network; } ;
struct TYPE_8__ {TYPE_1__ cur_network; } ;
struct adapter {TYPE_2__ recvpriv; TYPE_4__ mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (struct wlan_bssid_ex*) ;
 scalar_t__ FUNC_2 (int *,struct wlan_bssid_ex*) ;
 int FUNC_3 (int*,int*,int ) ;
 int FUNC_4 (struct adapter*,struct wlan_bssid_ex*,struct wlan_bssid_ex*) ;

void FUNC_5(struct wlan_bssid_ex *VAR_1, struct wlan_bssid_ex *VAR_2,
 struct adapter *VAR_3, bool VAR_4)
{
 long VAR_5 = VAR_1->Rssi;
 u8 VAR_6 = VAR_2->PhyInfo.SignalQuality;
 u8 VAR_7;
 u8 VAR_8;
 long VAR_9;

 FUNC_4(VAR_3, VAR_1, VAR_2);


 if (FUNC_0(&VAR_3->mlmepriv, VAR_0) &&
     FUNC_2(&VAR_3->mlmepriv.cur_network.network, VAR_2)) {

  VAR_7 = VAR_3->recvpriv.signal_strength;
  VAR_8 = VAR_3->recvpriv.signal_qual;

  if (VAR_6 != 101)
   VAR_9 = (VAR_2->Rssi + VAR_1->Rssi * 4) / 5;
  else
   VAR_9 = VAR_5;
 } else {
  if (VAR_6 != 101) {
   VAR_7 = ((u32)(VAR_2->PhyInfo.SignalStrength)+(u32)(VAR_1->PhyInfo.SignalStrength)*4)/5;
   VAR_8 = ((u32)(VAR_2->PhyInfo.SignalQuality)+(u32)(VAR_1->PhyInfo.SignalQuality)*4)/5;
   VAR_9 = (VAR_2->Rssi+VAR_1->Rssi*4)/5;
  } else {

   VAR_7 = VAR_1->PhyInfo.SignalStrength;
   VAR_8 = VAR_1->PhyInfo.SignalQuality;
   VAR_9 = VAR_1->Rssi;
  }
 }
 if (VAR_4)
  FUNC_3((u8 *)VAR_1, (u8 *)VAR_2, FUNC_1(VAR_2));
 VAR_1->PhyInfo.SignalStrength = VAR_7;
 VAR_1->PhyInfo.SignalQuality = VAR_8;
 VAR_1->Rssi = VAR_9;
}
