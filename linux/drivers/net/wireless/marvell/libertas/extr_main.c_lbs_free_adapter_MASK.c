
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int auto_deepsleep_timer; int tx_lockup_timer; int command_timer; int event_fifo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lbs_private*) ;

__attribute__((used)) static void FUNC_3(struct lbs_private *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->event_fifo);
 FUNC_0(&VAR_0->command_timer);
 FUNC_0(&VAR_0->tx_lockup_timer);
 FUNC_0(&VAR_0->auto_deepsleep_timer);
}
