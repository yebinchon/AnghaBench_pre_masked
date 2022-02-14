
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct enic_rx_coal {int use_adaptive_rx_coalesce; int range_end; int large_pkt_range_start; int small_pkt_range_start; } ;
struct TYPE_5__ {int intr_timer_usec; } ;
struct enic {int rq_count; TYPE_2__ config; TYPE_1__* cq; int vdev; struct enic_rx_coal rx_coalesce_setting; } ;
struct TYPE_6__ {int large_pkt_range_start; int small_pkt_range_start; } ;
struct TYPE_4__ {int cur_rx_coal_timeval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct enic *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = -1;
 struct enic_rx_coal *VAR_10 = &VAR_7->rx_coalesce_setting;





 VAR_8 = FUNC_0(VAR_7->vdev);
 if (VAR_3 < VAR_8)
  VAR_9 = VAR_1;
 else if (VAR_4 < VAR_8)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_2;

 VAR_10->small_pkt_range_start = VAR_6[VAR_9].small_pkt_range_start;
 VAR_10->large_pkt_range_start = VAR_6[VAR_9].large_pkt_range_start;
 VAR_10->range_end = VAR_5;


 for (VAR_9 = 0; VAR_9 < VAR_7->rq_count; VAR_9++)
  VAR_7->cq[VAR_9].cur_rx_coal_timeval =
    VAR_7->config.intr_timer_usec;

 VAR_10->use_adaptive_rx_coalesce = 1;
}
