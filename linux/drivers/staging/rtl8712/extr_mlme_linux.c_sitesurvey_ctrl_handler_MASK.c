
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_6__ {int sitesurvey_ctrl_timer; } ;
struct TYPE_7__ {TYPE_2__ sitesurveyctrl; } ;
struct _adapter {TYPE_3__ mlmepriv; } ;
struct TYPE_5__ {int sitesurvey_ctrl_timer; } ;
struct TYPE_8__ {TYPE_1__ sitesurveyctrl; } ;


 int FUNC_0 (struct _adapter*) ;
 struct _adapter* VAR_0 ;
 struct _adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct _adapter *VAR_4 =
  FUNC_1(VAR_4, VAR_3,
      VAR_2.sitesurveyctrl.sitesurvey_ctrl_timer);

 FUNC_0(VAR_4);
 FUNC_2(&VAR_4->mlmepriv.sitesurveyctrl.sitesurvey_ctrl_timer,
    VAR_1 + FUNC_3(3000));
}
