
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int ATIMWindow; int DSConfig; int BeaconPeriod; } ;
struct TYPE_3__ {int SsidLength; int * Ssid; } ;
struct wlan_bssid_ex {TYPE_2__ Configuration; int * rates; TYPE_1__ Ssid; scalar_t__ Privacy; int * IEs; } ;
struct registry_priv {scalar_t__ preamble; int wireless_mode; struct wlan_bssid_ex dev_network; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int,int *,int*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct registry_priv *VAR_9)
{
 int VAR_10;
 uint VAR_11 = 0;
 struct wlan_bssid_ex *VAR_12 = &VAR_9->dev_network;
 u8 *VAR_13 = VAR_12->IEs;
 u16 VAR_14 = (u16)VAR_12->Configuration.BeaconPeriod;


 VAR_11 += 8;
 VAR_13 += VAR_11;

 *(__le16 *)VAR_13 = FUNC_0(VAR_14);
 VAR_11 += 2;
 VAR_13 += 2;

 *(u16 *)VAR_13 = 0;
 *(__le16 *)VAR_13 |= FUNC_0(VAR_6);
 if (VAR_9->preamble == VAR_0)
  *(__le16 *)VAR_13 |= FUNC_0(VAR_8);
 if (VAR_12->Privacy)
  *(__le16 *)VAR_13 |= FUNC_0(VAR_7);
 VAR_11 += 2;
 VAR_13 += 2;

 VAR_13 = FUNC_2(VAR_13, VAR_4, VAR_12->Ssid.SsidLength,
     VAR_12->Ssid.Ssid, &VAR_11);

 FUNC_3(VAR_12->rates, VAR_9->wireless_mode);
 VAR_10 = FUNC_1(VAR_12->rates);
 if (VAR_10 > 8) {
  VAR_13 = FUNC_2(VAR_13, VAR_5, 8,
      VAR_12->rates, &VAR_11);
  VAR_13 = FUNC_2(VAR_13, VAR_2, (VAR_10 - 8),
      (VAR_12->rates + 8), &VAR_11);
 } else {
  VAR_13 = FUNC_2(VAR_13, VAR_5,
      VAR_10, VAR_12->rates, &VAR_11);
 }

 VAR_13 = FUNC_2(VAR_13, VAR_1, 1,
     (u8 *)&VAR_12->Configuration.DSConfig, &VAR_11);

 VAR_13 = FUNC_2(VAR_13, VAR_3, 2,
     (u8 *)&VAR_12->Configuration.ATIMWindow, &VAR_11);
 return VAR_11;
}
