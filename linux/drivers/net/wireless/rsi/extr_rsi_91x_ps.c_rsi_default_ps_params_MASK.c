
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_ps_info {int enabled; int deep_sleep_wakeup_period; scalar_t__ num_dtims_per_sleep; scalar_t__ dtim_interval_duration; scalar_t__ num_bcns_per_lis_int; int listen_interval; scalar_t__ monitor_interval; scalar_t__ rx_hysterisis; scalar_t__ tx_hysterisis; scalar_t__ rx_threshold; scalar_t__ tx_threshold; int sleep_type; } ;
struct rsi_hw {struct rsi_ps_info ps_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct rsi_hw *VAR_3)
{
 struct rsi_ps_info *VAR_4 = &VAR_3->ps_info;

 VAR_4->enabled = 1;
 VAR_4->sleep_type = VAR_2;
 VAR_4->tx_threshold = 0;
 VAR_4->rx_threshold = 0;
 VAR_4->tx_hysterisis = 0;
 VAR_4->rx_hysterisis = 0;
 VAR_4->monitor_interval = 0;
 VAR_4->listen_interval = VAR_1;
 VAR_4->num_bcns_per_lis_int = 0;
 VAR_4->dtim_interval_duration = 0;
 VAR_4->num_dtims_per_sleep = 0;
 VAR_4->deep_sleep_wakeup_period = VAR_0;
}
