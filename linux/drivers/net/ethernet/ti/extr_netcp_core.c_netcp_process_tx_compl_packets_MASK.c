
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ cb; } ;
struct netcp_tx_cb {int ts_context; int (* txtstamp ) (int ,struct sk_buff*) ;} ;
struct netcp_stats {int syncp_tx; int tx_bytes; int tx_packets; int tx_errors; } ;
struct netcp_intf {scalar_t__ tx_resume_threshold; int ndev; int tx_pool; int ndev_dev; int tx_compl_q; struct netcp_stats stats; } ;
struct knav_dma_desc {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (struct knav_dma_desc*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct knav_dma_desc* FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (int ,unsigned int*) ;
 int FUNC_6 (struct netcp_intf*,struct knav_dma_desc*,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,struct sk_buff*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct netcp_intf *VAR_0,
       unsigned int VAR_1)
{
 struct netcp_stats *VAR_2 = &VAR_0->stats;
 struct knav_dma_desc *VAR_3;
 struct netcp_tx_cb *VAR_4;
 struct sk_buff *VAR_5;
 unsigned int VAR_6;
 dma_addr_t VAR_7;
 int VAR_8 = 0;

 while (VAR_1--) {
  VAR_7 = FUNC_5(VAR_0->tx_compl_q, &VAR_6);
  if (!VAR_7)
   break;
  VAR_3 = FUNC_4(VAR_0->tx_pool, VAR_7, VAR_6);
  if (FUNC_14(!VAR_3)) {
   FUNC_1(VAR_0->ndev_dev, "failed to unmap Tx desc\n");
   VAR_2->tx_errors++;
   continue;
  }




  VAR_5 = (struct sk_buff *)FUNC_0(VAR_3);
  FUNC_6(VAR_0, VAR_3, VAR_6);
  if (!VAR_5) {
   FUNC_1(VAR_0->ndev_dev, "No skb in Tx desc\n");
   VAR_2->tx_errors++;
   continue;
  }

  VAR_4 = (struct netcp_tx_cb *)VAR_5->cb;
  if (VAR_4->txtstamp)
   VAR_4->txtstamp(VAR_4->ts_context, VAR_5);

  if (FUNC_8(VAR_0->ndev, VAR_5) &&
      FUNC_7(VAR_0->ndev) &&
      (FUNC_3(VAR_0->tx_pool) >
      VAR_0->tx_resume_threshold)) {
   u16 VAR_9 = FUNC_10(VAR_5);

   FUNC_9(VAR_0->ndev, VAR_9);
  }

  FUNC_12(&VAR_2->syncp_tx);
  VAR_2->tx_packets++;
  VAR_2->tx_bytes += VAR_5->len;
  FUNC_13(&VAR_2->syncp_tx);
  FUNC_2(VAR_5);
  VAR_8++;
 }
 return VAR_8;
}
