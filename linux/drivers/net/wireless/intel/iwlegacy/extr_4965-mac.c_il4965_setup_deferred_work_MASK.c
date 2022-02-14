
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int irq_tasklet; int watchdog; int stats_periodic; int txpower_work; int alive_start; int init_alive_start; int run_time_calib_work; int rx_replenish; int restart; int wait_command_queue; int workqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct il_priv *VAR_10)
{
 VAR_10->workqueue = FUNC_2(VAR_0);

 FUNC_4(&VAR_10->wait_command_queue);

 FUNC_1(&VAR_10->restart, VAR_3);
 FUNC_1(&VAR_10->rx_replenish, VAR_5);
 FUNC_1(&VAR_10->run_time_calib_work, VAR_4);
 FUNC_0(&VAR_10->init_alive_start, VAR_2);
 FUNC_0(&VAR_10->alive_start, VAR_1);

 FUNC_3(VAR_10);

 FUNC_1(&VAR_10->txpower_work, VAR_7);

 FUNC_6(&VAR_10->stats_periodic, VAR_6, 0);

 FUNC_6(&VAR_10->watchdog, VAR_9, 0);

 FUNC_5(&VAR_10->irq_tasklet,
       (void (*)(unsigned long))VAR_8,
       (unsigned long)VAR_10);
}
