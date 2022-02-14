
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int watchdog_timer; int watchdog_wq; int rtl_wq; } ;
struct rtl_priv {TYPE_1__ works; } ;
struct TYPE_4__ {int watchdog_timer; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct rtl_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int *,int ) ;
 struct rtl_priv* VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_4(struct timer_list *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3.watchdog_timer);

 FUNC_3(VAR_5->works.rtl_wq,
      &VAR_5->works.watchdog_wq, 0);

 FUNC_2(&VAR_5->works.watchdog_timer,
    VAR_1 + FUNC_0(VAR_0));
}
