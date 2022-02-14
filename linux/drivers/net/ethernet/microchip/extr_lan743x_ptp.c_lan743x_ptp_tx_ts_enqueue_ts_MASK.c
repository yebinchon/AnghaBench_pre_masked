
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct lan743x_ptp {size_t tx_ts_queue_size; int tx_ts_lock; void** tx_ts_header_queue; void** tx_ts_nseconds_queue; void** tx_ts_seconds_queue; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct lan743x_adapter *VAR_2,
      u32 VAR_3, u32 VAR_4,
      u32 VAR_5)
{
 struct lan743x_ptp *VAR_6 = &VAR_2->ptp;

 FUNC_1(&VAR_6->tx_ts_lock);
 if (VAR_6->tx_ts_queue_size < VAR_0) {
  VAR_6->tx_ts_seconds_queue[VAR_6->tx_ts_queue_size] = VAR_3;
  VAR_6->tx_ts_nseconds_queue[VAR_6->tx_ts_queue_size] = VAR_4;
  VAR_6->tx_ts_header_queue[VAR_6->tx_ts_queue_size] = VAR_5;
  VAR_6->tx_ts_queue_size++;
 } else {
  FUNC_0(VAR_2, VAR_1, VAR_2->netdev,
     "tx ts queue overflow\n");
 }
 FUNC_2(&VAR_6->tx_ts_lock);
}
