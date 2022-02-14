
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ndis_802_11_var_ie {scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ qos_option; } ;
struct mlme_priv {TYPE_1__ qospriv; } ;
struct mlme_ext_info {int WMM_enable; int WMM_param; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;
struct WMM_para_element {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int) ;

int FUNC_1(struct adapter *VAR_1, struct ndis_802_11_var_ie *VAR_2)
{
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;
 struct mlme_ext_priv *VAR_4 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_5 = &VAR_4->mlmext_info;

 if (VAR_3->qospriv.qos_option == 0) {
  VAR_5->WMM_enable = 0;
  return VAR_0;
 }

 VAR_5->WMM_enable = 1;
 FUNC_0(&VAR_5->WMM_param, VAR_2->data + 6, sizeof(struct WMM_para_element));
 return 1;
}
