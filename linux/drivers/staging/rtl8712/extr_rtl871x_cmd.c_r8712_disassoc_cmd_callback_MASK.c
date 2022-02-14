
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int lock; } ;
struct cmd_obj {scalar_t__ res; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmd_obj*) ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct _adapter *VAR_2,
     struct cmd_obj *VAR_3)
{
 unsigned long VAR_4;
 struct mlme_priv *VAR_5 = &VAR_2->mlmepriv;

 if (VAR_3->res != VAR_0) {
  FUNC_2(&VAR_5->lock, VAR_4);
  FUNC_1(VAR_5, VAR_1);
  FUNC_3(&VAR_5->lock, VAR_4);
  return;
 }
 FUNC_0(VAR_3);
}
