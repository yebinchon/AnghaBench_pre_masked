
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {int MacAddress; } ;
struct mlme_ext_info {int aid; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct ieee80211_hdr {int addr2; int addr1; scalar_t__ frame_control; } ;
struct adapter {int eeprompriv; struct mlme_ext_priv mlmeextpriv; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_1, u8 *VAR_2, u32 *VAR_3)
{
 struct ieee80211_hdr *VAR_4;
 struct mlme_ext_priv *VAR_5 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_6 = &VAR_5->mlmext_info;
 __le16 *VAR_7;
 struct wlan_bssid_ex *VAR_8 = &VAR_6->network;

 VAR_4 = (struct ieee80211_hdr *)VAR_2;


 VAR_7 = &VAR_4->frame_control;
 *(VAR_7) = 0;
 FUNC_2(VAR_7);
 FUNC_1(VAR_2, VAR_0);


 FUNC_0(VAR_2, (VAR_6->aid | 0xc000));


 FUNC_3(VAR_4->addr1, VAR_8->MacAddress);


 FUNC_3(VAR_4->addr2, FUNC_4(&VAR_1->eeprompriv));

 *VAR_3 = 16;
}
