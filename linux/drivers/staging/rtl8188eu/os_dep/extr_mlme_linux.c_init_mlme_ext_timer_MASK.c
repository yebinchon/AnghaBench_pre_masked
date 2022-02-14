
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_priv {int link_timer; int survey_timer; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct adapter *VAR_2)
{
 struct mlme_ext_priv *VAR_3 = &VAR_2->mlmeextpriv;

 FUNC_0(&VAR_3->survey_timer, VAR_1, 0);
 FUNC_0(&VAR_3->link_timer, VAR_0, 0);
}
