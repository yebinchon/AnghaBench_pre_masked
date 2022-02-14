
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_4__ {scalar_t__ alloc_rx_page; scalar_t__ alloc_rx_buff_failed; scalar_t__ alloc_rx_page_failed; scalar_t__ csum_err; } ;
struct ixgbevf_ring {TYPE_2__ rx_stats; } ;
struct TYPE_3__ {int vfmprc; int last_vfmprc; int vfgotc; int last_vfgotc; int vfgorc; int last_vfgorc; int vfgptc; int last_vfgptc; int vfgprc; int last_vfgprc; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; void* alloc_rx_page; void* alloc_rx_buff_failed; void* alloc_rx_page_failed; void* hw_csum_rx_error; struct ixgbevf_ring** rx_ring; TYPE_1__ stats; int state; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct ixgbevf_adapter *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u64 VAR_11 = 0, VAR_12 = 0;
 u64 VAR_13 = 0, VAR_14 = 0;
 int VAR_15;

 if (FUNC_2(VAR_7, &VAR_9->state) ||
     FUNC_2(VAR_8, &VAR_9->state))
  return;

 FUNC_0(VAR_4, VAR_9->stats.last_vfgprc,
    VAR_9->stats.vfgprc);
 FUNC_0(VAR_5, VAR_9->stats.last_vfgptc,
    VAR_9->stats.vfgptc);
 FUNC_1(VAR_0, VAR_1,
    VAR_9->stats.last_vfgorc,
    VAR_9->stats.vfgorc);
 FUNC_1(VAR_2, VAR_3,
    VAR_9->stats.last_vfgotc,
    VAR_9->stats.vfgotc);
 FUNC_0(VAR_6, VAR_9->stats.last_vfmprc,
    VAR_9->stats.vfmprc);

 for (VAR_15 = 0; VAR_15 < VAR_9->num_rx_queues; VAR_15++) {
  struct ixgbevf_ring *VAR_16 = VAR_9->rx_ring[VAR_15];

  VAR_14 += VAR_16->rx_stats.csum_err;
  VAR_11 += VAR_16->rx_stats.alloc_rx_page_failed;
  VAR_12 += VAR_16->rx_stats.alloc_rx_buff_failed;
  VAR_13 += VAR_16->rx_stats.alloc_rx_page;
 }

 VAR_9->hw_csum_rx_error = VAR_14;
 VAR_9->alloc_rx_page_failed = VAR_11;
 VAR_9->alloc_rx_buff_failed = VAR_12;
 VAR_9->alloc_rx_page = VAR_13;
}
