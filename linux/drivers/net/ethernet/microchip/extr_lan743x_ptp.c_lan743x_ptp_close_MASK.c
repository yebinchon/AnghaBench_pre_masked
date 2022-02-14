
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lan743x_ptp {int flags; int tx_ts_lock; scalar_t__ pending_tx_timestamps; scalar_t__ tx_ts_queue_size; scalar_t__ tx_ts_skb_queue_size; scalar_t__* tx_ts_nseconds_queue; scalar_t__* tx_ts_seconds_queue; struct sk_buff** tx_ts_skb_queue; int * ptp_clock; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (struct lan743x_adapter*) ;
 int FUNC_5 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct lan743x_adapter *VAR_10)
{
 struct lan743x_ptp *VAR_11 = &VAR_10->ptp;
 int VAR_12;

 if (FUNC_0(VAR_0) &&
     VAR_11->flags & VAR_5) {
  FUNC_6(VAR_11->ptp_clock);
  VAR_11->ptp_clock = ((void*)0);
  VAR_11->flags &= ~VAR_5;
  FUNC_5(VAR_10, VAR_9, VAR_10->netdev,
      "ptp clock unregister\n");
 }

 if (VAR_11->flags & VAR_4) {
  FUNC_2(VAR_10, VAR_8,
      VAR_6 |
      VAR_7);
  FUNC_2(VAR_10, VAR_2, VAR_1);
  VAR_11->flags &= ~VAR_4;
 }


 FUNC_4(VAR_10);
 FUNC_7(&VAR_11->tx_ts_lock);
 for (VAR_12 = 0;
  VAR_12 < VAR_3;
  VAR_12++) {
  struct sk_buff *VAR_13 = VAR_11->tx_ts_skb_queue[VAR_12];

  FUNC_1(VAR_13);
  VAR_11->tx_ts_skb_queue[VAR_12] = ((void*)0);
  VAR_11->tx_ts_seconds_queue[VAR_12] = 0;
  VAR_11->tx_ts_nseconds_queue[VAR_12] = 0;
 }
 VAR_11->tx_ts_skb_queue_size = 0;
 VAR_11->tx_ts_queue_size = 0;
 VAR_11->pending_tx_timestamps = 0;
 FUNC_8(&VAR_11->tx_ts_lock);

 FUNC_3(VAR_10);
}
