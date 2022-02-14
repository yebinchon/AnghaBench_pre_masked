
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct tx_fifo_config {int fifo_len; } ;
struct stat_block {int dummy; } ;
struct mac_info {void* stats_mem_phy; int stats_mem_sz; TYPE_7__* stats_info; void* stats_mem; struct ring_info* rings; struct fifo_info* fifos; void* zerodma_virt_addr; } ;
struct config_param {int tx_fifo_num; int max_txds; int rx_ring_num; struct rx_ring_config* rx_cfg; struct tx_fifo_config* tx_cfg; } ;
struct s2io_nic {size_t rxd_mode; TYPE_8__* pdev; struct mac_info mac_control; struct config_param config; struct net_device* dev; } ;
struct rxd_info {int dummy; } ;
struct rx_ring_config {int num_rxd; } ;
struct rx_block_info {void* block_dma_addr; void* block_virt_addr; TYPE_5__* rxds; } ;
struct TYPE_13__ {int ring_len; scalar_t__ offset; scalar_t__ block_index; } ;
struct TYPE_12__ {int ring_len; scalar_t__ offset; scalar_t__ block_index; } ;
struct ring_info {int block_count; int pkt_cnt; int ring_no; struct buffAdd** ba; struct rx_block_info* rx_blocks; struct s2io_nic* nic; TYPE_4__ rx_curr_put_info; TYPE_3__ rx_curr_get_info; } ;
struct net_device {int name; } ;
struct list_info_hold {int dummy; } ;
struct TYPE_11__ {int fifo_len; scalar_t__ offset; } ;
struct TYPE_10__ {int fifo_len; scalar_t__ offset; } ;
struct fifo_info {int fifo_no; int ufo_in_band_v; TYPE_9__* list_info; struct net_device* dev; scalar_t__ max_txds; struct s2io_nic* nic; TYPE_2__ tx_curr_get_info; TYPE_1__ tx_curr_put_info; } ;
struct buffAdd {void* ba_1; void* ba_1_org; void* ba_0; void* ba_0_org; } ;
struct TxD {int dummy; } ;
struct RxD_block {unsigned long reserved_2_pNext_RxD_block; scalar_t__ pNext_RxD_Blk_physical; } ;
struct RxD3 {int dummy; } ;
struct RxD1 {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_18__ {void* list_phy_addr; void* list_virt_addr; } ;
struct TYPE_17__ {int dev; } ;
struct TYPE_15__ {unsigned long long mem_allocated; } ;
struct TYPE_16__ {TYPE_6__ sw_stat; } ;
struct TYPE_14__ {void* dma_addr; void* virt_addr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,int ) ;
 void* FUNC_4 (int,int ) ;
 TYPE_9__* FUNC_5 (int,int ) ;
 int FUNC_6 (void*,int ,int) ;
 void* FUNC_7 (TYPE_8__*,int,void**) ;
 int* VAR_17 ;
 int* VAR_18 ;

__attribute__((used)) static int FUNC_8(struct s2io_nic *VAR_19)
{
 u32 VAR_20;
 void *VAR_21, *VAR_22;
 dma_addr_t VAR_23, VAR_24;
 struct RxD_block *VAR_25 = ((void*)0);
 int VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;
 struct net_device *VAR_31 = VAR_19->dev;
 unsigned long VAR_32;
 struct buffAdd *VAR_33;
 struct config_param *VAR_34 = &VAR_19->config;
 struct mac_info *VAR_35 = &VAR_19->mac_control;
 unsigned long long VAR_36 = 0;


 VAR_20 = 0;
 for (VAR_26 = 0; VAR_26 < VAR_34->tx_fifo_num; VAR_26++) {
  struct tx_fifo_config *VAR_37 = &VAR_34->tx_cfg[VAR_26];

  VAR_20 += VAR_37->fifo_len;
 }
 if (VAR_20 > VAR_10) {
  FUNC_0(VAR_5,
     "Too many TxDs requested: %d, max supported: %d\n",
     VAR_20, VAR_10);
  return -VAR_3;
 }

 VAR_20 = 0;
 for (VAR_26 = 0; VAR_26 < VAR_34->tx_fifo_num; VAR_26++) {
  struct tx_fifo_config *VAR_38 = &VAR_34->tx_cfg[VAR_26];

  VAR_20 = VAR_38->fifo_len;



  if (VAR_20 < 2) {
   FUNC_0(VAR_5, "Fifo %d: Invalid length (%d) - "
      "Valid lengths are 2 through 8192\n",
      VAR_26, VAR_20);
   return -VAR_3;
  }
 }

 VAR_29 = (sizeof(struct TxD) * VAR_34->max_txds);
 VAR_30 = VAR_12 / VAR_29;

 for (VAR_26 = 0; VAR_26 < VAR_34->tx_fifo_num; VAR_26++) {
  struct fifo_info *VAR_39 = &VAR_35->fifos[VAR_26];
  struct tx_fifo_config *VAR_40 = &VAR_34->tx_cfg[VAR_26];
  int VAR_41 = VAR_40->fifo_len;
  int VAR_42 = VAR_41 * sizeof(struct list_info_hold);

  VAR_39->list_info = FUNC_5(VAR_42, VAR_7);
  if (!VAR_39->list_info) {
   FUNC_0(VAR_8, "Malloc failed for list_info\n");
   return -VAR_4;
  }
  VAR_36 += VAR_42;
 }
 for (VAR_26 = 0; VAR_26 < VAR_34->tx_fifo_num; VAR_26++) {
  int VAR_43 = FUNC_1(VAR_34->tx_cfg[VAR_26].fifo_len,
      VAR_30);
  struct fifo_info *VAR_44 = &VAR_35->fifos[VAR_26];
  struct tx_fifo_config *VAR_45 = &VAR_34->tx_cfg[VAR_26];

  VAR_44->tx_curr_put_info.offset = 0;
  VAR_44->tx_curr_put_info.fifo_len = VAR_45->fifo_len - 1;
  VAR_44->tx_curr_get_info.offset = 0;
  VAR_44->tx_curr_get_info.fifo_len = VAR_45->fifo_len - 1;
  VAR_44->fifo_no = VAR_26;
  VAR_44->nic = VAR_19;
  VAR_44->max_txds = VAR_11 + 2;
  VAR_44->dev = VAR_31;

  for (VAR_27 = 0; VAR_27 < VAR_43; VAR_27++) {
   int VAR_46 = 0;
   dma_addr_t VAR_47;
   void *VAR_48;
   VAR_48 = FUNC_7(VAR_19->pdev,
           VAR_12, &VAR_47);
   if (!VAR_48) {
    FUNC_0(VAR_8,
       "pci_alloc_consistent failed for TxDL\n");
    return -VAR_4;
   }





   if (!VAR_47) {
    VAR_35->zerodma_virt_addr = VAR_48;
    FUNC_0(VAR_9,
       "%s: Zero DMA address for TxDL. "
       "Virtual address %p\n",
       VAR_31->name, VAR_48);
    VAR_48 = FUNC_7(VAR_19->pdev,
            VAR_12, &VAR_47);
    if (!VAR_48) {
     FUNC_0(VAR_8,
        "pci_alloc_consistent failed for TxDL\n");
     return -VAR_4;
    }
    VAR_36 += VAR_12;
   }
   while (VAR_46 < VAR_30) {
    int VAR_49 = (VAR_27 * VAR_30) + VAR_46;
    if (VAR_49 == VAR_45->fifo_len)
     break;
    VAR_44->list_info[VAR_49].list_virt_addr =
     VAR_48 + (VAR_46 * VAR_29);
    VAR_44->list_info[VAR_49].list_phy_addr =
     VAR_47 + (VAR_46 * VAR_29);
    VAR_46++;
   }
  }
 }

 for (VAR_26 = 0; VAR_26 < VAR_34->tx_fifo_num; VAR_26++) {
  struct fifo_info *VAR_50 = &VAR_35->fifos[VAR_26];
  struct tx_fifo_config *VAR_51 = &VAR_34->tx_cfg[VAR_26];

  VAR_20 = VAR_51->fifo_len;
  VAR_50->ufo_in_band_v = FUNC_3(VAR_20, sizeof(u64), VAR_7);
  if (!VAR_50->ufo_in_band_v)
   return -VAR_4;
  VAR_36 += (VAR_20 * sizeof(u64));
 }


 VAR_20 = 0;
 for (VAR_26 = 0; VAR_26 < VAR_34->rx_ring_num; VAR_26++) {
  struct rx_ring_config *VAR_52 = &VAR_34->rx_cfg[VAR_26];
  struct ring_info *VAR_53 = &VAR_35->rings[VAR_26];

  if (VAR_52->num_rxd % (VAR_17[VAR_19->rxd_mode] + 1)) {
   FUNC_0(VAR_5, "%s: Ring%d RxD count is not a "
      "multiple of RxDs per Block\n",
      VAR_31->name, VAR_26);
   return VAR_6;
  }
  VAR_20 += VAR_52->num_rxd;
  VAR_53->block_count = VAR_52->num_rxd /
   (VAR_17[VAR_19->rxd_mode] + 1);
  VAR_53->pkt_cnt = VAR_52->num_rxd - VAR_53->block_count;
 }
 if (VAR_19->rxd_mode == VAR_13)
  VAR_20 = (VAR_20 * (sizeof(struct RxD1)));
 else
  VAR_20 = (VAR_20 * (sizeof(struct RxD3)));

 for (VAR_26 = 0; VAR_26 < VAR_34->rx_ring_num; VAR_26++) {
  struct rx_ring_config *VAR_54 = &VAR_34->rx_cfg[VAR_26];
  struct ring_info *VAR_55 = &VAR_35->rings[VAR_26];

  VAR_55->rx_curr_get_info.block_index = 0;
  VAR_55->rx_curr_get_info.offset = 0;
  VAR_55->rx_curr_get_info.ring_len = VAR_54->num_rxd - 1;
  VAR_55->rx_curr_put_info.block_index = 0;
  VAR_55->rx_curr_put_info.offset = 0;
  VAR_55->rx_curr_put_info.ring_len = VAR_54->num_rxd - 1;
  VAR_55->nic = VAR_19;
  VAR_55->ring_no = VAR_26;

  VAR_28 = VAR_54->num_rxd / (VAR_17[VAR_19->rxd_mode] + 1);

  for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
   struct rx_block_info *VAR_56;
   int VAR_57;

   VAR_56 = &VAR_55->rx_blocks[VAR_27];
   VAR_20 = VAR_15;
   VAR_21 = FUNC_7(VAR_19->pdev, VAR_20,
         &VAR_23);
   if (VAR_21 == ((void*)0)) {






    VAR_56->block_virt_addr = VAR_21;
    return -VAR_4;
   }
   VAR_36 += VAR_20;

   VAR_20 = sizeof(struct rxd_info) *
    VAR_17[VAR_19->rxd_mode];
   VAR_56->block_virt_addr = VAR_21;
   VAR_56->block_dma_addr = VAR_23;
   VAR_56->rxds = FUNC_4(VAR_20, VAR_7);
   if (!VAR_56->rxds)
    return -VAR_4;
   VAR_36 += VAR_20;
   for (VAR_57 = 0; VAR_57 < VAR_17[VAR_19->rxd_mode]; VAR_57++) {
    VAR_56->rxds[VAR_57].virt_addr =
     VAR_56->block_virt_addr +
     (VAR_18[VAR_19->rxd_mode] * VAR_57);
    VAR_56->rxds[VAR_57].dma_addr =
     VAR_56->block_dma_addr +
     (VAR_18[VAR_19->rxd_mode] * VAR_57);
   }
  }

  for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
   int VAR_58 = (VAR_27 + 1) % VAR_28;
   VAR_21 = VAR_55->rx_blocks[VAR_27].block_virt_addr;
   VAR_22 = VAR_55->rx_blocks[VAR_58].block_virt_addr;
   VAR_23 = VAR_55->rx_blocks[VAR_27].block_dma_addr;
   VAR_24 = VAR_55->rx_blocks[VAR_58].block_dma_addr;

   VAR_25 = VAR_21;
   VAR_25->reserved_2_pNext_RxD_block =
    (unsigned long)VAR_22;
   VAR_25->pNext_RxD_Blk_physical =
    (u64)VAR_24;
  }
 }
 if (VAR_19->rxd_mode == VAR_14) {




  for (VAR_26 = 0; VAR_26 < VAR_34->rx_ring_num; VAR_26++) {
   struct rx_ring_config *VAR_59 = &VAR_34->rx_cfg[VAR_26];
   struct ring_info *VAR_60 = &VAR_35->rings[VAR_26];

   VAR_28 = VAR_59->num_rxd /
    (VAR_17[VAR_19->rxd_mode] + 1);
   VAR_20 = sizeof(struct buffAdd *) * VAR_28;
   VAR_60->ba = FUNC_4(VAR_20, VAR_7);
   if (!VAR_60->ba)
    return -VAR_4;
   VAR_36 += VAR_20;
   for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
    int VAR_61 = 0;

    VAR_20 = sizeof(struct buffAdd) *
     (VAR_17[VAR_19->rxd_mode] + 1);
    VAR_60->ba[VAR_27] = FUNC_4(VAR_20, VAR_7);
    if (!VAR_60->ba[VAR_27])
     return -VAR_4;
    VAR_36 += VAR_20;
    while (VAR_61 != VAR_17[VAR_19->rxd_mode]) {
     VAR_33 = &VAR_60->ba[VAR_27][VAR_61];
     VAR_20 = VAR_1 + VAR_0;
     VAR_33->ba_0_org = FUNC_4(VAR_20, VAR_7);
     if (!VAR_33->ba_0_org)
      return -VAR_4;
     VAR_36 += VAR_20;
     VAR_32 = (unsigned long)VAR_33->ba_0_org;
     VAR_32 += VAR_0;
     VAR_32 &= ~((unsigned long)VAR_0);
     VAR_33->ba_0 = (void *)VAR_32;

     VAR_20 = VAR_2 + VAR_0;
     VAR_33->ba_1_org = FUNC_4(VAR_20, VAR_7);
     if (!VAR_33->ba_1_org)
      return -VAR_4;
     VAR_36 += VAR_20;
     VAR_32 = (unsigned long)VAR_33->ba_1_org;
     VAR_32 += VAR_0;
     VAR_32 &= ~((unsigned long)VAR_0);
     VAR_33->ba_1 = (void *)VAR_32;
     VAR_61++;
    }
   }
  }
 }


 VAR_20 = sizeof(struct stat_block);
 VAR_35->stats_mem =
  FUNC_7(VAR_19->pdev, VAR_20,
         &VAR_35->stats_mem_phy);

 if (!VAR_35->stats_mem) {





  return -VAR_4;
 }
 VAR_36 += VAR_20;
 VAR_35->stats_mem_sz = VAR_20;

 VAR_21 = VAR_35->stats_mem;
 VAR_35->stats_info = VAR_21;
 FUNC_6(VAR_21, 0, VAR_20);
 FUNC_0(VAR_9, "%s: Ring Mem PHY: 0x%llx\n",
  FUNC_2(&VAR_19->pdev->dev), (unsigned long long)VAR_23);
 VAR_35->stats_info->sw_stat.mem_allocated += VAR_36;
 return VAR_16;
}
