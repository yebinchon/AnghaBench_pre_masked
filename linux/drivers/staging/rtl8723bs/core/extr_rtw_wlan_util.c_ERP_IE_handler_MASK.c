
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_80211_var_ie {int Length; int data; } ;
struct mlme_ext_info {int ERP_enable; int ERP_IE; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct adapter *VAR_0, struct ndis_80211_var_ie *VAR_1)
{
 struct mlme_ext_priv *VAR_2 = &VAR_0->mlmeextpriv;
 struct mlme_ext_info *VAR_3 = &(VAR_2->mlmext_info);

 if (VAR_1->Length > 1)
  return;

 VAR_3->ERP_enable = 1;
 FUNC_0(&(VAR_3->ERP_IE), VAR_1->data, VAR_1->Length);
}
