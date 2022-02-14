
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dynamic_chk_timer; int scan_to_timer; int assoc_timer; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct adapter *VAR_3)
{
 struct mlme_priv *VAR_4 = &VAR_3->mlmepriv;

 FUNC_0(&VAR_4->assoc_timer, VAR_0, 0);
 FUNC_0(&VAR_4->scan_to_timer, VAR_2, 0);
 FUNC_0(&VAR_4->dynamic_chk_timer,
      VAR_1, 0);
}
