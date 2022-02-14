
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_priv {int sa_query_timer; int link_timer; int survey_timer; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct adapter *VAR_3)
{
 struct mlme_ext_priv *VAR_4 = &VAR_3->mlmeextpriv;

 FUNC_0(&VAR_4->survey_timer, VAR_2, 0);
 FUNC_0(&VAR_4->link_timer, VAR_0, 0);
 FUNC_0(&VAR_4->sa_query_timer, VAR_1, 0);
}
