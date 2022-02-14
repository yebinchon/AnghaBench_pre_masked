
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int lock; } ;
struct cmd_obj {scalar_t__ res; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmd_obj*) ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct adapter *VAR_4, struct cmd_obj *VAR_5)
{
 struct mlme_priv *VAR_6 = &VAR_4->mlmepriv;

 if (VAR_5->res != VAR_0) {
  FUNC_3(&VAR_6->lock);
  FUNC_2(VAR_6, VAR_1);
  FUNC_4(&VAR_6->lock);

  FUNC_0(VAR_3, VAR_2, ("\n ***Error: disconnect_cmd_callback Fail ***\n."));
  return;
 }

 FUNC_1(VAR_5);
}
