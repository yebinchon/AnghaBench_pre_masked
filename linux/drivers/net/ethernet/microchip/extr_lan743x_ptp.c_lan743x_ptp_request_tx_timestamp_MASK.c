
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_ptp {scalar_t__ pending_tx_timestamps; int tx_ts_lock; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct lan743x_adapter *VAR_1)
{
 struct lan743x_ptp *VAR_2 = &VAR_1->ptp;
 bool VAR_3 = 0;

 FUNC_0(&VAR_2->tx_ts_lock);
 if (VAR_2->pending_tx_timestamps < VAR_0) {

  VAR_2->pending_tx_timestamps++;
  VAR_3 = 1;
 }
 FUNC_1(&VAR_2->tx_ts_lock);
 return VAR_3;
}
