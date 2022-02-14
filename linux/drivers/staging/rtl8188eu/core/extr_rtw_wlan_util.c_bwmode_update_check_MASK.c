
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_bssid_ex {int MacAddress; } ;
struct sta_priv {int dummy; } ;
struct ht_priv {unsigned char bwmode; unsigned char ch_offset; scalar_t__ ht_option; } ;
struct sta_info {struct ht_priv htpriv; } ;
struct registry_priv {scalar_t__ cbw40_enable; } ;
struct ndis_802_11_var_ie {int Length; scalar_t__ data; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct mlme_ext_info {int bwmode_updated; struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {unsigned char cur_bwmode; unsigned char cur_ch_offset; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct sta_priv stapriv; struct registry_priv registrypriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
struct HT_info_element {int* infos; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 void* VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (struct adapter*,struct ndis_802_11_var_ie*) ;
 struct sta_info* FUNC_2 (struct sta_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_5, struct ndis_802_11_var_ie *VAR_6)
{
 unsigned char VAR_7;
 unsigned char VAR_8;
 struct HT_info_element *VAR_9;
 struct mlme_priv *VAR_10 = &VAR_5->mlmepriv;
 struct mlme_ext_priv *VAR_11 = &VAR_5->mlmeextpriv;
 struct mlme_ext_info *VAR_12 = &VAR_11->mlmext_info;
 struct registry_priv *VAR_13 = &VAR_5->registrypriv;
 struct ht_priv *VAR_14 = &VAR_10->htpriv;

 if (!VAR_6)
  return;

 if (!VAR_14)
  return;

 if (VAR_6->Length > sizeof(struct HT_info_element))
  return;

 VAR_9 = (struct HT_info_element *)VAR_6->data;

 if ((VAR_9->infos[0] & FUNC_0(2)) && VAR_13->cbw40_enable) {
  VAR_7 = VAR_4;

  switch (VAR_9->infos[0] & 0x3) {
  case 1:
   VAR_8 = VAR_1;
   break;
  case 3:
   VAR_8 = VAR_2;
   break;
  default:
   VAR_8 = VAR_0;
   break;
  }
 } else {
  VAR_7 = VAR_3;
  VAR_8 = VAR_0;
 }

 if ((VAR_7 != VAR_11->cur_bwmode) ||
     (VAR_8 != VAR_11->cur_ch_offset)) {
  VAR_12->bwmode_updated = 1;

  VAR_11->cur_bwmode = VAR_7;
  VAR_11->cur_ch_offset = VAR_8;


  FUNC_1(VAR_5, VAR_6);
 } else {
  VAR_12->bwmode_updated = 0;
 }

 if (VAR_12->bwmode_updated) {
  struct sta_info *VAR_15;
  struct wlan_bssid_ex *VAR_16 = &VAR_12->network;
  struct sta_priv *VAR_17 = &VAR_5->stapriv;


  VAR_15 = FUNC_2(VAR_17, VAR_16->MacAddress);
  if (VAR_15) {
   struct ht_priv *VAR_18 = &VAR_15->htpriv;

   if (VAR_18->ht_option) {

    VAR_18->bwmode = VAR_11->cur_bwmode;
    VAR_18->ch_offset = VAR_11->cur_ch_offset;
   } else {
    VAR_18->bwmode = VAR_3;
    VAR_18->ch_offset = VAR_0;
   }
  }
 }
}
