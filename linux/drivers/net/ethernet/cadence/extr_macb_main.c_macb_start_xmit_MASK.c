
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int data; int head; int len; } ;
struct net_device {int dummy; } ;
struct macb_queue {int tx_tail; int tx_head; } ;
struct macb {int lock; int tx_ring_size; int dev; int max_tx_length; struct macb_queue* queues; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {scalar_t__ gso_size; unsigned int nr_frags; int * frags; } ;


 int FUNC_0 (int ,int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff**,struct net_device*) ;
 int FUNC_7 (struct macb*,int ) ;
 int FUNC_8 (struct macb*,struct macb_queue*,struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct macb*,int ,int) ;
 unsigned int FUNC_10 (unsigned int,int ) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (int ,char*) ;
 struct macb* FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,char*,size_t,int ,int ,int ,int ,int ) ;
 int FUNC_15 (struct net_device*,size_t) ;
 int FUNC_16 (int ,char*,int ,int,int,int ,int,int) ;
 int FUNC_17 (struct sk_buff*) ;
 unsigned int FUNC_18 (int *) ;
 size_t FUNC_19 (struct sk_buff*) ;
 unsigned int FUNC_20 (struct sk_buff*) ;
 TYPE_1__* FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 unsigned int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (int *,unsigned long) ;
 int FUNC_26 (int *,unsigned long) ;
 unsigned int FUNC_27 (struct sk_buff*) ;
 int FUNC_28 () ;

__attribute__((used)) static netdev_tx_t FUNC_29(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 u16 VAR_9 = FUNC_19(VAR_7);
 struct macb *VAR_10 = FUNC_13(VAR_8);
 struct macb_queue *VAR_11 = &VAR_10->queues[VAR_9];
 unsigned long VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;
 bool VAR_18, VAR_19 = 0;
 netdev_tx_t VAR_20 = VAR_5;

 if (FUNC_5(VAR_7)) {
  FUNC_3(VAR_7);
  return VAR_20;
 }

 if (FUNC_6(&VAR_7, VAR_8)) {
  FUNC_3(VAR_7);
  return VAR_20;
 }

 VAR_18 = (FUNC_21(VAR_7)->gso_size != 0);

 if (VAR_18) {
  VAR_19 = !!(FUNC_4(VAR_7)->protocol == VAR_1);


  if (VAR_19)

   VAR_17 = FUNC_23(VAR_7);
  else
   VAR_17 = FUNC_23(VAR_7) + FUNC_27(VAR_7);
  if (FUNC_20(VAR_7) < VAR_17) {
   FUNC_12(VAR_10->dev, "Error - LSO headers fragmented!!!\n");

   return VAR_4;
  }
 } else
  VAR_17 = FUNC_10(FUNC_20(VAR_7), VAR_10->max_tx_length);
 if (VAR_18 && (FUNC_20(VAR_7) > VAR_17))

  VAR_13 = FUNC_1((FUNC_20(VAR_7) - VAR_17), VAR_10->max_tx_length) + 1;
 else
  VAR_13 = FUNC_1(FUNC_20(VAR_7), VAR_10->max_tx_length);
 VAR_14 = FUNC_21(VAR_7)->nr_frags;
 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_15 = FUNC_18(&FUNC_21(VAR_7)->frags[VAR_16]);
  VAR_13 += FUNC_1(VAR_15, VAR_10->max_tx_length);
 }

 FUNC_25(&VAR_10->lock, VAR_12);


 if (FUNC_0(VAR_11->tx_head, VAR_11->tx_tail,
         VAR_10->tx_ring_size) < VAR_13) {
  FUNC_15(VAR_8, VAR_9);
  FUNC_26(&VAR_10->lock, VAR_12);
  FUNC_11(VAR_10->dev, "tx_head = %u, tx_tail = %u\n",
      VAR_11->tx_head, VAR_11->tx_tail);
  return VAR_4;
 }


 if (!FUNC_8(VAR_10, VAR_11, VAR_7, VAR_17)) {
  FUNC_3(VAR_7);
  goto unlock;
 }


 FUNC_28();
 FUNC_24(VAR_7);

 FUNC_9(VAR_10, VAR_3, FUNC_7(VAR_10, VAR_3) | FUNC_2(VAR_6));

 if (FUNC_0(VAR_11->tx_head, VAR_11->tx_tail, VAR_10->tx_ring_size) < 1)
  FUNC_15(VAR_8, VAR_9);

unlock:
 FUNC_26(&VAR_10->lock, VAR_12);

 return VAR_20;
}
