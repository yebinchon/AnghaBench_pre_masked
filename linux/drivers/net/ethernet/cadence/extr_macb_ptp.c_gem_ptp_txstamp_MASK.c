
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct macb_queue {unsigned long tx_ts_head; int tx_ts_task; struct gem_tx_ts* tx_timestamps; int bp; int tx_ts_tail; } ;
struct macb_dma_desc_ptp {int ts_2; int ts_1; } ;
struct macb_dma_desc {int ctrl; } ;
struct TYPE_3__ {int ts_2; int ts_1; } ;
struct gem_tx_ts {TYPE_1__ desc_ptp; struct sk_buff* skb; } ;
struct TYPE_4__ {int tx_flags; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct macb_dma_desc_ptp* FUNC_4 (int ,struct macb_dma_desc*) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (unsigned long*,unsigned long) ;

int FUNC_8(struct macb_queue *VAR_5, struct sk_buff *VAR_6,
      struct macb_dma_desc *VAR_7)
{
 unsigned long VAR_8 = FUNC_2(VAR_5->tx_ts_tail);
 unsigned long VAR_9 = VAR_5->tx_ts_head;
 struct macb_dma_desc_ptp *VAR_10;
 struct gem_tx_ts *VAR_11;

 if (!FUNC_1(VAR_0, VAR_7->ctrl))
  return -VAR_1;

 if (FUNC_0(VAR_9, VAR_8, VAR_3) == 0)
  return -VAR_2;

 FUNC_6(VAR_6)->tx_flags |= VAR_4;
 VAR_10 = FUNC_4(VAR_5->bp, VAR_7);
 VAR_11 = &VAR_5->tx_timestamps[VAR_9];
 VAR_11->skb = VAR_6;

 FUNC_3();
 VAR_11->desc_ptp.ts_1 = VAR_10->ts_1;
 VAR_11->desc_ptp.ts_2 = VAR_10->ts_2;

 FUNC_7(&VAR_5->tx_ts_head,
     (VAR_9 + 1) & (VAR_3 - 1));

 FUNC_5(&VAR_5->tx_ts_task);
 return 0;
}
