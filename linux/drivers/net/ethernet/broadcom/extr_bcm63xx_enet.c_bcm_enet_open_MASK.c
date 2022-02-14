
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sockaddr {int sa_data; } ;
struct sk_buff {int dummy; } ;
struct phy_device {int dummy; } ;
struct net_device {int irq; int dev_addr; int name; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int old_duplex; int old_pause; int rx_ring_size; int rx_desc_dma; unsigned int rx_desc_alloc_size; int tx_ring_size; int tx_desc_dma; unsigned int tx_desc_alloc_size; int tx_desc_count; int hw_mtu; int dma_maxburst; int dma_chan_en_mask; int dma_chan_int_mask; int irq_rx; int irq_tx; struct bcm_enet_desc* rx_desc_cpu; struct bcm_enet_desc* tx_desc_cpu; int * tx_skb; int * rx_skb; int rx_skb_size; int tx_chan; int rx_chan; int napi; scalar_t__ dma_has_sram; scalar_t__ rx_curr_desc; scalar_t__ rx_dirty_desc; scalar_t__ rx_desc_count; int tx_lock; scalar_t__ tx_curr_desc; scalar_t__ tx_dirty_desc; scalar_t__ old_link; int pause_auto; int pause_rx; int phy_id; TYPE_2__* mii_bus; scalar_t__ has_phy; TYPE_1__* pdev; } ;
struct bcm_enet_desc {int address; } ;
typedef int phy_id ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_5 (struct phy_device*) ;
 int VAR_28 ;
 char* VAR_29 ;
 int VAR_30 ;
 int FUNC_6 (struct phy_device*) ;
 int VAR_31 ;
 int FUNC_7 (struct net_device*) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,struct sockaddr*) ;
 int FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,unsigned int,int*,int ) ;
 int FUNC_12 (struct device*,unsigned int,struct bcm_enet_desc*,int) ;
 int FUNC_13 (struct device*,int ,int ,int ) ;
 int FUNC_14 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_15 (struct bcm_enet_priv*,int,int ,int ) ;
 int FUNC_16 (struct bcm_enet_priv*,int,int ,int ) ;
 int FUNC_17 (struct bcm_enet_priv*,int ) ;
 int FUNC_18 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_19 (int ,struct net_device*) ;
 void* FUNC_20 (int,int,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int *) ;
 struct bcm_enet_priv* FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*) ;
 int FUNC_27 (struct phy_device*) ;
 struct phy_device* FUNC_28 (struct net_device*,char*,int ,int ) ;
 int FUNC_29 (struct phy_device*) ;
 int FUNC_30 (struct phy_device*,int ) ;
 int FUNC_31 (struct phy_device*,int ,int ,int ) ;
 int FUNC_32 (struct phy_device*) ;
 int FUNC_33 (struct phy_device*) ;
 int FUNC_34 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_35 (char*,int,char*,int ,int ) ;
 int FUNC_36 (int *) ;
 int FUNC_37 () ;

