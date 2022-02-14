
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int restart_queue; } ;
struct iavf_ring {TYPE_1__ tx_stats; int queue_index; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_ring*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

int FUNC_5(struct iavf_ring *VAR_1, int VAR_2)
{
 FUNC_3(VAR_1->netdev, VAR_1->queue_index);

 FUNC_4();


 if (FUNC_1(FUNC_0(VAR_1) < VAR_2))
  return -VAR_0;


 FUNC_2(VAR_1->netdev, VAR_1->queue_index);
 ++VAR_1->tx_stats.restart_queue;
 return 0;
}
