
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_info {int assoc_AP_vendor; int turboMode_cts2self; int turboMode_rtsen; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;



 int FUNC_0 (struct adapter*,int ,int) ;

void FUNC_1(struct adapter *VAR_1)
{
 struct mlme_ext_priv *VAR_2 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_3 = &(VAR_2->mlmext_info);

 switch (VAR_3->assoc_AP_vendor) {
 case 130:
  VAR_3->turboMode_cts2self = 1;
  VAR_3->turboMode_rtsen = 0;
  break;

 case 129:
  VAR_3->turboMode_cts2self = 0;
  VAR_3->turboMode_rtsen = 1;

  FUNC_0(VAR_1, (~VAR_0), 0);
  break;
 case 128:



  FUNC_0(VAR_1, (~VAR_0), 0);
  break;
 default:
  VAR_3->turboMode_cts2self = 0;
  VAR_3->turboMode_rtsen = 1;
  break;
 }
}
