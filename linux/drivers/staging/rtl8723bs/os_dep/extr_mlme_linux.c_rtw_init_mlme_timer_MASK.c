
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int set_scan_deny_timer; int dynamic_chk_timer; int scan_to_timer; int assoc_timer; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct adapter *VAR_4)
{
 struct mlme_priv *VAR_5 = &VAR_4->mlmepriv;

 FUNC_0(&VAR_5->assoc_timer, VAR_1, 0);
 FUNC_0(&VAR_5->scan_to_timer, VAR_3, 0);
 FUNC_0(&VAR_5->dynamic_chk_timer,
      VAR_0, 0);
 FUNC_0(&VAR_5->set_scan_deny_timer,
      VAR_2, 0);
}
