
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_ptp {scalar_t__ pending_tx_timestamps; int tx_ts_lock; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 int VAR_0 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct lan743x_adapter *VAR_1)
{
 struct lan743x_ptp *VAR_2 = &VAR_1->ptp;

 FUNC_1(&VAR_2->tx_ts_lock);
 if (VAR_2->pending_tx_timestamps > 0)
  VAR_2->pending_tx_timestamps--;
 else
  FUNC_0(VAR_1, VAR_0, VAR_1->netdev,
     "unrequest failed, pending_tx_timestamps==0\n");
 FUNC_2(&VAR_2->tx_ts_lock);
}
