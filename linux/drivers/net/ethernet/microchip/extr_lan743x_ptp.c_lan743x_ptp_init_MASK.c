
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_ptp {int perout_event_ch; int perout_gpio_bit; scalar_t__ used_event_ch; int tx_ts_lock; int command_lock; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct lan743x_adapter *VAR_0)
{
 struct lan743x_ptp *VAR_1 = &VAR_0->ptp;

 FUNC_0(&VAR_1->command_lock);
 FUNC_1(&VAR_1->tx_ts_lock);
 VAR_1->used_event_ch = 0;
 VAR_1->perout_event_ch = -1;
 VAR_1->perout_gpio_bit = -1;
 return 0;
}
