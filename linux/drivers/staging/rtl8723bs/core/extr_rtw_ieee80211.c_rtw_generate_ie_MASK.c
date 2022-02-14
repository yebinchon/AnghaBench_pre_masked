
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {int DSConfig; int ATIMWindow; scalar_t__ BeaconPeriod; } ;
struct TYPE_3__ {int SsidLength; int* Ssid; } ;
struct wlan_bssid_ex {int* IEs; int* SupportedRates; TYPE_2__ Configuration; TYPE_1__ Ssid; scalar_t__ Privacy; } ;
struct registry_priv {scalar_t__ preamble; int wireless_mode; int ht_enable; struct wlan_bssid_ex dev_network; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int*,int ,int,int*,int*) ;
 int FUNC_3 (int*,int) ;

int FUNC_4(struct registry_priv *VAR_14)
{
 u8 VAR_15;
 int VAR_16 = 0, VAR_17;
 struct wlan_bssid_ex *VAR_18 = &VAR_14->dev_network;
 u8 *VAR_19 = VAR_18->IEs;


 VAR_16 += 8;
 VAR_19 += VAR_16;


 *(__le16 *)VAR_19 = FUNC_0((u16)VAR_18->Configuration.BeaconPeriod);
 VAR_16 += 2;
 VAR_19 += 2;


 *(u16 *)VAR_19 = 0;

 *(__le16 *)VAR_19 |= FUNC_0(VAR_11);

 if (VAR_14->preamble == VAR_0)
  *(__le16 *)VAR_19 |= FUNC_0(VAR_13);

 if (VAR_18->Privacy)
  *(__le16 *)VAR_19 |= FUNC_0(VAR_12);

 VAR_16 += 2;
 VAR_19 += 2;


 VAR_19 = FUNC_2(VAR_19, VAR_9, VAR_18->Ssid.SsidLength, VAR_18->Ssid.Ssid, &VAR_16);


 if (VAR_14->wireless_mode == VAR_1) {
  if (VAR_18->Configuration.DSConfig > 14)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_3;
 } else {
  VAR_15 = VAR_14->wireless_mode;
 }

 FUNC_3(VAR_18->SupportedRates, VAR_15);

 VAR_17 = FUNC_1(VAR_18->SupportedRates);

 if (VAR_17 > 8) {
  VAR_19 = FUNC_2(VAR_19, VAR_10, 8, VAR_18->SupportedRates, &VAR_16);

 } else {
  VAR_19 = FUNC_2(VAR_19, VAR_10, VAR_17, VAR_18->SupportedRates, &VAR_16);
 }


 VAR_19 = FUNC_2(VAR_19, VAR_6, 1, (u8 *)&(VAR_18->Configuration.DSConfig), &VAR_16);



 VAR_19 = FUNC_2(VAR_19, VAR_8, 2, (u8 *)&(VAR_18->Configuration.ATIMWindow), &VAR_16);

 if (VAR_17 > 8) {
  VAR_19 = FUNC_2(VAR_19, VAR_7, (VAR_17 - 8), (VAR_18->SupportedRates + 8), &VAR_16);
 }


 if (((VAR_14->wireless_mode&VAR_5) || (VAR_14->wireless_mode&VAR_4))
  && (VAR_14->ht_enable == 1)) {

 }





 return VAR_16;
}
