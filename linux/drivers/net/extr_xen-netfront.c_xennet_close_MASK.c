
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_queue {int napi; } ;
struct netfront_info {struct netfront_queue* queues; int netdev; } ;
struct net_device {unsigned int real_num_tx_queues; } ;


 int FUNC_0 (int *) ;
 struct netfront_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2 = VAR_0->real_num_tx_queues;
 unsigned int VAR_3;
 struct netfront_queue *VAR_4;
 FUNC_2(VAR_1->netdev);
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_4 = &VAR_1->queues[VAR_3];
  FUNC_0(&VAR_4->napi);
 }
 return 0;
}
