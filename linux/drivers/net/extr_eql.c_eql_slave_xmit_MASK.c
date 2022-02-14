
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int priority; struct net_device* dev; } ;
struct TYPE_7__ {int tx_dropped; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_8__ {int bytes_queued; struct net_device* dev; } ;
typedef TYPE_2__ slave_t ;
typedef int netdev_tx_t ;
struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {TYPE_6__ queue; } ;
typedef TYPE_3__ equalizer_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 equalizer_t *VAR_4 = FUNC_3(VAR_3);
 slave_t *VAR_5;

 FUNC_4(&VAR_4->queue.lock);

 VAR_5 = FUNC_0(&VAR_4->queue);
 if (VAR_5) {
  struct net_device *VAR_6 = VAR_5->dev;

  VAR_2->dev = VAR_6;
  VAR_2->priority = VAR_1;
  VAR_5->bytes_queued += VAR_2->len;
  FUNC_2(VAR_2);
  VAR_3->stats.tx_packets++;
 } else {
  VAR_3->stats.tx_dropped++;
  FUNC_1(VAR_2);
 }

 FUNC_5(&VAR_4->queue.lock);

 return VAR_0;
}
