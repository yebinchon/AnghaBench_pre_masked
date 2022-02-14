
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {size_t priority; } ;
struct netdev_queue {int dummy; } ;
struct mwifiex_txinfo {int flags; scalar_t__ pkt_len; int bss_type; int bss_num; } ;
struct TYPE_2__ {int tx_errors; int tx_bytes; int tx_packets; } ;
struct mwifiex_private {int netdev; int * wmm_tx_pending; TYPE_1__ stats; scalar_t__ tx_timeout_cnt; } ;
struct mwifiex_adapter {int tx_pending; int pending_bridged_pkts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int* VAR_4 ;
 int FUNC_4 (struct mwifiex_adapter*,int ,char*,int) ;
 struct mwifiex_private* FUNC_5 (struct mwifiex_adapter*,int ,int ) ;
 int FUNC_6 (int ) ;
 struct netdev_queue* FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (struct netdev_queue*) ;

int FUNC_10(struct mwifiex_adapter *VAR_5,
    struct sk_buff *VAR_6, int VAR_7, int VAR_8)
{
 struct mwifiex_private *VAR_9;
 struct mwifiex_txinfo *VAR_10;
 struct netdev_queue *VAR_11;
 int VAR_12;

 if (!VAR_6)
  return 0;

 VAR_10 = FUNC_0(VAR_6);
 VAR_9 = FUNC_5(VAR_5, VAR_10->bss_num,
          VAR_10->bss_type);
 if (!VAR_9)
  goto done;

 FUNC_6(VAR_9->netdev);

 if (VAR_10->flags & VAR_3)
  FUNC_2(&VAR_5->pending_bridged_pkts);

 if (VAR_10->flags & VAR_2)
  goto done;

 if (!VAR_8) {
  VAR_9->stats.tx_packets++;
  VAR_9->stats.tx_bytes += VAR_10->pkt_len;
  if (VAR_9->tx_timeout_cnt)
   VAR_9->tx_timeout_cnt = 0;
 } else {
  VAR_9->stats.tx_errors++;
 }

 if (VAR_7)

  goto done;

 FUNC_1(&VAR_5->tx_pending);

 VAR_12 = VAR_4[VAR_6->priority];
 if (FUNC_2(&VAR_9->wmm_tx_pending[VAR_12]) < VAR_1) {
  VAR_11 = FUNC_7(VAR_9->netdev, VAR_12);
  if (FUNC_8(VAR_11)) {
   FUNC_9(VAR_11);
   FUNC_4(VAR_5, VAR_0, "wake queue: %d\n", VAR_12);
  }
 }
done:
 FUNC_3(VAR_6);

 return 0;
}
