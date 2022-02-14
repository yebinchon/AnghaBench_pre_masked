
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wlan_bssid_ex {int* SupportedRates; scalar_t__ ie_length; int * ies; } ;
struct registry_priv {int cbw40_enable; } ;
struct TYPE_5__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct TYPE_7__ {int rx_mask; } ;
struct TYPE_8__ {TYPE_3__ mcs; int cap_info; } ;
struct TYPE_6__ {int* infos; } ;
struct mlme_ext_info {TYPE_4__ HT_caps; TYPE_2__ HT_info; } ;
struct mlme_ext_priv {int cur_wireless_mode; scalar_t__ cur_bwmode; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct registry_priv registrypriv; struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int *,int ,scalar_t__*,scalar_t__) ;
 int FUNC_3 (int ,int,int,int,int ) ;

u16 FUNC_4(struct adapter *VAR_9)
{
 int VAR_10 = 0;
 u8 *VAR_11;
 u16 VAR_12 = 0, VAR_13 = 0;
 struct mlme_ext_priv *VAR_14 = &VAR_9->mlmeextpriv;
 struct mlme_ext_info *VAR_15 = &VAR_14->mlmext_info;
 struct registry_priv *VAR_16 = &VAR_9->registrypriv;
 struct mlme_priv *VAR_17 = &VAR_9->mlmepriv;
 struct wlan_bssid_ex *VAR_18 = &VAR_17->cur_network.network;
 u8 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 u32 VAR_22 = 0;

 if (!FUNC_0(VAR_17, VAR_7) &&
     !FUNC_0(VAR_17, VAR_4))
  return 0;

 if (VAR_14->cur_wireless_mode & (VAR_5 | VAR_6)) {
  VAR_11 = FUNC_2(&VAR_18->ies[12], VAR_8,
          &VAR_22, VAR_18->ie_length - 12);
  if (VAR_11 && VAR_22 > 0) {

   VAR_19 = (VAR_14->cur_bwmode && (VAR_0 & VAR_15->HT_info.infos[0])) ? 1 : 0;

   VAR_20 = (FUNC_1(VAR_15->HT_caps.cap_info) & VAR_1) ? 1 : 0;
   VAR_21 = (FUNC_1(VAR_15->HT_caps.cap_info) & VAR_2) ? 1 : 0;

   VAR_13 = FUNC_3(
    VAR_3,
    VAR_19 & VAR_16->cbw40_enable,
    VAR_20,
    VAR_21,
    VAR_15->HT_caps.mcs.rx_mask
   );
  }
 } else {
  while (VAR_18->SupportedRates[VAR_10] != 0 &&
         VAR_18->SupportedRates[VAR_10] != 0xFF) {
   VAR_12 = VAR_18->SupportedRates[VAR_10] & 0x7F;
   if (VAR_12 > VAR_13)
    VAR_13 = VAR_12;
   VAR_10++;
  }

  VAR_13 *= 5;
 }

 return VAR_13;
}
