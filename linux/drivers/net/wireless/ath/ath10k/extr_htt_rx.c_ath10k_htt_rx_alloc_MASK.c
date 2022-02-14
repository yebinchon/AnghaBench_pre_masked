
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int msdu_payld; } ;
struct TYPE_8__ {scalar_t__* vaddr; void* paddr; } ;
struct TYPE_10__ {int size; int size_mask; int netbufs_ring; void* base_paddr; int fill_level; int skb_table; TYPE_4__ sw_rd_idx; scalar_t__ fill_cnt; int lock; TYPE_3__ alloc_idx; struct timer_list refill_retry_timer; } ;
struct ath10k_htt {int rx_confused; TYPE_5__ rx_ring; struct ath10k* ar; int num_mpdus_ready; int tx_fetch_ind_q; int rx_in_ord_compl_q; int rx_msdus_q; } ;
struct TYPE_7__ {int rx_ring_fill_level; } ;
struct TYPE_6__ {scalar_t__ dev_type; } ;
struct ath10k {int dev; TYPE_2__ hw_params; TYPE_1__ bus_param; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int ) ;
 int FUNC_1 (struct ath10k_htt*,void*) ;
 size_t FUNC_2 (struct ath10k_htt*) ;
 int VAR_6 ;
 int FUNC_3 (struct ath10k*,char*) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (int ,int,void**,int ) ;
 int FUNC_6 (int ,size_t,void*,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct timer_list*,int ,int ) ;

int FUNC_14(struct ath10k_htt *VAR_7)
{
 struct ath10k *VAR_8 = VAR_7->ar;
 dma_addr_t VAR_9;
 void *VAR_10, *VAR_11;
 size_t VAR_12;
 struct timer_list *VAR_13 = &VAR_7->rx_ring.refill_retry_timer;

 if (VAR_8->bus_param.dev_type == VAR_1)
  return 0;

 VAR_7->rx_confused = 0;




 VAR_7->rx_ring.size = VAR_5;
 VAR_7->rx_ring.size_mask = VAR_7->rx_ring.size - 1;
 VAR_7->rx_ring.fill_level = VAR_8->hw_params.rx_ring_fill_level;

 if (!FUNC_8(VAR_7->rx_ring.size)) {
  FUNC_3(VAR_8, "htt rx ring size is not power of 2\n");
  return -VAR_2;
 }

 VAR_7->rx_ring.netbufs_ring =
  FUNC_9(VAR_7->rx_ring.size, sizeof(struct sk_buff *),
   VAR_4);
 if (!VAR_7->rx_ring.netbufs_ring)
  goto err_netbuf;

 VAR_12 = FUNC_2(VAR_7);

 VAR_11 = FUNC_5(VAR_7->ar->dev, VAR_12, &VAR_9, VAR_4);
 if (!VAR_11)
  goto err_dma_ring;

 FUNC_1(VAR_7, VAR_11);
 VAR_7->rx_ring.base_paddr = VAR_9;

 VAR_10 = FUNC_5(VAR_7->ar->dev,
       sizeof(*VAR_7->rx_ring.alloc_idx.vaddr),
       &VAR_9, VAR_4);
 if (!VAR_10)
  goto err_dma_idx;

 VAR_7->rx_ring.alloc_idx.vaddr = VAR_10;
 VAR_7->rx_ring.alloc_idx.paddr = VAR_9;
 VAR_7->rx_ring.sw_rd_idx.msdu_payld = VAR_7->rx_ring.size_mask;
 *VAR_7->rx_ring.alloc_idx.vaddr = 0;


 FUNC_13(VAR_13, VAR_6, 0);

 FUNC_12(&VAR_7->rx_ring.lock);

 VAR_7->rx_ring.fill_cnt = 0;
 VAR_7->rx_ring.sw_rd_idx.msdu_payld = 0;
 FUNC_7(VAR_7->rx_ring.skb_table);

 FUNC_11(&VAR_7->rx_msdus_q);
 FUNC_11(&VAR_7->rx_in_ord_compl_q);
 FUNC_11(&VAR_7->tx_fetch_ind_q);
 FUNC_4(&VAR_7->num_mpdus_ready, 0);

 FUNC_0(VAR_8, VAR_0, "htt rx ring size %d fill_level %d\n",
     VAR_7->rx_ring.size, VAR_7->rx_ring.fill_level);
 return 0;

err_dma_idx:
 FUNC_6(VAR_7->ar->dev,
     FUNC_2(VAR_7),
     VAR_11,
     VAR_7->rx_ring.base_paddr);
err_dma_ring:
 FUNC_10(VAR_7->rx_ring.netbufs_ring);
err_netbuf:
 return -VAR_3;
}