__attribute__((used)) static int FUNC_38(struct net_device *VAR_35)
{
 struct bcm_enet_priv *VAR_36;
 struct sockaddr VAR_37;
 struct device *VAR_38;
 struct phy_device *VAR_39;
 int VAR_40, VAR_41;
 unsigned int VAR_42;
 char VAR_43[VAR_28 + 3];
 void *VAR_44;
 u32 VAR_45;

 VAR_36 = FUNC_25(VAR_35);
 VAR_38 = &VAR_36->pdev->dev;

 if (VAR_36->has_phy) {

  FUNC_35(VAR_43, sizeof(VAR_43), VAR_29,
    VAR_36->mii_bus->id, VAR_36->phy_id);

  VAR_39 = FUNC_28(VAR_35, VAR_43, VAR_32,
         VAR_30);

  if (FUNC_5(VAR_39)) {
   FUNC_10(VAR_38, "could not attach to PHY\n");
   return FUNC_6(VAR_39);
  }


  FUNC_33(VAR_39);
  FUNC_30(VAR_39, VAR_31);
  FUNC_31(VAR_39, VAR_36->pause_rx, VAR_36->pause_rx,
      VAR_36->pause_auto);

  FUNC_27(VAR_39);

  VAR_36->old_link = 0;
  VAR_36->old_duplex = -1;
  VAR_36->old_pause = -1;
 } else {
  VAR_39 = ((void*)0);
 }


 FUNC_18(VAR_36, 0, VAR_19);
 FUNC_15(VAR_36, 0, VAR_6, VAR_36->rx_chan);
 FUNC_15(VAR_36, 0, VAR_6, VAR_36->tx_chan);

 VAR_41 = FUNC_34(VAR_35->irq, VAR_34, 0, VAR_35->name, VAR_35);
 if (VAR_41)
  goto out_phy_disconnect;

 VAR_41 = FUNC_34(VAR_36->irq_rx, VAR_33, 0,
     VAR_35->name, VAR_35);
 if (VAR_41)
  goto out_freeirq;

 VAR_41 = FUNC_34(VAR_36->irq_tx, VAR_33,
     0, VAR_35->name, VAR_35);
 if (VAR_41)
  goto out_freeirq_rx;


 for (VAR_40 = 0; VAR_40 < 4; VAR_40++) {
  FUNC_18(VAR_36, 0, FUNC_4(VAR_40));
  FUNC_18(VAR_36, 0, FUNC_3(VAR_40));
 }


 FUNC_23(VAR_37.sa_data, VAR_35->dev_addr, VAR_26);
 FUNC_9(VAR_35, &VAR_37);


 VAR_42 = VAR_36->rx_ring_size * sizeof(struct bcm_enet_desc);
 VAR_44 = FUNC_11(VAR_38, VAR_42, &VAR_36->rx_desc_dma, VAR_27);
 if (!VAR_44) {
  VAR_41 = -VAR_25;
  goto out_freeirq_tx;
 }

 VAR_36->rx_desc_alloc_size = VAR_42;
 VAR_36->rx_desc_cpu = VAR_44;


 VAR_42 = VAR_36->tx_ring_size * sizeof(struct bcm_enet_desc);
 VAR_44 = FUNC_11(VAR_38, VAR_42, &VAR_36->tx_desc_dma, VAR_27);
 if (!VAR_44) {
  VAR_41 = -VAR_25;
  goto out_free_rx_ring;
 }

 VAR_36->tx_desc_alloc_size = VAR_42;
 VAR_36->tx_desc_cpu = VAR_44;

 VAR_36->tx_skb = FUNC_20(VAR_36->tx_ring_size, sizeof(struct sk_buff *),
          VAR_27);
 if (!VAR_36->tx_skb) {
  VAR_41 = -VAR_25;
  goto out_free_tx_ring;
 }

 VAR_36->tx_desc_count = VAR_36->tx_ring_size;
 VAR_36->tx_dirty_desc = 0;
 VAR_36->tx_curr_desc = 0;
 FUNC_36(&VAR_36->tx_lock);


 VAR_36->rx_skb = FUNC_20(VAR_36->rx_ring_size, sizeof(struct sk_buff *),
          VAR_27);
 if (!VAR_36->rx_skb) {
  VAR_41 = -VAR_25;
  goto out_free_tx_skb;
 }

 VAR_36->rx_desc_count = 0;
 VAR_36->rx_dirty_desc = 0;
 VAR_36->rx_curr_desc = 0;


 if (VAR_36->dma_has_sram)
  FUNC_14(VAR_36, VAR_14 | 0,
    FUNC_0(VAR_36->rx_chan));
 else
  FUNC_15(VAR_36, VAR_14 | 0,
    VAR_2, VAR_36->rx_chan);

 if (FUNC_8(VAR_35)) {
  FUNC_10(VAR_38, "cannot allocate rx skb queue\n");
  VAR_41 = -VAR_25;
  goto out;
 }


 if (VAR_36->dma_has_sram) {
  FUNC_16(VAR_36, VAR_36->rx_desc_dma,
     VAR_10, VAR_36->rx_chan);
  FUNC_16(VAR_36, VAR_36->tx_desc_dma,
    VAR_10, VAR_36->tx_chan);
 } else {
  FUNC_15(VAR_36, VAR_36->rx_desc_dma,
    VAR_9, VAR_36->rx_chan);
  FUNC_15(VAR_36, VAR_36->tx_desc_dma,
    VAR_9, VAR_36->tx_chan);
 }


 if (VAR_36->dma_has_sram) {
  FUNC_16(VAR_36, 0, VAR_11, VAR_36->rx_chan);
  FUNC_16(VAR_36, 0, VAR_11, VAR_36->tx_chan);
  FUNC_16(VAR_36, 0, VAR_12, VAR_36->rx_chan);
  FUNC_16(VAR_36, 0, VAR_12, VAR_36->tx_chan);
  FUNC_16(VAR_36, 0, VAR_13, VAR_36->rx_chan);
  FUNC_16(VAR_36, 0, VAR_13, VAR_36->tx_chan);
 } else {
  FUNC_15(VAR_36, 0, VAR_4, VAR_36->rx_chan);
  FUNC_15(VAR_36, 0, VAR_4, VAR_36->tx_chan);
 }


 FUNC_18(VAR_36, VAR_36->hw_mtu, VAR_22);
 FUNC_18(VAR_36, VAR_36->hw_mtu, VAR_23);


 FUNC_15(VAR_36, VAR_36->dma_maxburst,
    VAR_8, VAR_36->rx_chan);
 FUNC_15(VAR_36, VAR_36->dma_maxburst,
    VAR_8, VAR_36->tx_chan);


 FUNC_18(VAR_36, VAR_0, VAR_24);


 if (VAR_36->dma_has_sram) {
  VAR_45 = VAR_36->rx_ring_size / 3;
  FUNC_14(VAR_36, VAR_45, FUNC_2(VAR_36->rx_chan));
  VAR_45 = (VAR_36->rx_ring_size * 2) / 3;
  FUNC_14(VAR_36, VAR_45, FUNC_1(VAR_36->rx_chan));
 } else {
  FUNC_15(VAR_36, 5, VAR_4, VAR_36->rx_chan);
  FUNC_15(VAR_36, VAR_36->rx_ring_size, VAR_7, VAR_36->rx_chan);
  FUNC_15(VAR_36, VAR_36->tx_ring_size, VAR_7, VAR_36->tx_chan);
 }



 FUNC_37();
 VAR_45 = FUNC_17(VAR_36, VAR_18);
 VAR_45 |= VAR_17;
 FUNC_18(VAR_36, VAR_45, VAR_18);
 if (VAR_36->dma_has_sram)
  FUNC_14(VAR_36, VAR_15, VAR_16);
 FUNC_15(VAR_36, VAR_36->dma_chan_en_mask,
    VAR_3, VAR_36->rx_chan);


 FUNC_18(VAR_36, VAR_20, VAR_21);
 FUNC_18(VAR_36, VAR_20, VAR_19);


 FUNC_15(VAR_36, VAR_36->dma_chan_int_mask,
    VAR_5, VAR_36->rx_chan);
 FUNC_15(VAR_36, VAR_36->dma_chan_int_mask,
    VAR_5, VAR_36->tx_chan);


 FUNC_24(&VAR_36->napi);

 FUNC_15(VAR_36, VAR_36->dma_chan_int_mask,
    VAR_6, VAR_36->rx_chan);
 FUNC_15(VAR_36, VAR_36->dma_chan_int_mask,
    VAR_6, VAR_36->tx_chan);

 if (VAR_39)
  FUNC_32(VAR_39);
 else
  FUNC_7(VAR_35);

 FUNC_26(VAR_35);
 return 0;

out:
 for (VAR_40 = 0; VAR_40 < VAR_36->rx_ring_size; VAR_40++) {
  struct bcm_enet_desc *VAR_46;

  if (!VAR_36->rx_skb[VAR_40])
   continue;

  VAR_46 = &VAR_36->rx_desc_cpu[VAR_40];
  FUNC_13(VAR_38, VAR_46->address, VAR_36->rx_skb_size,
     VAR_1);
  FUNC_22(VAR_36->rx_skb[VAR_40]);
 }
 FUNC_21(VAR_36->rx_skb);

out_free_tx_skb:
 FUNC_21(VAR_36->tx_skb);

out_free_tx_ring:
 FUNC_12(VAR_38, VAR_36->tx_desc_alloc_size,
     VAR_36->tx_desc_cpu, VAR_36->tx_desc_dma);

out_free_rx_ring:
 FUNC_12(VAR_38, VAR_36->rx_desc_alloc_size,
     VAR_36->rx_desc_cpu, VAR_36->rx_desc_dma);

out_freeirq_tx:
 FUNC_19(VAR_36->irq_tx, VAR_35);

out_freeirq_rx:
 FUNC_19(VAR_36->irq_rx, VAR_35);

out_freeirq:
 FUNC_19(VAR_35->irq, VAR_35);

out_phy_disconnect:
 if (VAR_39)
  FUNC_29(VAR_39);

 return VAR_41;
}
