
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int assoc_timer; } ;
struct cmd_obj {scalar_t__ res; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cmd_obj*) ;

void FUNC_3(struct _adapter *VAR_2, struct cmd_obj *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_2->mlmepriv;

 if (VAR_3->res != VAR_0)
  FUNC_0(&VAR_4->assoc_timer,
     VAR_1 + FUNC_1(1));
 FUNC_2(VAR_3);
}
