
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int DSConfig; } ;
struct TYPE_3__ {int SsidLength; unsigned char* Ssid; } ;
struct wlan_bssid_ex {unsigned char* IEs; int IELength; unsigned char* SupportedRates; TYPE_2__ Configuration; TYPE_1__ Ssid; } ;
struct ndis_802_11_fix_ie {int dummy; } ;
struct mlme_ext_info {int state; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int* addr1; int* addr2; int* addr3; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct ieee80211_hdr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned char* FUNC_3 (struct wlan_bssid_ex*) ;
 int FUNC_4 (int*,...) ;
 unsigned char* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned char*) ;
 scalar_t__ FUNC_7 (unsigned char*) ;
 int FUNC_8 (unsigned char*) ;
 int* FUNC_9 (int*,int ,int,unsigned char*,int*) ;

__attribute__((used)) static void FUNC_10(struct adapter *VAR_10, u8 *VAR_11, u32 *VAR_12)
{
 struct ieee80211_hdr *VAR_13;
 __le16 *VAR_14;
 u32 VAR_15, VAR_16;
 struct mlme_ext_priv *VAR_17 = &(VAR_10->mlmeextpriv);
 struct mlme_ext_info *VAR_18 = &(VAR_17->mlmext_info);
 struct wlan_bssid_ex *VAR_19 = &(VAR_18->network);
 u8 VAR_20[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};




 VAR_13 = (struct ieee80211_hdr *)VAR_11;

 VAR_14 = &(VAR_13->frame_control);
 *(VAR_14) = 0;

 FUNC_4(VAR_13->addr1, VAR_20, VAR_0);
 FUNC_4(VAR_13->addr2, FUNC_5(&(VAR_10->eeprompriv)), VAR_0);
 FUNC_4(VAR_13->addr3, FUNC_3(VAR_19), VAR_0);

 FUNC_2(VAR_13, 0 );

 FUNC_1(VAR_11, VAR_2);

 VAR_11 += sizeof(struct ieee80211_hdr_3addr);
 VAR_16 = sizeof (struct ieee80211_hdr_3addr);


 VAR_11 += 8;
 VAR_16 += 8;


 FUNC_4(VAR_11, (unsigned char *)(FUNC_6(VAR_19->IEs)), 2);

 VAR_11 += 2;
 VAR_16 += 2;


 FUNC_4(VAR_11, (unsigned char *)(FUNC_7(VAR_19->IEs)), 2);

 VAR_11 += 2;
 VAR_16 += 2;

 if ((VAR_18->state&0x03) == VAR_4) {

  VAR_16 += VAR_19->IELength - sizeof(struct ndis_802_11_fix_ie);
  FUNC_4(VAR_11, VAR_19->IEs+sizeof(struct ndis_802_11_fix_ie), VAR_16);

  goto _ConstructBeacon;
 }




 VAR_11 = FUNC_9(VAR_11, VAR_8, VAR_19->Ssid.SsidLength, VAR_19->Ssid.Ssid, &VAR_16);


 VAR_15 = FUNC_8(VAR_19->SupportedRates);
 VAR_11 = FUNC_9(VAR_11, VAR_9, ((VAR_15 > 8) ? 8 : VAR_15), VAR_19->SupportedRates, &VAR_16);


 VAR_11 = FUNC_9(VAR_11, VAR_5, 1, (unsigned char *)&(VAR_19->Configuration.DSConfig), &VAR_16);

 if ((VAR_18->state&0x03) == VAR_3) {
  u32 VAR_21;


  VAR_21 = 0;
  VAR_11 = FUNC_9(VAR_11, VAR_7, 2, (unsigned char *)(&VAR_21), &VAR_16);
 }






 if (VAR_15 > 8)
  VAR_11 = FUNC_9(VAR_11, VAR_6, (VAR_15 - 8), (VAR_19->SupportedRates + 8), &VAR_16);




_ConstructBeacon:

 if ((VAR_16 + VAR_1) > 512) {
  FUNC_0("beacon frame too large\n");
  return;
 }

 *VAR_12 = VAR_16;



}
