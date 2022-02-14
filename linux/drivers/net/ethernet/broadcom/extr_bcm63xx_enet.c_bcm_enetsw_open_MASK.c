
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int name; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int irq_rx; int irq_tx; int rx_ring_size; unsigned int rx_desc_alloc_size; int tx_ring_size; unsigned int tx_desc_alloc_size; int tx_desc_count; int num_ports; int rx_desc_dma; struct bcm_enet_desc* rx_desc_cpu; int tx_desc_dma; struct bcm_enet_desc* tx_desc_cpu; int * tx_skb; int * rx_skb; int rx_skb_size; int swphy_poll; struct bcm63xx_enetsw_port* used_ports; int tx_chan; int rx_chan; int napi; int dma_maxburst; scalar_t__* sw_port_link; scalar_t__ rx_curr_desc; scalar_t__ rx_dirty_desc; scalar_t__ rx_desc_count; int tx_lock; scalar_t__ tx_curr_desc; scalar_t__ tx_dirty_desc; TYPE_1__* pdev; } ;
struct bcm_enet_desc {int address; } ;
struct bcm63xx_enetsw_port {int force_speed; scalar_t__ force_duplex_full; int name; int bypass_link; int used; } ;
struct TYPE_2__ {struct device dev; } ;


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
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct device*,char*,...) ;
 void* FUNC_7 (struct device*,unsigned int,int *,int ) ;
 int FUNC_8 (struct device*,unsigned int,struct bcm_enet_desc*,int ) ;
 int FUNC_9 (struct device*,int ,int ,int ) ;
 int FUNC_10 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_11 (struct bcm_enet_priv*,int ,int ,int ) ;
 int FUNC_12 (struct bcm_enet_priv*,int ,int ,int ) ;
 int FUNC_13 (struct bcm_enet_priv*,int ) ;
 int FUNC_14 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_15 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_16 (struct bcm_enet_priv*,int,int ) ;
 int FUNC_17 (int,struct net_device*) ;
 int VAR_33 ;
 void* FUNC_18 (int,int,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 struct bcm_enet_priv* FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*) ;
 int FUNC_27 (char*,int ) ;
 int FUNC_28 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_29 (int *) ;
 int VAR_34 ;
 int FUNC_30 (int *,int ,int ) ;
 int FUNC_31 () ;

