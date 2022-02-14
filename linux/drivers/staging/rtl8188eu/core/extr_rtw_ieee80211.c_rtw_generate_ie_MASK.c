
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int DSConfig; int ATIMWindow; scalar_t__ BeaconPeriod; } ;
struct TYPE_3__ {int ssid_length; scalar_t__* ssid; } ;
struct wlan_bssid_ex {scalar_t__* ies; scalar_t__* SupportedRates; TYPE_2__ Configuration; TYPE_1__ ssid; scalar_t__ Privacy; } ;
struct registry_priv {scalar_t__ preamble; scalar_t__ wireless_mode; struct wlan_bssid_ex dev_network; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (scalar_t__*,int ,int,scalar_t__*,int*) ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;

int FUNC_4(struct registry_priv *VAR_12)
{
 u8 VAR_13;
 int VAR_14;
 uint VAR_15 = 0;
 struct wlan_bssid_ex *VAR_16 = &VAR_12->dev_network;
 u8 *VAR_17 = VAR_16->ies;


 VAR_15 += 8;
 VAR_17 += VAR_15;


 *(__le16 *)VAR_17 = FUNC_0((u16)VAR_16->Configuration.BeaconPeriod);
 VAR_15 += 2;
 VAR_17 += 2;


 *(u16 *)VAR_17 = 0;

 *(__le16 *)VAR_17 |= FUNC_0(VAR_9);

 if (VAR_12->preamble == VAR_0)
  *(__le16 *)VAR_17 |= FUNC_0(VAR_11);

 if (VAR_16->Privacy)
  *(__le16 *)VAR_17 |= FUNC_0(VAR_10);

 VAR_15 += 2;
 VAR_17 += 2;


 VAR_17 = FUNC_2(VAR_17, VAR_7, VAR_16->ssid.ssid_length, VAR_16->ssid.ssid, &VAR_15);


 if (VAR_12->wireless_mode == VAR_1) {
  if (VAR_16->Configuration.DSConfig > 14)
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_3;
 } else {
  VAR_13 = VAR_12->wireless_mode;
 }

 FUNC_3(VAR_16->SupportedRates, VAR_13);

 VAR_14 = FUNC_1(VAR_16->SupportedRates);

 if (VAR_14 > 8) {
  VAR_17 = FUNC_2(VAR_17, VAR_8, 8, VAR_16->SupportedRates, &VAR_15);

 } else {
  VAR_17 = FUNC_2(VAR_17, VAR_8, VAR_14, VAR_16->SupportedRates, &VAR_15);
 }


 VAR_17 = FUNC_2(VAR_17, VAR_4, 1, (u8 *)&(VAR_16->Configuration.DSConfig), &VAR_15);



 VAR_17 = FUNC_2(VAR_17, VAR_6, 2, (u8 *)&(VAR_16->Configuration.ATIMWindow), &VAR_15);

 if (VAR_14 > 8)
  VAR_17 = FUNC_2(VAR_17, VAR_5, (VAR_14 - 8), (VAR_16->SupportedRates + 8), &VAR_15);

 return VAR_15;
}
