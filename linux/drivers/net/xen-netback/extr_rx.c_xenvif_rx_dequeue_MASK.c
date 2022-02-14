
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct xenvif_queue {scalar_t__ rx_queue_len; scalar_t__ rx_queue_max; TYPE_2__ rx_queue; int id; TYPE_1__* vif; } ;
struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 struct sk_buff* FUNC_0 (TYPE_2__*) ;
 struct netdev_queue* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct xenvif_queue *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_3(&VAR_0->rx_queue.lock);

 VAR_1 = FUNC_0(&VAR_0->rx_queue);
 if (VAR_1) {
  VAR_0->rx_queue_len -= VAR_1->len;
  if (VAR_0->rx_queue_len < VAR_0->rx_queue_max) {
   struct netdev_queue *VAR_2;

   VAR_2 = FUNC_1(VAR_0->vif->dev, VAR_0->id);
   FUNC_2(VAR_2);
  }
 }

 FUNC_4(&VAR_0->rx_queue.lock);

 return VAR_1;
}
