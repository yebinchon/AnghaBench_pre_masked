
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sitesurvey_ctrl_timer; } ;
struct TYPE_4__ {int wdg_timer; TYPE_1__ sitesurveyctrl; } ;
struct _adapter {TYPE_2__ mlmepriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct _adapter *VAR_1)
{
 FUNC_0(&VAR_1->mlmepriv.sitesurveyctrl.sitesurvey_ctrl_timer,
    VAR_0 + FUNC_1(5000));
 FUNC_0(&VAR_1->mlmepriv.wdg_timer,
    VAR_0 + FUNC_1(2000));
}
