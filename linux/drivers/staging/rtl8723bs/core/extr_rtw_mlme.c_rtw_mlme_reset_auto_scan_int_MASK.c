
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlme_priv {int auto_scan_int_ms; int roam_scan_int_ms; } ;
struct mlme_ext_info {scalar_t__ VHT_enable; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct TYPE_2__ {scalar_t__ wifi_spec; } ;
struct adapter {TYPE_1__ registrypriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*,int ) ;

void FUNC_3(struct adapter *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_3->mlmepriv;
 struct mlme_ext_priv *VAR_5 = &VAR_3->mlmeextpriv;
 struct mlme_ext_info *VAR_6 = &(VAR_5->mlmext_info);

 if (VAR_6->VHT_enable)
  VAR_4->auto_scan_int_ms = 0;
 else if (VAR_3->registrypriv.wifi_spec && FUNC_1(VAR_3) == 1)
  VAR_4->auto_scan_int_ms = 60*1000;
 else if (FUNC_2(VAR_3, VAR_0)) {
  if (FUNC_0(VAR_4, VAR_1) && FUNC_0(VAR_4, VAR_2))
   VAR_4->auto_scan_int_ms = VAR_4->roam_scan_int_ms;
 } else
  VAR_4->auto_scan_int_ms = 0;

 return;
}
