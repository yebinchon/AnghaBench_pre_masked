
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int boot_mode; int rx_reorder; int error_recovery; scalar_t__ alive; int bus_reset_retries; int recovery_ws; int reset_ws; int init_mutex; int msg_completion; int msg_mutex; int rx_report_ws; int rx_reports; void* rx_size_min; void* rx_pl_min; int rx_lock; void* tx_size_min; void* tx_pl_min; int tx_lock; int state_wq; int wimax_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct i2400m *VAR_4)
{
 FUNC_7(&VAR_4->wimax_dev);

 VAR_4->boot_mode = 1;
 VAR_4->rx_reorder = 1;
 FUNC_4(&VAR_4->state_wq);

 FUNC_6(&VAR_4->tx_lock);
 VAR_4->tx_pl_min = VAR_0;
 VAR_4->tx_size_min = VAR_0;

 FUNC_6(&VAR_4->rx_lock);
 VAR_4->rx_pl_min = VAR_0;
 VAR_4->rx_size_min = VAR_0;
 FUNC_0(&VAR_4->rx_reports);
 FUNC_1(&VAR_4->rx_report_ws, VAR_3);

 FUNC_5(&VAR_4->msg_mutex);
 FUNC_3(&VAR_4->msg_completion);

 FUNC_5(&VAR_4->init_mutex);


 FUNC_1(&VAR_4->reset_ws, VAR_1);
 FUNC_1(&VAR_4->recovery_ws, VAR_2);

 FUNC_2(&VAR_4->bus_reset_retries, 0);

 VAR_4->alive = 0;



 FUNC_2(&VAR_4->error_recovery, 1);
}
