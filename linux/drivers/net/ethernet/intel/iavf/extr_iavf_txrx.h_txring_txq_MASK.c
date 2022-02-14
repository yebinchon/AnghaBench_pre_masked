
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct iavf_ring {int queue_index; int netdev; } ;


 struct netdev_queue* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct netdev_queue *FUNC_1(const struct iavf_ring *VAR_0)
{
 return FUNC_0(VAR_0->netdev, VAR_0->queue_index);
}
