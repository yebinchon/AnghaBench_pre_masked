
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_1, u8 *VAR_2, int VAR_3)
{
 struct mlme_priv *VAR_4;

 VAR_1 = (struct adapter *)VAR_2;
 VAR_4 = &VAR_1->mlmepriv;






 FUNC_2(VAR_1);
 FUNC_4(VAR_1);

 FUNC_3(VAR_1);
}
