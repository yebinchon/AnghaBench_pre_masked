
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {scalar_t__ ie_length; int ies; int * MacAddress; } ;
struct mlme_ext_info {struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int addr3; int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef scalar_t__ __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (struct ieee80211_hdr*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_2, u8 *VAR_3, u32 *VAR_4, u8 *VAR_5, bool VAR_6)
{
 struct ieee80211_hdr *VAR_7;
 __le16 *VAR_8;
 u8 *VAR_9, *VAR_10;
 u32 VAR_11;
 struct mlme_ext_priv *VAR_12 = &VAR_2->mlmeextpriv;
 struct mlme_ext_info *VAR_13 = &VAR_12->mlmext_info;
 struct wlan_bssid_ex *VAR_14 = &VAR_13->network;

 VAR_7 = (struct ieee80211_hdr *)VAR_3;

 VAR_9 = FUNC_4(&VAR_2->eeprompriv);
 VAR_10 = VAR_14->MacAddress;

 VAR_8 = &VAR_7->frame_control;
 *(VAR_8) = 0;
 FUNC_2(VAR_7->addr1, VAR_5);
 FUNC_2(VAR_7->addr2, VAR_9);
 FUNC_2(VAR_7->addr3, VAR_10);

 FUNC_1(VAR_7, 0);
 FUNC_0(VAR_8, VAR_1);

 VAR_11 = sizeof(struct ieee80211_hdr_3addr);
 VAR_3 += VAR_11;

 if (VAR_14->ie_length > VAR_0)
  return;

 FUNC_3(VAR_3, VAR_14->ies, VAR_14->ie_length);
 VAR_3 += VAR_14->ie_length;
 VAR_11 += VAR_14->ie_length;

 *VAR_4 = VAR_11;
}
