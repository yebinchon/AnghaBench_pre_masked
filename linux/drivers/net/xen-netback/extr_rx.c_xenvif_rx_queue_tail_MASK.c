
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct xenvif_queue {scalar_t__ rx_queue_len; scalar_t__ rx_queue_max; TYPE_2__ rx_queue; int id; TYPE_1__* vif; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* dev; } ;


 int FUNC_0 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct xenvif_queue *VAR_0, struct sk_buff *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0->rx_queue.lock, VAR_2);

 FUNC_0(&VAR_0->rx_queue, VAR_1);

 VAR_0->rx_queue_len += VAR_1->len;
 if (VAR_0->rx_queue_len > VAR_0->rx_queue_max) {
  struct net_device *VAR_3 = VAR_0->vif->dev;

  FUNC_2(FUNC_1(VAR_3, VAR_0->id));
 }

 FUNC_4(&VAR_0->rx_queue.lock, VAR_2);
}
