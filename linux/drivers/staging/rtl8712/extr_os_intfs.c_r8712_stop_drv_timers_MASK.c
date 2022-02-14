
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sitesurvey_ctrl_timer; } ;
struct TYPE_6__ {TYPE_1__ sitesurveyctrl; int wdg_timer; int dhcp_timer; int scan_to_timer; int assoc_timer; } ;
struct TYPE_5__ {int tkip_timer; } ;
struct _adapter {TYPE_3__ mlmepriv; TYPE_2__ securitypriv; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct _adapter *VAR_0)
{
 FUNC_0(&VAR_0->mlmepriv.assoc_timer);
 FUNC_0(&VAR_0->securitypriv.tkip_timer);
 FUNC_0(&VAR_0->mlmepriv.scan_to_timer);
 FUNC_0(&VAR_0->mlmepriv.dhcp_timer);
 FUNC_0(&VAR_0->mlmepriv.wdg_timer);
 FUNC_0(&VAR_0->mlmepriv.sitesurveyctrl.sitesurvey_ctrl_timer);
}
