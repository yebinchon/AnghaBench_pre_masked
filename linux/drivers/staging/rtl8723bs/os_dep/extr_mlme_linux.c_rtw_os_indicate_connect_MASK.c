
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dummy; } ;
struct adapter {scalar_t__* pid; int pnetdev; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (scalar_t__,int ) ;

void FUNC_6(struct adapter *VAR_3)
{
 struct mlme_priv *VAR_4 = &(VAR_3->mlmepriv);

 if ((FUNC_0(VAR_4, VAR_1) == 1) ||
  (FUNC_0(VAR_4, VAR_2) == 1)) {
  FUNC_2(VAR_3);
 } else
  FUNC_3(VAR_3);

 FUNC_4(VAR_3);
 FUNC_1(VAR_3->pnetdev);

 if (VAR_3->pid[2] != 0)
  FUNC_5(VAR_3->pid[2], VAR_0);
}
