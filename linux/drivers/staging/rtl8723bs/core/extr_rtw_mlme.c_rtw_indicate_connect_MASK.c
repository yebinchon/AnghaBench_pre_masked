
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int to_join; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct mlme_priv*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct mlme_priv*,int ) ;

void FUNC_7(struct adapter *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_3->mlmepriv;

 FUNC_0(VAR_2, VAR_1, ("+rtw_indicate_connect\n"));

 VAR_4->to_join = 0;

 if (!FUNC_1(&VAR_3->mlmepriv, VAR_0)) {

  FUNC_6(VAR_4, VAR_0);

  FUNC_3(VAR_3);
 }

 FUNC_5(VAR_3, 0);
 FUNC_4(VAR_3, 3000);

 FUNC_0(VAR_2, VAR_1, ("-rtw_indicate_connect: fw_state = 0x%08x\n", FUNC_2(VAR_4)));
}
