
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_timeouts; } ;
struct spider_net_card {TYPE_1__ spider_stats; int tx_timeout_task_counter; int tx_timeout_task; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct spider_net_card* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_1)
{
 struct spider_net_card *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(&VAR_2->tx_timeout_task_counter);
 if (VAR_1->flags & VAR_0)
  FUNC_3(&VAR_2->tx_timeout_task);
 else
  FUNC_0(&VAR_2->tx_timeout_task_counter);
 VAR_2->spider_stats.tx_timeouts++;
}
