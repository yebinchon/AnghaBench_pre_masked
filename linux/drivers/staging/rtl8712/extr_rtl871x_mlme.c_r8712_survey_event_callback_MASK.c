
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_11__ {scalar_t__* IEs; } ;
struct wlan_network {TYPE_5__ network; } ;
struct TYPE_12__ {int SsidLength; scalar_t__* Ssid; } ;
struct TYPE_7__ {int DwellTime; int HopPattern; int HopSet; int Length; } ;
struct TYPE_8__ {int ATIMWindow; int BeaconPeriod; int DSConfig; int Length; TYPE_1__ FHConfig; } ;
struct wlan_bssid_ex {int Length; int Privacy; int Rssi; int NetworkTypeInUse; int InfrastructureMode; int IELength; char* IEs; TYPE_6__ Ssid; int MacAddress; TYPE_2__ Configuration; } ;
struct TYPE_9__ {scalar_t__* IEs; int MacAddress; } ;
struct TYPE_10__ {TYPE_3__ network; } ;
struct mlme_priv {int lock2; int scanned_queue; TYPE_4__ cur_network; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (scalar_t__*,char*,int) ;
 struct wlan_network* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct wlan_bssid_ex*) ;
 int FUNC_6 (struct _adapter*,struct wlan_bssid_ex*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct _adapter *VAR_3, u8 *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;
 struct wlan_bssid_ex *VAR_7;
 struct mlme_priv *VAR_8 = &VAR_3->mlmepriv;

 VAR_7 = (struct wlan_bssid_ex *)VAR_4;
 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6 > sizeof(struct wlan_bssid_ex))
  return;
 FUNC_7(&VAR_8->lock2, VAR_5);

 if (FUNC_0(VAR_8, VAR_1)) {
  if (!FUNC_2(&(VAR_8->cur_network.network.MacAddress),
      VAR_7->MacAddress, VAR_0)) {
   struct wlan_network *VAR_9 = ((void*)0);

   FUNC_3(VAR_8->cur_network.network.IEs,
    VAR_7->IEs, 8);
   VAR_9 = FUNC_4(
      &VAR_8->scanned_queue,
      VAR_7->MacAddress);
   if (VAR_9) {
    FUNC_3(VAR_9->network.IEs,
     VAR_7->IEs, 8);
    goto exit;
   }
  }
 }

 if (!FUNC_0(VAR_8, VAR_2)) {
  if (VAR_7->Ssid.Ssid[0] != 0) {
   FUNC_6(VAR_3, VAR_7);
  } else {
   VAR_7->Ssid.SsidLength = 8;
   FUNC_3(VAR_7->Ssid.Ssid, "<hidden>", 8);
   FUNC_6(VAR_3, VAR_7);
  }
 }
exit:
 FUNC_8(&VAR_8->lock2, VAR_5);
}
