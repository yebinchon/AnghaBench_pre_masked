
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {int status; scalar_t__ retry; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

int FUNC_0(struct adapter *VAR_2)
{
 unsigned int VAR_3;
 struct mlme_ext_priv *VAR_4 = &VAR_2->mlmeextpriv;
 struct mlme_ext_info *VAR_5 = &(VAR_4->mlmext_info);

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_5->FW_sta_info[VAR_3].status == 0) {
   VAR_5->FW_sta_info[VAR_3].status = 1;
   VAR_5->FW_sta_info[VAR_3].retry = 0;
   break;
  }
 }

 return VAR_3;
}