__attribute__((used)) static int FUNC_32(struct net_device *VAR_35)
{
 struct bcm_enet_priv *VAR_36;
 struct device *VAR_37;
 int VAR_38, VAR_39;
 unsigned int VAR_40;
 void *VAR_41;
 u32 VAR_42;

 VAR_36 = FUNC_24(VAR_35);
 VAR_37 = &VAR_36->pdev->dev;


 FUNC_11(VAR_36, 0, VAR_4, VAR_36->rx_chan);
 FUNC_11(VAR_36, 0, VAR_4, VAR_36->tx_chan);

 VAR_39 = FUNC_28(VAR_36->irq_rx, VAR_32,
     0, VAR_35->name, VAR_35);
 if (VAR_39)
  goto out_freeirq;

 if (VAR_36->irq_tx != -1) {
  VAR_39 = FUNC_28(VAR_36->irq_tx, VAR_32,
      0, VAR_35->name, VAR_35);
  if (VAR_39)
   goto out_freeirq_rx;
 }


 VAR_40 = VAR_36->rx_ring_size * sizeof(struct bcm_enet_desc);
 VAR_41 = FUNC_7(VAR_37, VAR_40, &VAR_36->rx_desc_dma, VAR_31);
 if (!VAR_41) {
  FUNC_6(VAR_37, "cannot allocate rx ring %u\n", VAR_40);
  VAR_39 = -VAR_30;
  goto out_freeirq_tx;
 }

 VAR_36->rx_desc_alloc_size = VAR_40;
 VAR_36->rx_desc_cpu = VAR_41;


 VAR_40 = VAR_36->tx_ring_size * sizeof(struct bcm_enet_desc);
 VAR_41 = FUNC_7(VAR_37, VAR_40, &VAR_36->tx_desc_dma, VAR_31);
 if (!VAR_41) {
  FUNC_6(VAR_37, "cannot allocate tx ring\n");
  VAR_39 = -VAR_30;
  goto out_free_rx_ring;
 }

 VAR_36->tx_desc_alloc_size = VAR_40;
 VAR_36->tx_desc_cpu = VAR_41;

 VAR_36->tx_skb = FUNC_18(VAR_36->tx_ring_size, sizeof(struct sk_buff *),
          VAR_31);
 if (!VAR_36->tx_skb) {
  FUNC_6(VAR_37, "cannot allocate rx skb queue\n");
  VAR_39 = -VAR_30;
  goto out_free_tx_ring;
 }

 VAR_36->tx_desc_count = VAR_36->tx_ring_size;
 VAR_36->tx_dirty_desc = 0;
 VAR_36->tx_curr_desc = 0;
 FUNC_29(&VAR_36->tx_lock);


 VAR_36->rx_skb = FUNC_18(VAR_36->rx_ring_size, sizeof(struct sk_buff *),
          VAR_31);
 if (!VAR_36->rx_skb) {
  FUNC_6(VAR_37, "cannot allocate rx skb queue\n");
  VAR_39 = -VAR_30;
  goto out_free_tx_skb;
 }

 VAR_36->rx_desc_count = 0;
 VAR_36->rx_dirty_desc = 0;
 VAR_36->rx_curr_desc = 0;


 for (VAR_38 = 0; VAR_38 < VAR_36->num_ports; VAR_38++) {
  FUNC_14(VAR_36, VAR_24,
         FUNC_3(VAR_38));
  FUNC_14(VAR_36, VAR_26 |
         VAR_27,
         FUNC_4(VAR_38));

  VAR_36->sw_port_link[VAR_38] = 0;
 }


 VAR_42 = FUNC_13(VAR_36, VAR_14);
 VAR_42 |= VAR_15;
 FUNC_14(VAR_36, VAR_42, VAR_14);
 FUNC_21(1);
 VAR_42 &= ~VAR_15;
 FUNC_14(VAR_36, VAR_42, VAR_14);
 FUNC_21(1);


 VAR_42 = FUNC_13(VAR_36, VAR_21);
 VAR_42 |= VAR_19 | VAR_20;
 FUNC_14(VAR_36, VAR_42, VAR_21);


 VAR_42 = FUNC_13(VAR_36, VAR_29);
 VAR_42 |= VAR_28;
 FUNC_14(VAR_36, VAR_42, VAR_29);


 FUNC_15(VAR_36, 0x1ff, VAR_23);
 FUNC_16(VAR_36, 9728, VAR_22);


 FUNC_10(VAR_36, VAR_11 | 0,
   FUNC_0(VAR_36->rx_chan));

 if (FUNC_5(VAR_35)) {
  FUNC_6(VAR_37, "cannot allocate rx skb queue\n");
  VAR_39 = -VAR_30;
  goto out;
 }


 FUNC_12(VAR_36, VAR_36->rx_desc_dma,
    VAR_7, VAR_36->rx_chan);
 FUNC_12(VAR_36, VAR_36->tx_desc_dma,
    VAR_7, VAR_36->tx_chan);


 FUNC_12(VAR_36, 0, VAR_8, VAR_36->rx_chan);
 FUNC_12(VAR_36, 0, VAR_8, VAR_36->tx_chan);
 FUNC_12(VAR_36, 0, VAR_9, VAR_36->rx_chan);
 FUNC_12(VAR_36, 0, VAR_9, VAR_36->tx_chan);
 FUNC_12(VAR_36, 0, VAR_10, VAR_36->rx_chan);
 FUNC_12(VAR_36, 0, VAR_10, VAR_36->tx_chan);


 FUNC_11(VAR_36, VAR_36->dma_maxburst,
    VAR_6, VAR_36->rx_chan);
 FUNC_11(VAR_36, VAR_36->dma_maxburst,
    VAR_6, VAR_36->tx_chan);


 VAR_42 = VAR_36->rx_ring_size / 3;
 FUNC_10(VAR_36, VAR_42, FUNC_2(VAR_36->rx_chan));
 VAR_42 = (VAR_36->rx_ring_size * 2) / 3;
 FUNC_10(VAR_36, VAR_42, FUNC_1(VAR_36->rx_chan));




 FUNC_31();
 FUNC_10(VAR_36, VAR_12, VAR_13);
 FUNC_11(VAR_36, VAR_2,
    VAR_1, VAR_36->rx_chan);


 FUNC_11(VAR_36, VAR_5,
    VAR_3, VAR_36->rx_chan);
 FUNC_11(VAR_36, VAR_5,
    VAR_3, VAR_36->tx_chan);


 FUNC_23(&VAR_36->napi);

 FUNC_11(VAR_36, VAR_5,
    VAR_4, VAR_36->rx_chan);
 FUNC_11(VAR_36, VAR_5,
    VAR_4, VAR_36->tx_chan);

 FUNC_25(VAR_35);
 FUNC_26(VAR_35);


 for (VAR_38 = 0; VAR_38 < VAR_36->num_ports; VAR_38++) {
  struct bcm63xx_enetsw_port *VAR_43;
  u8 VAR_44;
  VAR_43 = &VAR_36->used_ports[VAR_38];
  if (!VAR_43->used)
   continue;

  if (!VAR_43->bypass_link)
   continue;

  VAR_44 = VAR_24 |
   VAR_25;

  switch (VAR_43->force_speed) {
  case 1000:
   VAR_44 |= VAR_16;
   break;
  case 100:
   VAR_44 |= VAR_17;
   break;
  case 10:
   break;
  default:
   FUNC_27("invalid forced speed on port %s: assume 10\n",
          VAR_43->name);
   break;
  }

  if (VAR_43->force_duplex_full)
   VAR_44 |= VAR_18;


  FUNC_14(VAR_36, VAR_44, FUNC_3(VAR_38));
  FUNC_14(VAR_36, 0, FUNC_4(VAR_38));
 }


 FUNC_30(&VAR_36->swphy_poll, VAR_34, 0);
 FUNC_22(&VAR_36->swphy_poll, VAR_33);
 return 0;

out:
 for (VAR_38 = 0; VAR_38 < VAR_36->rx_ring_size; VAR_38++) {
  struct bcm_enet_desc *VAR_45;

  if (!VAR_36->rx_skb[VAR_38])
   continue;

  VAR_45 = &VAR_36->rx_desc_cpu[VAR_38];
  FUNC_9(VAR_37, VAR_45->address, VAR_36->rx_skb_size,
     VAR_0);
  FUNC_20(VAR_36->rx_skb[VAR_38]);
 }
 FUNC_19(VAR_36->rx_skb);

out_free_tx_skb:
 FUNC_19(VAR_36->tx_skb);

out_free_tx_ring:
 FUNC_8(VAR_37, VAR_36->tx_desc_alloc_size,
     VAR_36->tx_desc_cpu, VAR_36->tx_desc_dma);

out_free_rx_ring:
 FUNC_8(VAR_37, VAR_36->rx_desc_alloc_size,
     VAR_36->rx_desc_cpu, VAR_36->rx_desc_dma);

out_freeirq_tx:
 if (VAR_36->irq_tx != -1)
  FUNC_17(VAR_36->irq_tx, VAR_35);

out_freeirq_rx:
 FUNC_17(VAR_36->irq_rx, VAR_35);

out_freeirq:
 return VAR_39;
}
