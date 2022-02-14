
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct swStat {int mem_freed; } ;
struct stat_block {struct swStat sw_stat; } ;
struct sk_buff {scalar_t__ truesize; } ;
struct mac_info {TYPE_3__* rings; struct stat_block* stats_info; } ;
struct s2io_nic {size_t rxd_mode; int pdev; struct mac_info mac_control; struct net_device* dev; } ;
struct net_device {scalar_t__ mtu; } ;
struct RxD_t {scalar_t__ Host_Control; } ;
struct RxD3 {scalar_t__ Buffer2_ptr; scalar_t__ Buffer1_ptr; scalar_t__ Buffer0_ptr; } ;
struct RxD1 {scalar_t__ Buffer0_ptr; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int rx_bufs_left; TYPE_2__* rx_blocks; } ;
struct TYPE_5__ {TYPE_1__* rxds; } ;
struct TYPE_4__ {struct RxD_t* virt_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct RxD_t*,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int* VAR_8 ;

__attribute__((used)) static void FUNC_3(struct s2io_nic *VAR_9, int VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = VAR_9->dev;
 int VAR_13;
 struct sk_buff *VAR_14;
 struct RxD_t *VAR_15;
 struct RxD1 *VAR_16;
 struct RxD3 *VAR_17;
 struct mac_info *VAR_18 = &VAR_9->mac_control;
 struct stat_block *VAR_19 = VAR_18->stats_info;
 struct swStat *VAR_20 = &VAR_19->sw_stat;

 for (VAR_13 = 0 ; VAR_13 < VAR_8[VAR_9->rxd_mode]; VAR_13++) {
  VAR_15 = VAR_18->rings[VAR_10].
   rx_blocks[VAR_11].rxds[VAR_13].virt_addr;
  VAR_14 = (struct sk_buff *)((unsigned long)VAR_15->Host_Control);
  if (!VAR_14)
   continue;
  if (VAR_9->rxd_mode == VAR_6) {
   VAR_16 = (struct RxD1 *)VAR_15;
   FUNC_2(VAR_9->pdev,
      (dma_addr_t)VAR_16->Buffer0_ptr,
      VAR_12->mtu +
      VAR_3 +
      VAR_2 + VAR_4,
      VAR_5);
   FUNC_1(VAR_15, 0, sizeof(struct RxD1));
  } else if (VAR_9->rxd_mode == VAR_7) {
   VAR_17 = (struct RxD3 *)VAR_15;
   FUNC_2(VAR_9->pdev,
      (dma_addr_t)VAR_17->Buffer0_ptr,
      VAR_0,
      VAR_5);
   FUNC_2(VAR_9->pdev,
      (dma_addr_t)VAR_17->Buffer1_ptr,
      VAR_1,
      VAR_5);
   FUNC_2(VAR_9->pdev,
      (dma_addr_t)VAR_17->Buffer2_ptr,
      VAR_12->mtu + 4,
      VAR_5);
   FUNC_1(VAR_15, 0, sizeof(struct RxD3));
  }
  VAR_20->mem_freed += VAR_14->truesize;
  FUNC_0(VAR_14);
  VAR_18->rings[VAR_10].rx_bufs_left -= 1;
 }
}
