
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bss_cnt; } ;
struct mlme_ext_priv {TYPE_1__ sitesurvey_res; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct adapter *VAR_1)
{
 struct mlme_ext_priv *VAR_2;
 static u8 VAR_3;

 VAR_2 = &VAR_1->mlmeextpriv;

 if (!VAR_0) {
  if (VAR_2->sitesurvey_res.bss_cnt > 0xFF)
   VAR_3 = 0xFF;
  else
   VAR_3 = (u8)VAR_2->sitesurvey_res.bss_cnt;
 }

 return VAR_3;
}
