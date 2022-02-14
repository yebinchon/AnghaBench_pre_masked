
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int to_join; int lock; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3 (struct _adapter *VAR_1)
{
 unsigned long VAR_2;
 struct mlme_priv *VAR_3 = &VAR_1->mlmepriv;

 FUNC_1(&VAR_3->lock, VAR_2);
 FUNC_0(VAR_3, VAR_0);
 VAR_3->to_join = 0;
 FUNC_2(&VAR_3->lock, VAR_2);
}
