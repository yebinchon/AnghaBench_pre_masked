
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lan743x_ptp {size_t tx_ts_skb_queue_size; int tx_ts_lock; int tx_ts_ignore_sync_queue; struct sk_buff** tx_ts_skb_queue; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct lan743x_adapter *VAR_2,
       struct sk_buff *VAR_3, bool VAR_4)
{
 struct lan743x_ptp *VAR_5 = &VAR_2->ptp;

 FUNC_3(&VAR_5->tx_ts_lock);
 if (VAR_5->tx_ts_skb_queue_size < VAR_0) {
  VAR_5->tx_ts_skb_queue[VAR_5->tx_ts_skb_queue_size] = VAR_3;
  if (VAR_4)
   VAR_5->tx_ts_ignore_sync_queue |=
    FUNC_0(VAR_5->tx_ts_skb_queue_size);
  VAR_5->tx_ts_skb_queue_size++;
 } else {




  FUNC_2(VAR_2, VAR_1, VAR_2->netdev,
     "tx ts skb queue overflow\n");
  FUNC_1(VAR_3);
 }
 FUNC_4(&VAR_5->tx_ts_lock);
}
