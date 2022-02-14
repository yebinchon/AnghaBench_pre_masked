
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct virtnet_info {struct send_queue* sq; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {int syncp; int kicks; } ;
struct TYPE_8__ {int weight; } ;
struct send_queue {TYPE_3__ stats; TYPE_4__* vq; TYPE_1__ napi; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_9__ {int tx_dropped; int tx_fifo_errors; } ;
struct net_device {TYPE_2__ stats; int dev; } ;
typedef int netdev_tx_t ;
struct TYPE_11__ {scalar_t__ num_free; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct send_queue*,int) ;
 scalar_t__ FUNC_3 () ;
 struct netdev_queue* FUNC_4 (struct net_device*,int) ;
 struct virtnet_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int) ;
 scalar_t__ FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (TYPE_4__*) ;
 scalar_t__ FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (struct send_queue*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_22(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct virtnet_info *VAR_4 = FUNC_5(VAR_3);
 int VAR_5 = FUNC_11(VAR_2);
 struct send_queue *VAR_6 = &VAR_4->sq[VAR_5];
 int VAR_7;
 struct netdev_queue *VAR_8 = FUNC_4(VAR_3, VAR_5);
 bool VAR_9 = !FUNC_6();
 bool VAR_10 = VAR_6->napi.weight;


 FUNC_2(VAR_6, 0);

 if (VAR_10 && VAR_9)
  FUNC_18(VAR_6->vq);


 FUNC_13(VAR_2);


 VAR_7 = FUNC_21(VAR_6, VAR_2);


 if (FUNC_16(VAR_7)) {
  VAR_3->stats.tx_fifo_errors++;
  if (FUNC_3())
   FUNC_1(&VAR_3->dev,
     "Unexpected TXQ (%d) queue failure: %d\n",
     VAR_5, VAR_7);
  VAR_3->stats.tx_dropped++;
  FUNC_0(VAR_2);
  return VAR_1;
 }


 if (!VAR_10) {
  FUNC_12(VAR_2);
  FUNC_10(VAR_2);
 }
 if (VAR_6->vq->num_free < 2+VAR_0) {
  FUNC_8(VAR_3, VAR_5);
  if (!VAR_10 &&
      FUNC_16(!FUNC_18(VAR_6->vq))) {

   FUNC_2(VAR_6, 0);
   if (VAR_6->vq->num_free >= 2+VAR_0) {
    FUNC_7(VAR_3, VAR_5);
    FUNC_17(VAR_6->vq);
   }
  }
 }

 if (VAR_9 || FUNC_9(VAR_8)) {
  if (FUNC_19(VAR_6->vq) && FUNC_20(VAR_6->vq)) {
   FUNC_14(&VAR_6->stats.syncp);
   VAR_6->stats.kicks++;
   FUNC_15(&VAR_6->stats.syncp);
  }
 }

 return VAR_1;
}
