
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae_queue {int rx_ring; int tx_ring; TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* fini_queue ) (struct hnae_queue*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hnae_queue*) ;

__attribute__((used)) static void FUNC_2(struct hnae_queue *VAR_0)
{
 if (VAR_0->dev->ops->fini_queue)
  VAR_0->dev->ops->fini_queue(VAR_0);

 FUNC_0(&VAR_0->tx_ring);
 FUNC_0(&VAR_0->rx_ring);
}
