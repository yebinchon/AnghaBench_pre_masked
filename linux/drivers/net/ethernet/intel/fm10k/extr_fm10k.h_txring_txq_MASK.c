
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct fm10k_ring {size_t queue_index; TYPE_1__* netdev; } ;
struct TYPE_2__ {struct netdev_queue* _tx; } ;



__attribute__((used)) static inline struct netdev_queue *FUNC_0(const struct fm10k_ring *VAR_0)
{
 return &VAR_0->netdev->_tx[VAR_0->queue_index];
}
