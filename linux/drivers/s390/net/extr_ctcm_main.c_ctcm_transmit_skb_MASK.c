
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {unsigned long len; int users; int data; int protocol; } ;
struct net_device {struct ctcm_priv* ml_priv; } ;
struct ll_header {int length; scalar_t__ unused; void* type; } ;
struct TYPE_7__ {int tx_bytes; int tx_packets; } ;
struct ctcm_priv {TYPE_1__ stats; } ;
struct TYPE_8__ {unsigned long txlen; int doios_single; int send_stamp; } ;
struct channel {int collect_len; int max_bufsize; struct net_device* netdev; int io_queue; int timer; TYPE_2__ prof; int cdev; TYPE_5__* ccw; int fsm; scalar_t__ retry; TYPE_3__* trans_skb; int collect_lock; int collect_queue; } ;
struct ccw1 {int dummy; } ;
typedef int __u16 ;
struct TYPE_10__ {int count; } ;
struct TYPE_9__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 struct sk_buff* FUNC_0 (int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_5__*,int ,int,int ) ;
 int FUNC_3 (struct channel*,int,char*) ;
 scalar_t__ FUNC_4 (struct channel*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *,int ,int ,struct channel*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (int ) ;
 int VAR_10 ;
 int FUNC_13 (scalar_t__,struct ll_header*,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_5__*,int ) ;
 int FUNC_17 (struct sk_buff*,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct sk_buff*,unsigned long) ;
 scalar_t__ FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (TYPE_3__*,int) ;
 int FUNC_22 (struct sk_buff*,int ,int) ;
 int FUNC_23 (int *,struct sk_buff*) ;
 int FUNC_24 (TYPE_3__*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (int *,unsigned long) ;
 int FUNC_27 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_28(struct channel *VAR_11, struct sk_buff *VAR_12)
{
 unsigned long VAR_13;
 struct ll_header VAR_14;
 int VAR_15 = 0;
 __u16 VAR_16;
 int VAR_17;
 struct sk_buff *VAR_18;
 unsigned long VAR_19;





 FUNC_26(&VAR_11->collect_lock, VAR_13);
 if (FUNC_10(VAR_11->fsm) != VAR_3) {
  int VAR_20 = VAR_12->len + VAR_8;

  if (VAR_11->collect_len + VAR_20 > VAR_11->max_bufsize - 2) {
   FUNC_27(&VAR_11->collect_lock, VAR_13);
   return -VAR_4;
  } else {
   FUNC_15(&VAR_12->users);
   VAR_14.length = VAR_20;
   VAR_14.type = FUNC_1(VAR_12->protocol);
   VAR_14.unused = 0;
   FUNC_13(FUNC_20(VAR_12, VAR_8), &VAR_14,
          VAR_8);
   FUNC_23(&VAR_11->collect_queue, VAR_12);
   VAR_11->collect_len += VAR_20;
  }
  FUNC_27(&VAR_11->collect_lock, VAR_13);
    goto done;
 }
 FUNC_27(&VAR_11->collect_lock, VAR_13);




 FUNC_15(&VAR_12->users);
 VAR_11->prof.txlen += VAR_12->len;
 VAR_14.length = VAR_12->len + VAR_8;
 VAR_14.type = FUNC_1(VAR_12->protocol);
 VAR_14.unused = 0;
 FUNC_13(FUNC_20(VAR_12, VAR_8), &VAR_14, VAR_8);
 VAR_16 = VAR_12->len + 2;
 *((__u16 *)FUNC_20(VAR_12, 2)) = VAR_16;





 VAR_19 = ((unsigned long)FUNC_25(VAR_12) + VAR_8) >> 31;
 if (VAR_19) {
  VAR_18 = FUNC_0(VAR_12->len, VAR_6 | VAR_7);
  if (!VAR_18) {
   FUNC_14(&VAR_12->users);
   FUNC_19(VAR_12, VAR_8 + 2);
   FUNC_5(VAR_11->netdev);
   return -VAR_5;
  } else {
   FUNC_22(VAR_18, VAR_12->data, VAR_12->len);
   FUNC_15(&VAR_18->users);
   FUNC_14(&VAR_12->users);
   FUNC_7(VAR_12);
   VAR_12 = VAR_18;
  }
 }

 VAR_11->ccw[4].count = VAR_16;
 if (FUNC_16(&VAR_11->ccw[4], VAR_12->data)) {





  if (FUNC_4(VAR_11)) {




   FUNC_14(&VAR_12->users);
   FUNC_19(VAR_12, VAR_8 + 2);
   FUNC_5(VAR_11->netdev);
   return -VAR_5;
  }

  FUNC_24(VAR_11->trans_skb);
  VAR_11->trans_skb->len = 0;
  VAR_11->ccw[1].count = VAR_12->len;
  FUNC_17(VAR_12,
    FUNC_21(VAR_11->trans_skb, VAR_12->len), VAR_12->len);
  FUNC_14(&VAR_12->users);
  FUNC_7(VAR_12);
  VAR_17 = 0;
 } else {
  FUNC_23(&VAR_11->io_queue, VAR_12);
  VAR_17 = 3;
 }
 if (VAR_9)
  FUNC_6((char *)&VAR_11->ccw[VAR_17],
     sizeof(struct ccw1) * 3);
 VAR_11->retry = 0;
 FUNC_11(VAR_11->fsm, VAR_2);
 FUNC_8(&VAR_11->timer, VAR_0, VAR_1, VAR_11);
 FUNC_26(FUNC_12(VAR_11->cdev), VAR_13);
 VAR_11->prof.send_stamp = VAR_10;
 VAR_15 = FUNC_2(VAR_11->cdev, &VAR_11->ccw[VAR_17], 0, 0xff, 0);
 FUNC_27(FUNC_12(VAR_11->cdev), VAR_13);
 if (VAR_17 == 3)
  VAR_11->prof.doios_single++;
 if (VAR_15 != 0) {
  FUNC_9(&VAR_11->timer);
  FUNC_3(VAR_11, VAR_15, "single skb TX");
  if (VAR_17 == 3)
   FUNC_18(&VAR_11->io_queue);




  FUNC_19(VAR_12, VAR_8 + 2);
 } else if (VAR_17 == 0) {
  struct net_device *VAR_21 = VAR_11->netdev;
  struct ctcm_priv *VAR_22 = VAR_21->ml_priv;
  VAR_22->stats.tx_packets++;
  VAR_22->stats.tx_bytes += VAR_12->len - VAR_8;
 }
done:
 FUNC_5(VAR_11->netdev);
 return VAR_15;
}
