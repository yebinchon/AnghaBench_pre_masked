
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct adapter*,int ,int ) ;

void FUNC_2(struct adapter *VAR_2)
{
 struct mlme_priv *VAR_3 = &(VAR_2->mlmepriv);
 u8 VAR_4 = 0;

 if (FUNC_0(VAR_3, VAR_1))
  FUNC_1(VAR_2, VAR_0, VAR_4);
}
