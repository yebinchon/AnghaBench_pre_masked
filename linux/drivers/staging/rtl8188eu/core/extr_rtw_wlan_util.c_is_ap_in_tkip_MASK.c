
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wlan_bssid_ex {int ie_length; scalar_t__ ies; } ;
struct ndis_802_11_var_ie {int ElementID; scalar_t__ Length; int data; } ;
struct ndis_802_11_fixed_ie {int dummy; } ;
struct mlme_ext_info {struct wlan_bssid_ex network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct wlan_bssid_ex*) ;

unsigned int FUNC_2(struct adapter *VAR_4)
{
 u32 VAR_5;
 struct ndis_802_11_var_ie *VAR_6;
 struct mlme_ext_priv *VAR_7 = &VAR_4->mlmeextpriv;
 struct mlme_ext_info *VAR_8 = &VAR_7->mlmext_info;
 struct wlan_bssid_ex *VAR_9 = &VAR_8->network;

 if (FUNC_1((struct wlan_bssid_ex *)VAR_9) & VAR_2) {
  for (VAR_5 = sizeof(struct ndis_802_11_fixed_ie); VAR_5 < VAR_8->network.ie_length;) {
   VAR_6 = (struct ndis_802_11_var_ie *)(VAR_8->network.ies + VAR_5);

   switch (VAR_6->ElementID) {
   case 128:
    if ((!FUNC_0(VAR_6->data, VAR_1, 4)) && (!FUNC_0((VAR_6->data + 12), VAR_3, 4)))
     return 1;
    break;
   case 129:
    if (!FUNC_0((VAR_6->data + 8), VAR_0, 4))
     return 1;
   default:
    break;
   }

   VAR_5 += (VAR_6->Length + 2);
  }
  return 0;
 } else {
  return 0;
 }
}
