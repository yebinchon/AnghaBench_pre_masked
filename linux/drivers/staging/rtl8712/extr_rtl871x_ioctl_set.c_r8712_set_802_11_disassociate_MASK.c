
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int lock; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (struct _adapter*) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

u8 FUNC_6(struct _adapter *VAR_1)
{
 unsigned long VAR_2;
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;

 FUNC_4(&VAR_3->lock, VAR_2);
 if (FUNC_0(VAR_3, VAR_0)) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
 }
 FUNC_5(&VAR_3->lock, VAR_2);
 return 1;
}
