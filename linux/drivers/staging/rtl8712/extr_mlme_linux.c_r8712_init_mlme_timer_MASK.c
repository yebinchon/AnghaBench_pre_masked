
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sitesurvey_ctrl_timer; } ;
struct mlme_priv {int wdg_timer; int dhcp_timer; int scan_to_timer; TYPE_1__ sitesurveyctrl; int assoc_timer; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;

void FUNC_1(struct _adapter *VAR_5)
{
 struct mlme_priv *VAR_6 = &VAR_5->mlmepriv;

 FUNC_0(&VAR_6->assoc_timer, VAR_2, 0);
 FUNC_0(&VAR_6->sitesurveyctrl.sitesurvey_ctrl_timer,
      VAR_3, 0);
 FUNC_0(&VAR_6->scan_to_timer, VAR_0, 0);
 FUNC_0(&VAR_6->dhcp_timer, VAR_1, 0);
 FUNC_0(&VAR_6->wdg_timer, VAR_4, 0);
}
