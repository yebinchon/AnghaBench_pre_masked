
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlan_bssid_ex {int MacAddress; } ;
struct sta_priv {int dummy; } ;
struct ht_priv {int ht_option; unsigned char ch_offset; } ;
struct sta_info {unsigned char bw_mode; struct ht_priv htpriv; } ;
struct registry_priv {int bw_mode; } ;
struct ndis_80211_var_ie {int Length; scalar_t__ data; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct mlme_ext_info {int bwmode_updated; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {unsigned char cur_bwmode; int cur_channel; unsigned char cur_ch_offset; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct sta_priv stapriv; struct registry_priv registrypriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
struct HT_info_element {int* infos; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 void* VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_1 (struct adapter*,struct ndis_80211_var_ie*) ;
 int FUNC_2 (struct adapter*,int*) ;
 struct sta_info* FUNC_3 (struct sta_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_6, struct ndis_80211_var_ie *VAR_7)
{
 unsigned char VAR_8;
 unsigned char VAR_9;
 struct HT_info_element *VAR_10;
 struct mlme_priv *VAR_11 = &(VAR_6->mlmepriv);
 struct mlme_ext_priv *VAR_12 = &VAR_6->mlmeextpriv;
 struct mlme_ext_info *VAR_13 = &(VAR_12->mlmext_info);
 struct registry_priv *VAR_14 = &VAR_6->registrypriv;
 struct ht_priv *VAR_15 = &VAR_11->htpriv;
 u8 VAR_16 = 0;

 if (!VAR_7)
  return;

 if (VAR_15->ht_option == 0)
  return;

 if (VAR_12->cur_bwmode >= VAR_2)
  return;

 if (VAR_7->Length > sizeof(struct HT_info_element))
  return;

 VAR_10 = (struct HT_info_element *)VAR_7->data;

 if (VAR_12->cur_channel > 14) {
  if ((VAR_14->bw_mode & 0xf0) > 0)
   VAR_16 = 1;
 } else
  if ((VAR_14->bw_mode & 0x0f) > 0)
   VAR_16 = 1;

 if ((VAR_10->infos[0] & FUNC_0(2)) && VAR_16) {
  VAR_8 = VAR_1;

  switch (VAR_10->infos[0] & 0x3) {
  case 1:
   VAR_9 = VAR_4;
   break;

  case 3:
   VAR_9 = VAR_5;
   break;

  default:
   VAR_8 = VAR_0;
   VAR_9 = VAR_3;
   break;
  }
 } else {
  VAR_8 = VAR_0;
  VAR_9 = VAR_3;
 }

 if ((VAR_8 != VAR_12->cur_bwmode) || (VAR_9 != VAR_12->cur_ch_offset)) {
  VAR_13->bwmode_updated = 1;

  VAR_12->cur_bwmode = VAR_8;
  VAR_12->cur_ch_offset = VAR_9;


  FUNC_1(VAR_6, VAR_7);
 } else
  VAR_13->bwmode_updated = 0;

 if (1 == VAR_13->bwmode_updated) {
  struct sta_info *VAR_17;
  struct wlan_bssid_ex *VAR_18 = &(VAR_13->network);
  struct sta_priv *VAR_19 = &VAR_6->stapriv;




  VAR_17 = FUNC_3(VAR_19, VAR_18->MacAddress);
  if (VAR_17) {
   struct ht_priv *VAR_20 = &VAR_17->htpriv;

   if (VAR_20->ht_option) {

    VAR_17->bw_mode = VAR_12->cur_bwmode;
    VAR_20->ch_offset = VAR_12->cur_ch_offset;
   } else {
    VAR_17->bw_mode = VAR_0;
    VAR_20->ch_offset = VAR_3;
   }

   FUNC_2(VAR_6, (u8 *)VAR_17);
  }
 }
}
