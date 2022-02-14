
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait; } ;
struct mwifiex_adapter {int hs_activate_wait_q; TYPE_1__ cmd_wait_q; int devdump_timer; int wakeup_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mwifiex_adapter *VAR_0)
{
 FUNC_0(&VAR_0->wakeup_timer);
 FUNC_1(&VAR_0->devdump_timer);
 FUNC_2(VAR_0);
 FUNC_3(&VAR_0->cmd_wait_q.wait);
 FUNC_3(&VAR_0->hs_activate_wait_q);
}
