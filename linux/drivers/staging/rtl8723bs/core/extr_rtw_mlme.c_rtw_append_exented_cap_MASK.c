
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct ht_priv {scalar_t__ bss_coexist; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int ,int,int *,int*) ;

void FUNC_2(struct adapter *VAR_1, u8 *VAR_2, uint *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_1->mlmepriv;
 struct ht_priv *VAR_5 = &VAR_4->htpriv;
 u8 VAR_6[8] = {0};
 u8 *VAR_7;


 if (VAR_5->bss_coexist) {
  FUNC_0(VAR_6, 1);
 }

 VAR_7 = FUNC_1(VAR_2 + *VAR_3, VAR_0, 8, VAR_6, VAR_3);
}
