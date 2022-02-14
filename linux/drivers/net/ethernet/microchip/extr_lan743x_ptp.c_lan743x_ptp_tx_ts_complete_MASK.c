
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tstamps ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct lan743x_ptp {int tx_ts_skb_queue_size; int tx_ts_queue_size; int tx_ts_ignore_sync_queue; int* tx_ts_nseconds_queue; int* tx_ts_seconds_queue; int* tx_ts_header_queue; int pending_tx_timestamps; int tx_ts_lock; struct sk_buff** tx_ts_skb_queue; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_4 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct lan743x_adapter *VAR_3)
{
 struct lan743x_ptp *VAR_4 = &VAR_3->ptp;
 struct skb_shared_hwtstamps VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 bool VAR_9 = 0;
 struct sk_buff *VAR_10;
 int VAR_11, VAR_12;

 FUNC_5(&VAR_4->tx_ts_lock);
 VAR_11 = VAR_4->tx_ts_skb_queue_size;

 if (VAR_11 > VAR_4->tx_ts_queue_size)
  VAR_11 = VAR_4->tx_ts_queue_size;
 if (VAR_11 <= 0)
  goto done;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_9 = ((VAR_4->tx_ts_ignore_sync_queue &
    FUNC_0(VAR_12)) != 0);
  VAR_10 = VAR_4->tx_ts_skb_queue[VAR_12];
  VAR_7 = VAR_4->tx_ts_nseconds_queue[VAR_12];
  VAR_8 = VAR_4->tx_ts_seconds_queue[VAR_12];
  VAR_6 = VAR_4->tx_ts_header_queue[VAR_12];

  FUNC_3(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.hwtstamp = FUNC_2(VAR_8, VAR_7);
  if (!VAR_9 ||
      ((VAR_6 & VAR_1) !=
      VAR_2))
   FUNC_4(VAR_10, &VAR_5);

  FUNC_1(VAR_10);

  VAR_4->tx_ts_skb_queue[VAR_12] = ((void*)0);
  VAR_4->tx_ts_seconds_queue[VAR_12] = 0;
  VAR_4->tx_ts_nseconds_queue[VAR_12] = 0;
  VAR_4->tx_ts_header_queue[VAR_12] = 0;
 }


 VAR_4->tx_ts_ignore_sync_queue >>= VAR_11;
 for (VAR_12 = VAR_11; VAR_12 < VAR_0; VAR_12++) {
  VAR_4->tx_ts_skb_queue[VAR_12 - VAR_11] = VAR_4->tx_ts_skb_queue[VAR_12];
  VAR_4->tx_ts_seconds_queue[VAR_12 - VAR_11] = VAR_4->tx_ts_seconds_queue[VAR_12];
  VAR_4->tx_ts_nseconds_queue[VAR_12 - VAR_11] = VAR_4->tx_ts_nseconds_queue[VAR_12];
  VAR_4->tx_ts_header_queue[VAR_12 - VAR_11] = VAR_4->tx_ts_header_queue[VAR_12];

  VAR_4->tx_ts_skb_queue[VAR_12] = ((void*)0);
  VAR_4->tx_ts_seconds_queue[VAR_12] = 0;
  VAR_4->tx_ts_nseconds_queue[VAR_12] = 0;
  VAR_4->tx_ts_header_queue[VAR_12] = 0;
 }
 VAR_4->tx_ts_skb_queue_size -= VAR_11;
 VAR_4->tx_ts_queue_size -= VAR_11;
done:
 VAR_4->pending_tx_timestamps -= VAR_11;
 FUNC_6(&VAR_4->tx_ts_lock);
}
