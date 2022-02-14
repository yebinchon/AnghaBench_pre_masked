
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int qdisc; } ;
struct net_device {int num_tx_queues; } ;
struct Qdisc {int enqueue; } ;


 struct netdev_queue* FUNC_0 (struct net_device const*,int ) ;
 struct Qdisc* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct net_device *VAR_0)
{
 struct netdev_queue *VAR_1;
 struct Qdisc *VAR_2;

 if (VAR_0->num_tx_queues > 1)
  return 0;

 VAR_1 = FUNC_0(VAR_0, 0);
 VAR_2 = FUNC_1(VAR_1->qdisc);

 return !VAR_2->enqueue;
}
