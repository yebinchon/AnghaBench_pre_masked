
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct vnic_rx_bytes_counter {int large_pkt_bytes_cnt; int small_pkt_bytes_cnt; } ;
struct vnic_rq {int index; } ;
struct vnic_cq {int tobe_rx_coal_timeval; int prev_ts; struct vnic_rx_bytes_counter pkt_size_counter; } ;
struct enic_rx_coal {int small_pkt_range_start; int large_pkt_range_start; int range_end; } ;
struct enic {struct vnic_cq* cq; struct enic_rx_coal rx_coalesce_setting; } ;
typedef int ktime_t ;
struct TYPE_2__ {int rx_rate; int range_percent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (struct enic*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct enic *VAR_4, struct vnic_rq *VAR_5)
{
 struct enic_rx_coal *VAR_6 = &VAR_4->rx_coalesce_setting;
 struct vnic_cq *VAR_7 = &VAR_4->cq[FUNC_0(VAR_4, VAR_5->index)];
 struct vnic_rx_bytes_counter *VAR_8 = &VAR_7->pkt_size_counter;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u64 VAR_13;
 ktime_t VAR_14 = FUNC_1();

 VAR_13 = FUNC_2(VAR_14, VAR_7->prev_ts);
 if (VAR_13 < VAR_0)
  return;
 VAR_7->prev_ts = VAR_14;

 VAR_12 = VAR_8->large_pkt_bytes_cnt +
    VAR_8->small_pkt_bytes_cnt;
 VAR_12 <<= 3;
 VAR_12 = VAR_13 > VAR_2 ? 0 : VAR_12 / (u32)VAR_13;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  if (VAR_12 < VAR_3[VAR_9].rx_rate)
   break;
 VAR_11 = (VAR_8->small_pkt_bytes_cnt >
         VAR_8->large_pkt_bytes_cnt << 1) ?
        VAR_6->small_pkt_range_start :
        VAR_6->large_pkt_range_start;
 VAR_10 = VAR_11 + ((VAR_6->range_end - VAR_11) *
          VAR_3[VAR_9].range_percent / 100);

 VAR_7->tobe_rx_coal_timeval = (VAR_10 + VAR_7->tobe_rx_coal_timeval) >> 1;

 VAR_8->large_pkt_bytes_cnt = 0;
 VAR_8->small_pkt_bytes_cnt = 0;
}
