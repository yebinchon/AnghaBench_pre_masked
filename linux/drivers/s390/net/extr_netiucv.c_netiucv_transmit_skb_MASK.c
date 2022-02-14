
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int users; struct ll_header* data; } ;
struct TYPE_4__ {int tx_errors; } ;
struct netiucv_priv {TYPE_2__ stats; } ;
struct ll_header {scalar_t__ next; } ;
struct iucv_message {int tag; scalar_t__ class; } ;
struct TYPE_3__ {scalar_t__ txlen; scalar_t__ tx_pending; scalar_t__ tx_max_pending; int doios_single; int send_stamp; } ;
struct iucv_connection {scalar_t__ collect_len; scalar_t__ max_buffsize; int commit_queue; int netdev; TYPE_1__ prof; int fsm; int path; int collect_lock; int collect_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_2 (scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,struct iucv_message*,int ,int ,struct ll_header*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (int ,struct ll_header*,scalar_t__) ;
 struct netiucv_priv* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,struct ll_header*,scalar_t__) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_20(struct iucv_connection *VAR_9,
    struct sk_buff *VAR_10)
{
 struct iucv_message VAR_11;
 unsigned long VAR_12;
 struct ll_header VAR_13;
 int VAR_14;

 if (FUNC_4(VAR_9->fsm) != VAR_0) {
  int VAR_15 = VAR_10->len + VAR_6;

  FUNC_18(&VAR_9->collect_lock, VAR_12);
  if (VAR_9->collect_len + VAR_15 >
      (VAR_9->max_buffsize - VAR_6)) {
   VAR_14 = -VAR_2;
   FUNC_0(VAR_7, 2,
          "EBUSY from netiucv_transmit_skb\n");
  } else {
   FUNC_9(&VAR_10->users);
   FUNC_13(&VAR_9->collect_queue, VAR_10);
   VAR_9->collect_len += VAR_15;
   VAR_14 = 0;
  }
  FUNC_19(&VAR_9->collect_lock, VAR_12);
 } else {
  struct sk_buff *VAR_16 = VAR_10;




  unsigned long VAR_17 = ((unsigned long)(FUNC_15(VAR_10) +
        VAR_6)) >> 31;
  int VAR_18 = 0;
  if (VAR_17 || (FUNC_16(VAR_10) < 2)) {
   VAR_16 = FUNC_2(VAR_10->len + VAR_6 +
      VAR_6, VAR_4 | VAR_5);
   if (!VAR_16) {
    FUNC_0(VAR_7, 2, "alloc_skb failed\n");
    VAR_14 = -VAR_3;
    return VAR_14;
   } else {
    FUNC_14(VAR_16, VAR_6);
    FUNC_12(VAR_16, VAR_10->data, VAR_10->len);
   }
   VAR_18 = 1;
  }



  VAR_13.next = VAR_16->len + VAR_6;
  FUNC_7(FUNC_11(VAR_16, VAR_6), &VAR_13, VAR_6);
  VAR_13.next = 0;
  FUNC_12(VAR_16, &VAR_13, VAR_6);

  FUNC_5(VAR_9->fsm, VAR_1);
  VAR_9->prof.send_stamp = VAR_8;

  VAR_11.tag = 1;
  VAR_11.class = 0;
  VAR_14 = FUNC_6(VAR_9->path, &VAR_11, 0, 0,
           VAR_16->data, VAR_16->len);
  VAR_9->prof.doios_single++;
  VAR_9->prof.txlen += VAR_10->len;
  VAR_9->prof.tx_pending++;
  if (VAR_9->prof.tx_pending > VAR_9->prof.tx_max_pending)
   VAR_9->prof.tx_max_pending = VAR_9->prof.tx_pending;
  if (VAR_14) {
   struct netiucv_priv *VAR_19;
   FUNC_5(VAR_9->fsm, VAR_0);
   VAR_9->prof.tx_pending--;
   VAR_19 = FUNC_8(VAR_9->netdev);
   if (VAR_19)
    VAR_19->stats.tx_errors++;
   if (VAR_18)
    FUNC_3(VAR_16);
   else {




    FUNC_10(VAR_10, VAR_6);
    FUNC_17(VAR_10, VAR_10->len - VAR_6);
   }
   FUNC_1(VAR_7, 2, "rc %d from iucv_send\n", VAR_14);
  } else {
   if (VAR_18)
    FUNC_3(VAR_10);
   FUNC_9(&VAR_16->users);
   FUNC_13(&VAR_9->commit_queue, VAR_16);
  }
 }

 return VAR_14;
}
