
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_ext_info {int network; } ;
struct mlme_ext_priv {struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
typedef int s32 ;


 int FUNC_0 (struct adapter*,int *,int ,int) ;
 int * FUNC_1 (int *) ;

s32 FUNC_2(struct adapter *VAR_0, u8 *VAR_1)
{
 struct mlme_ext_priv *VAR_2;
 struct mlme_ext_info *VAR_3;


 VAR_2 = &VAR_0->mlmeextpriv;
 VAR_3 = &VAR_2->mlmext_info;


 if (!VAR_1)
  VAR_1 = FUNC_1(&(VAR_3->network));

 return FUNC_0(VAR_0, VAR_1, 0, 0);
}
