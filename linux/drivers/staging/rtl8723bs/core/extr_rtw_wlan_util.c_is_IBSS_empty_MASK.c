
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {int status; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct adapter *VAR_3)
{
 unsigned int VAR_4;
 struct mlme_ext_priv *VAR_5 = &VAR_3->mlmeextpriv;
 struct mlme_ext_info *VAR_6 = &(VAR_5->mlmext_info);

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_6->FW_sta_info[VAR_4].status == 1)
   return VAR_2;
 }

 return 1;
}
