
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct status_block_msix {scalar_t__ status_rx_quick_consumer_index; } ;
struct status_block {scalar_t__ status_rx_quick_consumer_index2; } ;
struct cnic_uio_dev {int l2_ring_map; int l2_buf_map; struct bnx2_rx_bd* l2_ring; } ;
struct TYPE_2__ {struct status_block_msix* bnx2; struct status_block* gen; } ;
struct cnic_local {int status_blk_num; scalar_t__* rx_cons_ptr; scalar_t__ rx_cons; int l2_rx_ring_size; int l2_single_buf_size; TYPE_1__ status_blk; struct cnic_uio_dev* udev; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct bnx2_rx_bd {int rx_bd_len; int rx_bd_flags; int rx_bd_haddr_hi; int rx_bd_haddr_lo; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct cnic_dev*,int) ;
 int FUNC_2 (struct cnic_dev*,int,int) ;
 int FUNC_3 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 () ;
 int FUNC_5 (struct cnic_dev*,int,int ,int) ;
 int FUNC_6 (struct cnic_dev*,int) ;
 int FUNC_7 (struct cnic_dev*,int ) ;
 int FUNC_8 (struct cnic_dev*,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct cnic_dev *VAR_15)
{
 struct cnic_local *VAR_16 = VAR_15->cnic_priv;
 struct cnic_eth_dev *VAR_17 = VAR_16->ethdev;
 struct cnic_uio_dev *VAR_18 = VAR_16->udev;
 u32 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;
 struct bnx2_rx_bd *VAR_25;
 struct status_block *VAR_26 = VAR_16->status_blk.gen;
 dma_addr_t VAR_27 = VAR_18->l2_ring_map;

 VAR_20 = VAR_16->status_blk_num;
 FUNC_6(VAR_15, 2);
 VAR_16->rx_cons_ptr = &VAR_26->status_rx_quick_consumer_index2;
 VAR_22 = VAR_1;
 VAR_23 = FUNC_1(VAR_15, VAR_22);
 if (VAR_17->drv_state & VAR_11) {
  struct status_block_msix *VAR_28 = VAR_16->status_blk.bnx2;

  VAR_16->rx_cons_ptr = &VAR_28->status_rx_quick_consumer_index;
  VAR_22 = VAR_0;
  VAR_23 = 1 << (11 + VAR_20);
 }
 VAR_24 = 0;
 while (!(*VAR_16->rx_cons_ptr != 0) && VAR_24 < 10) {
  FUNC_2(VAR_15, VAR_22, VAR_23);
  FUNC_9(10);
  VAR_24++;
  FUNC_4();
 }
 VAR_16->rx_cons = *VAR_16->rx_cons_ptr;

 VAR_19 = FUNC_3(2);
 VAR_21 = VAR_3 |
       VAR_4 | (0x02 << 8);
 FUNC_5(VAR_15, VAR_19, VAR_2, VAR_21);

 if (VAR_20 == 0)
  VAR_21 = 2 << VAR_6;
 else
  VAR_21 = FUNC_0(VAR_20);
 FUNC_5(VAR_15, VAR_19, VAR_5, VAR_21);

 VAR_25 = VAR_18->l2_ring + VAR_12;
 for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++, VAR_25++) {
  dma_addr_t VAR_29;
  int VAR_30 = (VAR_24 % VAR_16->l2_rx_ring_size) + 1;

  VAR_29 = VAR_18->l2_buf_map + (VAR_30 * VAR_16->l2_single_buf_size);
  VAR_25->rx_bd_len = VAR_16->l2_single_buf_size;
  VAR_25->rx_bd_flags = VAR_14 | VAR_13;
  VAR_25->rx_bd_haddr_hi = (u64) VAR_29 >> 32;
  VAR_25->rx_bd_haddr_lo = (u64) VAR_29 & 0xffffffff;
 }
 VAR_21 = (u64) (VAR_27 + VAR_12) >> 32;
 FUNC_5(VAR_15, VAR_19, VAR_7, VAR_21);
 VAR_25->rx_bd_haddr_hi = VAR_21;

 VAR_21 = (u64) (VAR_27 + VAR_12) & 0xffffffff;
 FUNC_5(VAR_15, VAR_19, VAR_8, VAR_21);
 VAR_25->rx_bd_haddr_lo = VAR_21;

 VAR_21 = FUNC_7(VAR_15, VAR_10);
 FUNC_8(VAR_15, VAR_10, VAR_21 | (1 << 2));
}
