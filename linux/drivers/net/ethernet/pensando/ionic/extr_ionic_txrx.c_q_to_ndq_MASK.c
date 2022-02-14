
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct ionic_queue {int index; TYPE_1__* lif; } ;
struct TYPE_2__ {int netdev; } ;


 struct netdev_queue* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct netdev_queue *FUNC_1(struct ionic_queue *VAR_0)
{
 return FUNC_0(VAR_0->lif->netdev, VAR_0->index);
}
