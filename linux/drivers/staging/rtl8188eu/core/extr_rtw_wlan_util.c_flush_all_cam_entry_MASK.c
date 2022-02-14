
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_ext_info {scalar_t__ FW_sta_info; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct adapter*,int ,int *) ;

void FUNC_2(struct adapter *VAR_1)
{
 struct mlme_ext_priv *VAR_2 = &VAR_1->mlmeextpriv;
 struct mlme_ext_info *VAR_3 = &VAR_2->mlmext_info;

 FUNC_1(VAR_1, VAR_0, ((void*)0));

 FUNC_0((u8 *)(VAR_3->FW_sta_info), 0, sizeof(VAR_3->FW_sta_info));
}
