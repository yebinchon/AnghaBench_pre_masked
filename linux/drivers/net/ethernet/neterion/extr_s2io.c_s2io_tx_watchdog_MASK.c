
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swStat {int soft_reset_cnt; int watchdog_timer_cnt; } ;
struct TYPE_4__ {TYPE_1__* stats_info; } ;
struct s2io_nic {int rst_timer_task; TYPE_2__ mac_control; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct swStat sw_stat; } ;


 struct s2io_nic* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct s2io_nic *VAR_1 = FUNC_0(VAR_0);
 struct swStat *VAR_2 = &VAR_1->mac_control.stats_info->sw_stat;

 if (FUNC_1(VAR_0)) {
  VAR_2->watchdog_timer_cnt++;
  FUNC_2(&VAR_1->rst_timer_task);
  VAR_2->soft_reset_cnt++;
 }
}
