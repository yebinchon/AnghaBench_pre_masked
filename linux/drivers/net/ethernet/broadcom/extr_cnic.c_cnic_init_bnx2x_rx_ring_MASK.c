
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_12__ {int * index_values; } ;
struct host_sp_status_block {TYPE_6__ sp_sb; } ;
struct eth_rx_cqe_next_page {void* addr_lo; void* addr_hi; } ;
struct eth_rx_bd {void* addr_lo; void* addr_hi; } ;
struct cnic_uio_dev {int l2_ring_map; int l2_buf_map; scalar_t__ l2_ring; } ;
struct cnic_local {int l2_single_buf_size; int l2_rx_ring_size; int * rx_cons_ptr; int rx_cons; TYPE_1__* ethdev; struct host_sp_status_block* bnx2x_def_status_blk; struct cnic_uio_dev* udev; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct TYPE_10__ {void* lo; void* hi; } ;
struct TYPE_9__ {void* lo; void* hi; } ;
struct TYPE_11__ {int client_qzone_id; size_t rx_sb_index_number; int outer_vlan_removal_enable_flg; int silent_vlan_removal_flg; int silent_vlan_mask; scalar_t__ silent_vlan_value; void* max_bytes_on_bd; int cache_line_alignment_log_size; int status_block_id; TYPE_4__ cqe_page_base; TYPE_3__ bd_page_base; } ;
struct TYPE_8__ {int client_id; int activate_flg; int sp_client_id; int func_id; void* mtu; } ;
struct client_init_ramrod_data {TYPE_5__ rx; TYPE_2__ general; } ;
struct bnx2x {int pfid; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int iscsi_l2_client_id; } ;


 int FUNC_0 (struct bnx2x*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct bnx2x* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cnic_dev *VAR_6,
        struct client_init_ramrod_data *VAR_7)
{
 struct cnic_local *VAR_8 = VAR_6->cnic_priv;
 struct bnx2x *VAR_9 = FUNC_3(VAR_6->netdev);
 struct cnic_uio_dev *VAR_10 = VAR_8->udev;
 struct eth_rx_bd *VAR_11 = (struct eth_rx_bd *) (VAR_10->l2_ring +
    VAR_3);
 struct eth_rx_cqe_next_page *VAR_12 = (struct eth_rx_cqe_next_page *)
    (VAR_10->l2_ring + (2 * VAR_3));
 struct host_sp_status_block *VAR_13 = VAR_8->bnx2x_def_status_blk;
 int VAR_14;
 u32 VAR_15 = VAR_8->ethdev->iscsi_l2_client_id;
 int VAR_16 = FUNC_0(VAR_9, VAR_15);
 u32 VAR_17;
 dma_addr_t VAR_18 = VAR_10->l2_ring_map;


 VAR_7->general.client_id = VAR_15;
 VAR_7->general.activate_flg = 1;
 VAR_7->general.sp_client_id = VAR_15;
 VAR_7->general.mtu = FUNC_1(VAR_8->l2_single_buf_size - 14);
 VAR_7->general.func_id = VAR_9->pfid;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++, VAR_11++) {
  dma_addr_t VAR_19;
  int VAR_20 = (VAR_14 % VAR_8->l2_rx_ring_size) + 1;

  VAR_19 = VAR_10->l2_buf_map + (VAR_20 * VAR_8->l2_single_buf_size);
  VAR_11->addr_hi = FUNC_2((u64) VAR_19 >> 32);
  VAR_11->addr_lo = FUNC_2(VAR_19 & 0xffffffff);
 }

 VAR_17 = (u64) (VAR_18 + VAR_3) >> 32;
 VAR_11->addr_hi = FUNC_2(VAR_17);
 VAR_7->rx.bd_page_base.hi = FUNC_2(VAR_17);

 VAR_17 = (u64) (VAR_18 + VAR_3) & 0xffffffff;
 VAR_11->addr_lo = FUNC_2(VAR_17);
 VAR_7->rx.bd_page_base.lo = FUNC_2(VAR_17);

 VAR_12 += VAR_1;
 VAR_17 = (u64) (VAR_18 + (2 * VAR_3)) >> 32;
 VAR_12->addr_hi = FUNC_2(VAR_17);
 VAR_7->rx.cqe_page_base.hi = FUNC_2(VAR_17);

 VAR_17 = (u64) (VAR_18 + (2 * VAR_3)) & 0xffffffff;
 VAR_12->addr_lo = FUNC_2(VAR_17);
 VAR_7->rx.cqe_page_base.lo = FUNC_2(VAR_17);


 VAR_7->rx.client_qzone_id = VAR_16;
 VAR_7->rx.rx_sb_index_number = VAR_4;
 VAR_7->rx.status_block_id = VAR_0;

 VAR_7->rx.cache_line_alignment_log_size = VAR_5;

 VAR_7->rx.max_bytes_on_bd = FUNC_1(VAR_8->l2_single_buf_size);
 VAR_7->rx.outer_vlan_removal_enable_flg = 1;
 VAR_7->rx.silent_vlan_removal_flg = 1;
 VAR_7->rx.silent_vlan_value = 0;
 VAR_7->rx.silent_vlan_mask = 0xffff;

 VAR_8->rx_cons_ptr =
  &VAR_13->sp_sb.index_values[VAR_4];
 VAR_8->rx_cons = *VAR_8->rx_cons_ptr;
}
