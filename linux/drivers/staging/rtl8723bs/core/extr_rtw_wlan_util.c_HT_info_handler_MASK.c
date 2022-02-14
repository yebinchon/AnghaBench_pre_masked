
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_80211_var_ie {int Length; int data; } ;
struct ht_priv {int ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct mlme_ext_info {int HT_info_enable; int HT_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;
struct HT_info_element {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct adapter *VAR_0, struct ndis_80211_var_ie *VAR_1)
{
 struct mlme_ext_priv *VAR_2 = &VAR_0->mlmeextpriv;
 struct mlme_ext_info *VAR_3 = &(VAR_2->mlmext_info);
 struct mlme_priv *VAR_4 = &VAR_0->mlmepriv;
 struct ht_priv *VAR_5 = &VAR_4->htpriv;

 if (!VAR_1)
  return;

 if (VAR_5->ht_option == 0)
  return;

 if (VAR_1->Length > sizeof(struct HT_info_element))
  return;

 VAR_3->HT_info_enable = 1;
 FUNC_0(&(VAR_3->HT_info), VAR_1->data, VAR_1->Length);

 return;
}
