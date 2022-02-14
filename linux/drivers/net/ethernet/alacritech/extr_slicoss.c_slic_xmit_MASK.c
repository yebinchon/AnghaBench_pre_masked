
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_tx_queue {size_t put_idx; int len; struct slic_tx_buffer* txbuffs; } ;
struct slic_tx_desc {void* len; void* paddrh; void* paddrl; void* totlen; } ;
struct slic_tx_buffer {int desc_paddr; struct slic_tx_desc* desc; struct sk_buff* skb; } ;
struct slic_device {TYPE_1__* pdev; struct slic_tx_queue txq; } ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct slic_tx_buffer*,int ,int ) ;
 int FUNC_5 (struct slic_tx_buffer*,int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct net_device*,char*,...) ;
 struct slic_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct slic_tx_queue*) ;
 size_t FUNC_12 (size_t,int ) ;
 int FUNC_13 (struct slic_device*,int ,int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;

__attribute__((used)) static netdev_tx_t FUNC_17(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct slic_device *VAR_9 = FUNC_8(VAR_8);
 struct slic_tx_queue *VAR_10 = &VAR_9->txq;
 struct slic_tx_buffer *VAR_11;
 struct slic_tx_desc *VAR_12;
 dma_addr_t VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 if (FUNC_14(FUNC_11(VAR_10) < VAR_3)) {
  FUNC_7(VAR_8, "BUG! not enough tx LEs left: %u\n",
      FUNC_11(VAR_10));
  return VAR_1;
 }

 VAR_15 = FUNC_10(VAR_7);
 VAR_13 = FUNC_2(&VAR_9->pdev->dev, VAR_7->data, VAR_15,
          VAR_0);
 if (FUNC_3(&VAR_9->pdev->dev, VAR_13)) {
  FUNC_7(VAR_8, "failed to map tx buffer\n");
  goto drop_skb;
 }

 VAR_11 = &VAR_10->txbuffs[VAR_10->put_idx];
 VAR_11->skb = VAR_7;
 FUNC_4(VAR_11, VAR_5, VAR_13);
 FUNC_5(VAR_11, VAR_6, VAR_15);

 VAR_12 = VAR_11->desc;
 VAR_12->totlen = FUNC_0(VAR_15);
 VAR_12->paddrl = FUNC_0(FUNC_6(VAR_13));
 VAR_12->paddrh = FUNC_0(FUNC_15(VAR_13));
 VAR_12->len = FUNC_0(VAR_15);

 VAR_10->put_idx = FUNC_12(VAR_10->put_idx, VAR_10->len);

 VAR_14 = FUNC_6(VAR_11->desc_paddr) | 1;

 FUNC_16();

 FUNC_13(VAR_9, VAR_4, VAR_14);

 if (FUNC_11(VAR_10) < VAR_3)
  FUNC_9(VAR_8);

 return VAR_2;
drop_skb:
 FUNC_1(VAR_7);

 return VAR_2;
}
