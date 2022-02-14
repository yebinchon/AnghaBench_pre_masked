
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int lock; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u8 FUNC_8(struct adapter *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_3->mlmepriv;

 FUNC_6(&VAR_4->lock);

 if (FUNC_1(VAR_4, VAR_0)) {
  FUNC_0(VAR_2, VAR_1,
    ("MgntActrtw_set_802_11_disassociate: rtw_indicate_disconnect\n"));

  FUNC_2(VAR_3, 0, 1);
  FUNC_4(VAR_3);
  FUNC_3(VAR_3);
  FUNC_5(VAR_3);
 }

 FUNC_7(&VAR_4->lock);

 return 1;
}
