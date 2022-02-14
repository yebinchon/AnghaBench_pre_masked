
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int dummy; } ;
struct mlme_priv {int update_bcn; } ;
struct mlme_ext_info {int state; } ;
struct mlme_ext_priv {int bstart_bss; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,struct sta_info*) ;
 struct sta_info* FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;

void FUNC_4(struct adapter *VAR_1)
{
 struct sta_info *VAR_2 = ((void*)0);
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;
 struct mlme_ext_priv *VAR_4 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_5 = &VAR_4->mlmext_info;



 VAR_3->update_bcn = 0;
 VAR_4->bstart_bss = 0;

 FUNC_3(VAR_1);

 VAR_5->state = VAR_0;


 FUNC_0(VAR_1);


 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_1, VAR_2);
}
