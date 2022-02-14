
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ len; int end; } ;
struct netdev_queue {int dummy; } ;
struct ena_tx_buffer {scalar_t__ tx_descs; scalar_t__ last_jiffies; struct sk_buff* skb; } ;
struct TYPE_3__ {int queue_wakeup; } ;
struct ena_ring {size_t next_to_clean; size_t* free_ids; int syncp; TYPE_1__ tx_stats; TYPE_2__* adapter; int ena_com_io_sq; int qid; int netdev; int ena_com_io_cq; int ring_size; struct ena_tx_buffer* tx_buffer_info; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,size_t*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ena_ring*,struct ena_tx_buffer*) ;
 struct netdev_queue* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct netdev_queue*,int,int) ;
 int FUNC_11 (TYPE_2__*,int ,int ,char*,int ,...) ;
 scalar_t__ FUNC_12 (struct netdev_queue*) ;
 int FUNC_13 (struct netdev_queue*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int VAR_2 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct ena_ring*,size_t) ;

__attribute__((used)) static int FUNC_22(struct ena_ring *VAR_3, u32 VAR_4)
{
 struct netdev_queue *VAR_5;
 bool VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u16 VAR_9;
 u16 VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_9 = VAR_3->next_to_clean;
 VAR_5 = FUNC_9(VAR_3->netdev, VAR_3->qid);

 while (VAR_11 < VAR_4) {
  struct ena_tx_buffer *VAR_13;
  struct sk_buff *VAR_14;

  VAR_12 = FUNC_6(VAR_3->ena_com_io_cq,
      &VAR_10);
  if (VAR_12)
   break;

  VAR_12 = FUNC_21(VAR_3, VAR_10);
  if (VAR_12)
   break;

  VAR_13 = &VAR_3->tx_buffer_info[VAR_10];
  VAR_14 = VAR_13->skb;


  FUNC_14(&VAR_14->end);

  VAR_13->skb = ((void*)0);
  VAR_13->last_jiffies = 0;

  FUNC_8(VAR_3, VAR_13);

  FUNC_11(VAR_3->adapter, VAR_2, VAR_3->netdev,
     "tx_poll: q %d skb %p completed\n", VAR_3->qid,
     VAR_14);

  VAR_7 += VAR_14->len;
  FUNC_3(VAR_14);
  VAR_11++;
  VAR_8 += VAR_13->tx_descs;

  VAR_3->free_ids[VAR_9] = VAR_10;
  VAR_9 = FUNC_0(VAR_9,
           VAR_3->ring_size);
 }

 VAR_3->next_to_clean = VAR_9;
 FUNC_4(VAR_3->ena_com_io_sq, VAR_8);
 FUNC_7(VAR_3->ena_com_io_cq);

 FUNC_10(VAR_5, VAR_11, VAR_7);

 FUNC_11(VAR_3->adapter, VAR_2, VAR_3->netdev,
    "tx_poll: q %d done. total pkts: %d\n",
    VAR_3->qid, VAR_11);




 FUNC_15();

 VAR_6 = FUNC_5(VAR_3->ena_com_io_sq,
          VAR_1);
 if (FUNC_20(FUNC_12(VAR_5) && VAR_6)) {
  FUNC_1(VAR_5, FUNC_16());
  VAR_6 =
   FUNC_5(VAR_3->ena_com_io_sq,
           VAR_1);
  if (FUNC_12(VAR_5) && VAR_6 &&
      FUNC_17(VAR_0, &VAR_3->adapter->flags)) {
   FUNC_13(VAR_5);
   FUNC_18(&VAR_3->syncp);
   VAR_3->tx_stats.queue_wakeup++;
   FUNC_19(&VAR_3->syncp);
  }
  FUNC_2(VAR_5);
 }

 return VAR_11;
}
