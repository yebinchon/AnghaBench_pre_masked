
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_ext_priv {int link_timer; int survey_timer; struct adapter* padapter; } ;
struct adapter {scalar_t__ bDriverStopped; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mlme_ext_priv *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->padapter;

 if (!VAR_1)
  return;

 if (VAR_1->bDriverStopped) {
  FUNC_0(&VAR_0->survey_timer);
  FUNC_0(&VAR_0->link_timer);

 }
}
