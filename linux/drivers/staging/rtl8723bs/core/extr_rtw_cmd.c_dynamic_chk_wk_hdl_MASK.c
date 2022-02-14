
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dummy; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*,int ) ;

__attribute__((used)) static void FUNC_9(struct adapter *VAR_1)
{
 struct mlme_priv *VAR_2;
 VAR_2 = &(VAR_1->mlmepriv);

 if (FUNC_1(VAR_2, VAR_0) == 1) {
  FUNC_2(VAR_1);
 }


 FUNC_0(VAR_1);



 {
  FUNC_5(VAR_1);
  FUNC_8(VAR_1, 0);
 }

 FUNC_6(VAR_1);






 FUNC_3(VAR_1);



 if (FUNC_4(VAR_1))
  FUNC_7(VAR_1);
}
