
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlme_priv*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ,int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int) ;
 scalar_t__ FUNC_7 (struct adapter*) ;

void FUNC_8(struct adapter *VAR_6)
{
 struct mlme_priv *VAR_7 = &VAR_6->mlmepriv;

 FUNC_0(VAR_5, VAR_4, ("+rtw_indicate_disconnect\n"));

 FUNC_1(VAR_7, VAR_3|VAR_1);



 if (FUNC_7(VAR_6) > 0)
  FUNC_1(VAR_7, VAR_2);

 if (FUNC_2(&VAR_6->mlmepriv, VAR_2)
  || (FUNC_7(VAR_6) <= 0)
 ) {
  FUNC_5(VAR_6);


  FUNC_6(VAR_6, 3000);

  FUNC_1(VAR_7, VAR_2);

  FUNC_3(VAR_6);
 }

 FUNC_4(VAR_6, VAR_0, 1);
}
