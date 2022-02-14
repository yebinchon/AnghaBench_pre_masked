
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int rtsen; int cts2self; } ;
struct registry_priv {int vrtl_carrier_sense; int vcs_type; } ;
struct mlme_ext_info {int ERP_IE; int ERP_enable; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct registry_priv registrypriv; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct adapter *VAR_0, struct sta_info *VAR_1)
{
 struct registry_priv *VAR_2 = &VAR_0->registrypriv;
 struct mlme_ext_priv *VAR_3 = &VAR_0->mlmeextpriv;
 struct mlme_ext_info *VAR_4 = &(VAR_3->mlmext_info);

 switch (VAR_2->vrtl_carrier_sense) {
 case 0:
  VAR_1->rtsen = 0;
  VAR_1->cts2self = 0;
  break;

 case 1:
  if (VAR_2->vcs_type == 1) {
   VAR_1->rtsen = 1;
   VAR_1->cts2self = 0;
  } else {
   VAR_1->rtsen = 0;
   VAR_1->cts2self = 1;
  }
  break;

 case 2:
 default:
  if ((VAR_4->ERP_enable) && (VAR_4->ERP_IE & FUNC_0(1))) {
   if (VAR_2->vcs_type == 1) {
    VAR_1->rtsen = 1;
    VAR_1->cts2self = 0;
   } else {
    VAR_1->rtsen = 0;
    VAR_1->cts2self = 1;
   }
  } else {
   VAR_1->rtsen = 0;
   VAR_1->cts2self = 0;
  }
  break;
 }
}
