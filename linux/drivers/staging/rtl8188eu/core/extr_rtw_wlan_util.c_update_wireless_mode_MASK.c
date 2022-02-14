
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wlan_bssid_ex {unsigned char* SupportedRates; } ;
struct mlme_ext_info {int HT_enable; scalar_t__ HT_caps_enable; scalar_t__ HT_info_enable; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {int cur_wireless_mode; struct mlme_ext_info mlmext_info; } ;
struct TYPE_2__ {int wireless_mode; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned char*,int) ;
 scalar_t__ FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct adapter*,int ,int *) ;
 int FUNC_4 (struct adapter*,int ) ;

void FUNC_5(struct adapter *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 u32 VAR_10;
 struct mlme_ext_priv *VAR_11 = &VAR_7->mlmeextpriv;
 struct mlme_ext_info *VAR_12 = &VAR_11->mlmext_info;
 struct wlan_bssid_ex *VAR_13 = &VAR_12->network;
 unsigned char *VAR_14 = VAR_13->SupportedRates;

 VAR_8 = FUNC_2(VAR_13->SupportedRates);

 if (VAR_12->HT_info_enable && VAR_12->HT_caps_enable)
  VAR_12->HT_enable = 1;

 if (VAR_12->HT_enable)
  VAR_9 = VAR_6;

 if (FUNC_1(VAR_14, VAR_8))
  VAR_9 |= VAR_3;
 else if (FUNC_0(VAR_14, VAR_8))
  VAR_9 |= VAR_4;
 else
  VAR_9 |= VAR_5;

 VAR_11->cur_wireless_mode = VAR_9 & VAR_7->registrypriv.wireless_mode;

 VAR_10 = 0x0a0a0808;


 FUNC_3(VAR_7, VAR_0, (u8 *)&VAR_10);

 FUNC_4(VAR_7,
       VAR_11->cur_wireless_mode & VAR_3 ?
       VAR_1 : VAR_2);
}
