
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct skge_tx_desc {int dummy; } ;
struct skge_rx_desc {int dummy; } ;
struct TYPE_4__ {int count; scalar_t__ to_clean; scalar_t__ to_use; int start; } ;
struct skge_port {int port; scalar_t__ rx_buf_size; size_t mem_size; int dma; int * mem; TYPE_1__ rx_ring; TYPE_1__ tx_ring; int napi; int netdev; struct skge_hw* hw; } ;
struct skge_hw {int ports; int ram_size; int ram_offset; TYPE_2__* pdev; int hw_lock; int intr_mask; int phy_lock; } ;
struct net_device {scalar_t__ mtu; int name; int dev_addr; } ;
struct TYPE_5__ {int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct skge_hw*,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct skge_hw*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net_device*,char*,int ,int) ;
 struct skge_port* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct skge_port*,int ,int ,char*) ;
 int * FUNC_12 (TYPE_2__*,size_t,int*) ;
 int FUNC_13 (TYPE_2__*,int,int *,size_t) ;
 int * VAR_11 ;
 int FUNC_14 (int ,int ,int ,int ,struct skge_hw*) ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (struct skge_port*,int ) ;
 int FUNC_16 (struct skge_port*,int ,scalar_t__) ;
 int FUNC_17 (struct skge_hw*,int ,int,int) ;
 int FUNC_18 (struct skge_hw*,int ) ;
 int FUNC_19 (TYPE_1__*,int *,size_t) ;
 int FUNC_20 (struct skge_port*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct skge_hw*,int ,int ) ;
 int FUNC_24 (struct skge_hw*,int ,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int * VAR_14 ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 () ;
 int FUNC_31 (struct skge_hw*,int) ;

__attribute__((used)) static int FUNC_32(struct net_device *VAR_15)
{
 struct skge_port *VAR_16 = FUNC_9(VAR_15);
 struct skge_hw *VAR_17 = VAR_16->hw;
 int VAR_18 = VAR_16->port;
 u32 VAR_19, VAR_20;
 size_t VAR_21, VAR_22;
 int VAR_23;

 if (!FUNC_5(VAR_15->dev_addr))
  return -VAR_3;

 FUNC_11(VAR_16, VAR_10, VAR_16->netdev, "enabling interface\n");

 if (VAR_15->mtu > VAR_9)
  VAR_16->rx_buf_size = VAR_15->mtu + VAR_5;
 else
  VAR_16->rx_buf_size = VAR_9;


 VAR_21 = VAR_16->rx_ring.count * sizeof(struct skge_rx_desc);
 VAR_22 = VAR_16->tx_ring.count * sizeof(struct skge_tx_desc);
 VAR_16->mem_size = VAR_22 + VAR_21;
 VAR_16->mem = FUNC_12(VAR_17->pdev, VAR_16->mem_size, &VAR_16->dma);
 if (!VAR_16->mem)
  return -VAR_4;

 FUNC_0(VAR_16->dma & 7);

 if (FUNC_29(VAR_16->dma) != FUNC_29(VAR_16->dma + VAR_16->mem_size)) {
  FUNC_2(&VAR_17->pdev->dev, "pci_alloc_consistent region crosses 4G boundary\n");
  VAR_23 = -VAR_3;
  goto free_pci_mem;
 }

 VAR_23 = FUNC_19(&VAR_16->rx_ring, VAR_16->mem, VAR_16->dma);
 if (VAR_23)
  goto free_pci_mem;

 VAR_23 = FUNC_21(VAR_15);
 if (VAR_23)
  goto free_rx_ring;

 VAR_23 = FUNC_19(&VAR_16->tx_ring, VAR_16->mem + VAR_21,
         VAR_16->dma + VAR_21);
 if (VAR_23)
  goto free_rx_ring;

 if (VAR_17->ports == 1) {
  VAR_23 = FUNC_14(VAR_17->pdev->irq, VAR_13, VAR_6,
      VAR_15->name, VAR_17);
  if (VAR_23) {
   FUNC_8(VAR_15, "Unable to allocate interrupt %d error: %d\n",
       VAR_17->pdev->irq, VAR_23);
   goto free_tx_ring;
  }
 }


 FUNC_10(VAR_15);
 FUNC_25(&VAR_17->phy_lock);
 if (FUNC_4(VAR_17))
  FUNC_3(VAR_17, VAR_18);
 else
  FUNC_31(VAR_17, VAR_18);
 FUNC_27(&VAR_17->phy_lock);


 VAR_19 = (VAR_17->ram_size - VAR_17->ram_offset) / (VAR_17->ports * 2);
 VAR_20 = VAR_17->ram_offset + 2 * VAR_19 * VAR_18;

 FUNC_17(VAR_17, VAR_12[VAR_18], VAR_20, VAR_19);
 FUNC_16(VAR_16, VAR_12[VAR_18], VAR_16->rx_ring.to_clean);

 FUNC_0(VAR_16->tx_ring.to_use != VAR_16->tx_ring.to_clean);
 FUNC_17(VAR_17, VAR_14[VAR_18], VAR_20+VAR_19, VAR_19);
 FUNC_16(VAR_16, VAR_14[VAR_18], VAR_16->tx_ring.to_use);


 FUNC_30();
 FUNC_24(VAR_17, FUNC_1(VAR_12[VAR_18], VAR_8), VAR_2 | VAR_1);
 FUNC_15(VAR_16, VAR_7);

 FUNC_26(&VAR_17->hw_lock);
 VAR_17->intr_mask |= VAR_11[VAR_18];
 FUNC_23(VAR_17, VAR_0, VAR_17->intr_mask);
 FUNC_18(VAR_17, VAR_0);
 FUNC_28(&VAR_17->hw_lock);

 FUNC_7(&VAR_16->napi);

 FUNC_22(VAR_15);

 return 0;

 free_tx_ring:
 FUNC_6(VAR_16->tx_ring.start);
 free_rx_ring:
 FUNC_20(VAR_16);
 FUNC_6(VAR_16->rx_ring.start);
 free_pci_mem:
 FUNC_13(VAR_17->pdev, VAR_16->mem_size, VAR_16->mem, VAR_16->dma);
 VAR_16->mem = ((void*)0);

 return VAR_23;
}
