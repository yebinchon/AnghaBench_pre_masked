
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int irq_prepare_beacon_tasklet; int irq_tx_tasklet; int irq_rx_tasklet; TYPE_1__* rtllib; int qos_activate; int update_beacon_wq; int rfpath_check_wq; int txpower_tracking_wq; int watch_dog_wq; int reset_wq; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_sleep_wq; int hw_wakeup_wq; int ips_leave_wq; } ;


 int FUNC_0 (int *,void*,struct net_device*) ;
 int FUNC_1 (int *,void*,struct net_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,void (*) (unsigned long),unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_12)
{
 struct r8192_priv *VAR_13 = FUNC_2(VAR_12);

 FUNC_1(&VAR_13->reset_wq, (void *)VAR_4, VAR_12);
 FUNC_1(&VAR_13->rtllib->ips_leave_wq, (void *)VAR_11,
        VAR_12);
 FUNC_0(&VAR_13->watch_dog_wq,
         (void *)VAR_6, VAR_12);
 FUNC_0(&VAR_13->txpower_tracking_wq,
         (void *)VAR_8, VAR_12);
 FUNC_0(&VAR_13->rfpath_check_wq,
         (void *)VAR_7, VAR_12);
 FUNC_0(&VAR_13->update_beacon_wq,
         (void *)VAR_5, VAR_12);
 FUNC_1(&VAR_13->qos_activate, (void *)VAR_3, VAR_12);
 FUNC_0(&VAR_13->rtllib->hw_wakeup_wq,
         (void *)VAR_10, VAR_12);
 FUNC_0(&VAR_13->rtllib->hw_sleep_wq,
         (void *)VAR_9, VAR_12);
 FUNC_3(&VAR_13->irq_rx_tasklet,
       (void(*)(unsigned long))VAR_0,
       (unsigned long)VAR_13);
 FUNC_3(&VAR_13->irq_tx_tasklet,
       (void(*)(unsigned long))VAR_1,
       (unsigned long)VAR_13);
 FUNC_3(&VAR_13->irq_prepare_beacon_tasklet,
       (void(*)(unsigned long))VAR_2,
       (unsigned long)VAR_13);
}
