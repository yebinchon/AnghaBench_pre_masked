
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {void* watchdog_timeo; } ;
struct ena_admin_ena_hw_hints {int admin_completion_tx_timeout; int mmio_read_timeout; scalar_t__ missing_tx_completion_timeout; scalar_t__ netdev_wd_timeout; scalar_t__ driver_watchdog_timeout; scalar_t__ missed_tx_completion_count_threshold_to_reset; } ;
struct ena_adapter {void* keep_alive_timeout; void* missing_tx_completion_to; scalar_t__ missing_tx_completion_threshold; TYPE_3__* ena_dev; struct net_device* netdev; } ;
struct TYPE_5__ {int reg_read_to; } ;
struct TYPE_4__ {int completion_timeout; } ;
struct TYPE_6__ {TYPE_2__ mmio_read; TYPE_1__ admin_queue; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_1,
        struct ena_admin_ena_hw_hints *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;

 if (VAR_2->admin_completion_tx_timeout)
  VAR_1->ena_dev->admin_queue.completion_timeout =
   VAR_2->admin_completion_tx_timeout * 1000;

 if (VAR_2->mmio_read_timeout)

  VAR_1->ena_dev->mmio_read.reg_read_to =
   VAR_2->mmio_read_timeout * 1000;

 if (VAR_2->missed_tx_completion_count_threshold_to_reset)
  VAR_1->missing_tx_completion_threshold =
   VAR_2->missed_tx_completion_count_threshold_to_reset;

 if (VAR_2->missing_tx_completion_timeout) {
  if (VAR_2->missing_tx_completion_timeout == VAR_0)
   VAR_1->missing_tx_completion_to = VAR_0;
  else
   VAR_1->missing_tx_completion_to =
    FUNC_0(VAR_2->missing_tx_completion_timeout);
 }

 if (VAR_2->netdev_wd_timeout)
  VAR_3->watchdog_timeo = FUNC_0(VAR_2->netdev_wd_timeout);

 if (VAR_2->driver_watchdog_timeout) {
  if (VAR_2->driver_watchdog_timeout == VAR_0)
   VAR_1->keep_alive_timeout = VAR_0;
  else
   VAR_1->keep_alive_timeout =
    FUNC_0(VAR_2->driver_watchdog_timeout);
 }
}
