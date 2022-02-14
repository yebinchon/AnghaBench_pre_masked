
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {int data; } ;
struct resource {int start; } ;
struct net_device {int dev; int phydev; int name; int irq; } ;
struct cpmac_priv {size_t ring_size; int regs; scalar_t__ dma_ring; struct cpmac_desc* desc_ring; struct cpmac_desc* rx_head; int napi; int reset_work; int reset_pending; int pdev; } ;
struct cpmac_desc {struct sk_buff* skb; scalar_t__ data_mapping; void* hw_next; struct cpmac_desc* prev; scalar_t__ mapping; struct cpmac_desc* next; int dataflags; int buflen; void* hw_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct net_device*) ;
 int VAR_10 ;
 struct cpmac_desc* FUNC_3 (int *,int,scalar_t__*,int ) ;
 int FUNC_4 (int *,int,struct cpmac_desc*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,scalar_t__,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 struct sk_buff* FUNC_11 (struct net_device*,int ) ;
 int FUNC_12 (struct net_device*,char*) ;
 struct cpmac_priv* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct cpmac_priv*) ;
 int FUNC_15 (int ) ;
 struct resource* FUNC_16 (int ,int ,char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (struct resource*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct net_device *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 struct cpmac_priv *VAR_15 = FUNC_13(VAR_11);
 struct resource *VAR_16;
 struct cpmac_desc *VAR_17;
 struct sk_buff *VAR_18;

 VAR_16 = FUNC_16(VAR_15->pdev, VAR_7, "regs");
 if (!FUNC_19(VAR_16->start, FUNC_20(VAR_16), VAR_11->name)) {
  if (FUNC_14(VAR_15))
   FUNC_12(VAR_11, "failed to request registers\n");

  VAR_14 = -VAR_5;
  goto fail_reserve;
 }

 VAR_15->regs = FUNC_7(VAR_16->start, FUNC_20(VAR_16));
 if (!VAR_15->regs) {
  if (FUNC_14(VAR_15))
   FUNC_12(VAR_11, "failed to remap registers\n");

  VAR_14 = -VAR_5;
  goto fail_remap;
 }

 VAR_13 = VAR_15->ring_size + VAR_1;
 VAR_15->desc_ring = FUNC_3(&VAR_11->dev,
          sizeof(struct cpmac_desc) * VAR_13,
          &VAR_15->dma_ring,
          VAR_6);
 if (!VAR_15->desc_ring) {
  VAR_14 = -VAR_4;
  goto fail_alloc;
 }

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  VAR_15->desc_ring[VAR_12].mapping = VAR_15->dma_ring + sizeof(*VAR_17) * VAR_12;

 VAR_15->rx_head = &VAR_15->desc_ring[VAR_1];
 for (VAR_12 = 0, VAR_17 = VAR_15->rx_head; VAR_12 < VAR_15->ring_size; VAR_12++, VAR_17++) {
  VAR_18 = FUNC_11(VAR_11, VAR_2);
  if (FUNC_21(!VAR_18)) {
   VAR_14 = -VAR_4;
   goto fail_desc;
  }
  VAR_17->skb = VAR_18;
  VAR_17->data_mapping = FUNC_5(&VAR_11->dev, VAR_18->data,
          VAR_2,
          VAR_3);
  VAR_17->hw_data = (u32)VAR_17->data_mapping;
  VAR_17->buflen = VAR_2;
  VAR_17->dataflags = VAR_0;
  VAR_17->next = &VAR_15->rx_head[(VAR_12 + 1) % VAR_15->ring_size];
  VAR_17->next->prev = VAR_17;
  VAR_17->hw_next = (u32)VAR_17->next->mapping;
 }

 VAR_15->rx_head->prev->hw_next = (u32)0;

 VAR_14 = FUNC_18(VAR_11->irq, VAR_10, VAR_8, VAR_11->name, VAR_11);
 if (VAR_14) {
  if (FUNC_14(VAR_15))
   FUNC_12(VAR_11, "failed to obtain irq\n");

  goto fail_irq;
 }

 FUNC_1(&VAR_15->reset_pending, 0);
 FUNC_0(&VAR_15->reset_work, VAR_9);
 FUNC_2(VAR_11);

 FUNC_10(&VAR_15->napi);
 FUNC_15(VAR_11->phydev);

 return 0;

fail_irq:
fail_desc:
 for (VAR_12 = 0; VAR_12 < VAR_15->ring_size; VAR_12++) {
  if (VAR_15->rx_head[VAR_12].skb) {
   FUNC_6(&VAR_11->dev,
      VAR_15->rx_head[VAR_12].data_mapping,
      VAR_2,
      VAR_3);
   FUNC_9(VAR_15->rx_head[VAR_12].skb);
  }
 }
 FUNC_4(&VAR_11->dev, sizeof(struct cpmac_desc) * VAR_13,
     VAR_15->desc_ring, VAR_15->dma_ring);

fail_alloc:
 FUNC_8(VAR_15->regs);

fail_remap:
 FUNC_17(VAR_16->start, FUNC_20(VAR_16));

fail_reserve:
 return VAR_14;
}
