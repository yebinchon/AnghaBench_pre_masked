
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_hw_features {int aux_input_count; int pps_output_count; int tx_dma_channels; int rx_dma_channels; int tx_mtl_queues; int rx_mtl_queues; int l3l4_filer_size; int hash_tsize; int rss_enable; int debug_mem; int tcpseg_offload; int splithead_enable; int dcb_enable; void* atstmap_hword; void* txfifo_size; int rxfifo_size; int eee; int sa_vlan_insert; int tstamp_srcselect; int multi_macaddr; int rx_csum_offload; int tx_csum_offload; int atime_stamp; int pmt_magic_frame; int pmt_remote_wake_up; } ;
struct sxgbe_priv_data {int ioaddr; TYPE_2__* hw; struct sxgbe_hw_features hw_cap; } ;
struct TYPE_4__ {TYPE_1__* mac; } ;
struct TYPE_3__ {int (* get_hw_feature ) (int ,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 void* FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int) ;

__attribute__((used)) static int FUNC_27(struct sxgbe_priv_data * const VAR_0)
{
 int VAR_1 = 0;
 struct sxgbe_hw_features *VAR_2 = &VAR_0->hw_cap;


 VAR_1 = VAR_0->hw->mac->get_hw_feature(VAR_0->ioaddr, 0);
 if (VAR_1) {
  VAR_2->pmt_remote_wake_up =
   FUNC_9(VAR_1);
  VAR_2->pmt_magic_frame = FUNC_8(VAR_1);
  VAR_2->atime_stamp = FUNC_5(VAR_1);
  VAR_2->tx_csum_offload =
   FUNC_20(VAR_1);
  VAR_2->rx_csum_offload =
   FUNC_12(VAR_1);
  VAR_2->multi_macaddr = FUNC_7(VAR_1);
  VAR_2->tstamp_srcselect = FUNC_19(VAR_1);
  VAR_2->sa_vlan_insert = FUNC_17(VAR_1);
  VAR_2->eee = FUNC_3(VAR_1);
 }


 VAR_1 = VAR_0->hw->mac->get_hw_feature(VAR_0->ioaddr, 1);
 if (VAR_1) {
  VAR_2->rxfifo_size = FUNC_14(VAR_1);
  VAR_2->txfifo_size = FUNC_22(VAR_1);
  VAR_2->atstmap_hword = FUNC_22(VAR_1);
  VAR_2->dcb_enable = FUNC_1(VAR_1);
  VAR_2->splithead_enable = FUNC_16(VAR_1);
  VAR_2->tcpseg_offload = FUNC_18(VAR_1);
  VAR_2->debug_mem = FUNC_2(VAR_1);
  VAR_2->rss_enable = FUNC_11(VAR_1);
  VAR_2->hash_tsize = FUNC_4(VAR_1);
  VAR_2->l3l4_filer_size = FUNC_6(VAR_1);
 }


 VAR_1 = VAR_0->hw->mac->get_hw_feature(VAR_0->ioaddr, 2);
 if (VAR_1) {
  VAR_2->rx_mtl_queues = FUNC_15(VAR_1);
  VAR_2->tx_mtl_queues = FUNC_23(VAR_1);
  VAR_2->rx_dma_channels = FUNC_13(VAR_1);
  VAR_2->tx_dma_channels = FUNC_21(VAR_1);
  VAR_2->pps_output_count = FUNC_10(VAR_1);
  VAR_2->aux_input_count = FUNC_0(VAR_1);
 }

 return VAR_1;
}
