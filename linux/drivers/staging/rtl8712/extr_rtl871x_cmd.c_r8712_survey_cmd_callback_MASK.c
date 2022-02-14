
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dummy; } ;
struct cmd_obj {scalar_t__ res; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct cmd_obj*) ;

void FUNC_2(struct _adapter *VAR_2, struct cmd_obj *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_2->mlmepriv;

 if (VAR_3->res != VAR_0)
  FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_3);
}
