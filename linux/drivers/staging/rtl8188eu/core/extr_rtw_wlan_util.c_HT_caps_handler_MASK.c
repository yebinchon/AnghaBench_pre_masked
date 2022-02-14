
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ndis_802_11_var_ie {unsigned int Length; int* data; } ;
struct ht_priv {int ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct TYPE_2__ {int ampdu_params_info; int mcs; } ;
struct mlme_ext_info {int HT_caps_enable; TYPE_1__ HT_caps; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;


 int* VAR_0 ;

void FUNC_0(struct adapter *VAR_1, struct ndis_802_11_var_ie *VAR_2)
{
 unsigned int VAR_3;
 u8 VAR_4, VAR_5;
 struct mlme_ext_priv *VAR_6 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_7 = &VAR_6->mlmext_info;
 struct mlme_priv *VAR_8 = &VAR_1->mlmepriv;
 struct ht_priv *VAR_9 = &VAR_8->htpriv;
 u8 *VAR_10 = (u8 *)(&VAR_7->HT_caps);

 if (!VAR_2)
  return;

 if (!VAR_9->ht_option)
  return;

 VAR_7->HT_caps_enable = 1;

 for (VAR_3 = 0; VAR_3 < (VAR_2->Length); VAR_3++) {
  if (VAR_3 != 2) {

   VAR_10[VAR_3] &= (VAR_2->data[VAR_3]);
  } else {

   if ((VAR_7->HT_caps.ampdu_params_info & 0x3) > (VAR_2->data[VAR_3] & 0x3))
    VAR_4 = VAR_2->data[VAR_3] & 0x3;
   else
    VAR_4 = VAR_7->HT_caps.ampdu_params_info & 0x3;

   if ((VAR_7->HT_caps.ampdu_params_info & 0x1c) > (VAR_2->data[VAR_3] & 0x1c))
    VAR_5 = VAR_7->HT_caps.ampdu_params_info & 0x1c;
   else
    VAR_5 = VAR_2->data[VAR_3] & 0x1c;

   VAR_7->HT_caps.ampdu_params_info = VAR_4 | VAR_5;
  }
 }


 for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
  ((u8 *)&VAR_7->HT_caps.mcs)[VAR_3] &= VAR_0[VAR_3];
}
