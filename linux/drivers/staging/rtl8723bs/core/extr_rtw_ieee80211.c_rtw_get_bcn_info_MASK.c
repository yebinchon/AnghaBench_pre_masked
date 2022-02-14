
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ ht_info_infos_0; void* ht_cap_info; int encryp_protocol; } ;
struct TYPE_4__ {int Ssid; } ;
struct TYPE_5__ {int Privacy; scalar_t__ IELength; scalar_t__ IEs; TYPE_1__ Ssid; } ;
struct wlan_network {TYPE_3__ BcnInfo; TYPE_2__ network; } ;
struct ieee80211_ht_cap {int cap_info; } ;
struct HT_info_element {scalar_t__* infos; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct wlan_network*) ;
 unsigned char* FUNC_5 (scalar_t__,int ,unsigned int*,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int *,scalar_t__*,int *,scalar_t__*) ;

void FUNC_7(struct wlan_network *VAR_10)
{
 unsigned short VAR_11 = 0;
 u8 VAR_12 = 0;

 u16 VAR_13 = 0, VAR_14 = 0;
 struct HT_info_element *VAR_15 = ((void*)0);
 struct ieee80211_ht_cap *VAR_16 = ((void*)0);
 unsigned int VAR_17;
 unsigned char *VAR_18;
 __le16 VAR_19;

 FUNC_2((u8 *)&VAR_19, FUNC_3(VAR_10->network.IEs), 2);
 VAR_11 = FUNC_1(VAR_19);
 if (VAR_11 & VAR_4) {
  VAR_12 = 1;
  VAR_10->network.Privacy = 1;
 } else {
  VAR_10->BcnInfo.encryp_protocol = VAR_0;
 }
 FUNC_6(VAR_10->network.IEs, VAR_10->network.IELength, ((void*)0), &VAR_14, ((void*)0), &VAR_13);
 FUNC_0(VAR_9, VAR_8, ("rtw_get_bcn_info: ssid =%s\n", VAR_10->network.Ssid.Ssid));
 FUNC_0(VAR_9, VAR_8, ("rtw_get_bcn_info: wpa_len =%d rsn_len =%d\n", VAR_13, VAR_14));
 FUNC_0(VAR_9, VAR_8, ("rtw_get_bcn_info: ssid =%s\n", VAR_10->network.Ssid.Ssid));
 FUNC_0(VAR_9, VAR_8, ("rtw_get_bcn_info: wpa_len =%d rsn_len =%d\n", VAR_13, VAR_14));

 if (VAR_14 > 0) {
  VAR_10->BcnInfo.encryp_protocol = VAR_3;
 } else if (VAR_13 > 0) {
  VAR_10->BcnInfo.encryp_protocol = VAR_2;
 } else {
  if (VAR_12)
   VAR_10->BcnInfo.encryp_protocol = VAR_1;
 }
 FUNC_0(VAR_9, VAR_8, ("rtw_get_bcn_info: pnetwork->encryp_protocol is %x\n",
    VAR_10->BcnInfo.encryp_protocol));
 FUNC_0(VAR_9, VAR_8, ("rtw_get_bcn_info: pnetwork->encryp_protocol is %x\n",
    VAR_10->BcnInfo.encryp_protocol));
 FUNC_4(VAR_10);



 VAR_18 = FUNC_5(VAR_10->network.IEs + VAR_5, VAR_7, &VAR_17, VAR_10->network.IELength - VAR_5);
 if (VAR_18 && VAR_17 > 0) {
   VAR_16 = (struct ieee80211_ht_cap *)(VAR_18 + 2);
   VAR_10->BcnInfo.ht_cap_info = FUNC_1(VAR_16->cap_info);
 } else {
   VAR_10->BcnInfo.ht_cap_info = 0;
 }

 VAR_18 = FUNC_5(VAR_10->network.IEs + VAR_5, VAR_6, &VAR_17, VAR_10->network.IELength - VAR_5);
 if (VAR_18 && VAR_17 > 0) {
   VAR_15 = (struct HT_info_element *)(VAR_18 + 2);
   VAR_10->BcnInfo.ht_info_infos_0 = VAR_15->infos[0];
 } else {
   VAR_10->BcnInfo.ht_info_infos_0 = 0;
 }
}
