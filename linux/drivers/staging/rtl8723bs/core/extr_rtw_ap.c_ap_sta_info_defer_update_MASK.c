
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta_info {int state; size_t mac_id; } ;
struct mlme_ext_info {TYPE_1__* FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_2__ {struct sta_info* psta; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,struct sta_info*,int ) ;

void FUNC_1(struct adapter *VAR_1, struct sta_info *VAR_2)
{
 struct mlme_ext_priv *VAR_3 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_4 = &(VAR_3->mlmext_info);

 if (VAR_2->state & VAR_0) {
  VAR_4->FW_sta_info[VAR_2->mac_id].psta = VAR_2;


  FUNC_0(VAR_1, VAR_2, 0);
 }
}
