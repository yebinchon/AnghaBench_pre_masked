
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tx_desc {int cmd_sts; int byte_cnt; int buf_ptr; } ;
struct sk_buff {int dummy; } ;
struct pxa168_eth_private {scalar_t__ tx_desc_count; int tx_used_desc_q; int tx_ring_size; TYPE_2__* pdev; struct sk_buff** tx_skb; struct tx_desc* p_tx_desc_area; int work_todo; } ;
struct TYPE_3__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct net_device*,char*) ;
 struct pxa168_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, int VAR_5)
{
 struct pxa168_eth_private *VAR_6 = FUNC_4(VAR_4);
 struct tx_desc *VAR_7;
 u32 VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 FUNC_5(VAR_4);

 VAR_6->work_todo &= ~VAR_3;
 while (VAR_6->tx_desc_count > 0) {
  VAR_10 = VAR_6->tx_used_desc_q;
  VAR_7 = &VAR_6->p_tx_desc_area[VAR_10];
  VAR_8 = VAR_7->cmd_sts;
  if (!VAR_5 && (VAR_8 & VAR_0)) {
   if (VAR_13 > 0) {
    goto txq_reclaim_end;
   } else {
    VAR_13 = -1;
    goto txq_reclaim_end;
   }
  }
  VAR_6->tx_used_desc_q = (VAR_10 + 1) % VAR_6->tx_ring_size;
  VAR_6->tx_desc_count--;
  VAR_11 = VAR_7->buf_ptr;
  VAR_12 = VAR_7->byte_cnt;
  VAR_9 = VAR_6->tx_skb[VAR_10];
  if (VAR_9)
   VAR_6->tx_skb[VAR_10] = ((void*)0);

  if (VAR_8 & VAR_2) {
   if (FUNC_2())
    FUNC_3(VAR_4, "Error in TX\n");
   VAR_4->stats.tx_errors++;
  }
  FUNC_1(&VAR_6->pdev->dev, VAR_11, VAR_12, VAR_1);
  if (VAR_9)
   FUNC_0(VAR_9);
  VAR_13++;
 }
txq_reclaim_end:
 FUNC_6(VAR_4);
 return VAR_13;
}
