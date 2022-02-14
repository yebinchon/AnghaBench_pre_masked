
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct ntb_transport_qp {int rx_alloc_entry; int tx_max_entry; TYPE_2__* rx_dma_chan; TYPE_2__* tx_dma_chan; int tx_mw_size; scalar_t__ tx_mw_dma_addr; int rx_free_q; int ntb_rx_q_lock; int tx_free_q; int ntb_tx_free_q_lock; int qp_num; int ndev; int tx_mw_phys; int event_handler; int tx_handler; int rx_handler; void* cb_data; } ;
struct ntb_transport_ctx {int qp_bitmap_free; struct ntb_transport_qp* qp_vec; } ;
struct ntb_queue_handlers {int event_handler; int tx_handler; int rx_handler; } ;
struct ntb_queue_entry {int entry; struct ntb_transport_qp* qp; } ;
struct ntb_dev {int dev; struct ntb_transport_ctx* ctx; struct pci_dev* pdev; } ;
struct device {int parent; } ;
typedef int dma_cap_mask_t ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 struct ntb_dev* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;
 void* FUNC_10 (int ,int ,void*) ;
 int FUNC_11 (int ,scalar_t__,int ,int ,int ) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (struct ntb_queue_entry*) ;
 struct ntb_queue_entry* FUNC_14 (int,int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_4 ;
 int FUNC_17 (int *,int *,int *) ;
 struct ntb_queue_entry* FUNC_18 (int *,int *) ;
 scalar_t__ VAR_5 ;

struct ntb_transport_qp *
FUNC_19(void *VAR_6, struct device *VAR_7,
      const struct ntb_queue_handlers *VAR_8)
{
 struct ntb_dev *VAR_9;
 struct pci_dev *VAR_10;
 struct ntb_transport_ctx *VAR_11;
 struct ntb_queue_entry *VAR_12;
 struct ntb_transport_qp *VAR_13;
 u64 VAR_14;
 unsigned int VAR_15;
 dma_cap_mask_t VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_9 = FUNC_3(VAR_7->parent);
 VAR_10 = VAR_9->pdev;
 VAR_11 = VAR_9->ctx;

 VAR_17 = FUNC_4(&VAR_9->dev);

 VAR_15 = FUNC_12(VAR_11->qp_bitmap_free);
 if (!VAR_15)
  goto err;


 VAR_15--;

 VAR_13 = &VAR_11->qp_vec[VAR_15];
 VAR_14 = FUNC_0(VAR_13->qp_num);

 VAR_11->qp_bitmap_free &= ~VAR_14;

 VAR_13->cb_data = VAR_6;
 VAR_13->rx_handler = VAR_8->rx_handler;
 VAR_13->tx_handler = VAR_8->tx_handler;
 VAR_13->event_handler = VAR_8->event_handler;

 FUNC_6(VAR_16);
 FUNC_5(VAR_1, VAR_16);

 if (VAR_5) {
  VAR_13->tx_dma_chan =
   FUNC_10(VAR_16, VAR_4,
         (void *)(unsigned long)VAR_17);
  if (!VAR_13->tx_dma_chan)
   FUNC_2(&VAR_10->dev, "Unable to allocate TX DMA channel\n");

  VAR_13->rx_dma_chan =
   FUNC_10(VAR_16, VAR_4,
         (void *)(unsigned long)VAR_17);
  if (!VAR_13->rx_dma_chan)
   FUNC_2(&VAR_10->dev, "Unable to allocate RX DMA channel\n");
 } else {
  VAR_13->tx_dma_chan = ((void*)0);
  VAR_13->rx_dma_chan = ((void*)0);
 }

 VAR_13->tx_mw_dma_addr = 0;
 if (VAR_13->tx_dma_chan) {
  VAR_13->tx_mw_dma_addr =
   FUNC_7(VAR_13->tx_dma_chan->device->dev,
      VAR_13->tx_mw_phys, VAR_13->tx_mw_size,
      VAR_0, 0);
  if (FUNC_8(VAR_13->tx_dma_chan->device->dev,
          VAR_13->tx_mw_dma_addr)) {
   VAR_13->tx_mw_dma_addr = 0;
   goto err1;
  }
 }

 FUNC_1(&VAR_10->dev, "Using %s memcpy for TX\n",
  VAR_13->tx_dma_chan ? "DMA" : "CPU");

 FUNC_1(&VAR_10->dev, "Using %s memcpy for RX\n",
  VAR_13->rx_dma_chan ? "DMA" : "CPU");

 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  VAR_12 = FUNC_14(sizeof(*VAR_12), VAR_2, VAR_17);
  if (!VAR_12)
   goto err1;

  VAR_12->qp = VAR_13;
  FUNC_17(&VAR_13->ntb_rx_q_lock, &VAR_12->entry,
        &VAR_13->rx_free_q);
 }
 VAR_13->rx_alloc_entry = VAR_3;

 for (VAR_18 = 0; VAR_18 < VAR_13->tx_max_entry; VAR_18++) {
  VAR_12 = FUNC_14(sizeof(*VAR_12), VAR_2, VAR_17);
  if (!VAR_12)
   goto err2;

  VAR_12->qp = VAR_13;
  FUNC_17(&VAR_13->ntb_tx_free_q_lock, &VAR_12->entry,
        &VAR_13->tx_free_q);
 }

 FUNC_15(VAR_13->ndev, VAR_14);
 FUNC_16(VAR_13->ndev, VAR_14);

 FUNC_2(&VAR_10->dev, "NTB Transport QP %d created\n", VAR_13->qp_num);

 return VAR_13;

err2:
 while ((VAR_12 = FUNC_18(&VAR_13->ntb_tx_free_q_lock, &VAR_13->tx_free_q)))
  FUNC_13(VAR_12);
err1:
 VAR_13->rx_alloc_entry = 0;
 while ((VAR_12 = FUNC_18(&VAR_13->ntb_rx_q_lock, &VAR_13->rx_free_q)))
  FUNC_13(VAR_12);
 if (VAR_13->tx_mw_dma_addr)
  FUNC_11(VAR_13->tx_dma_chan->device->dev,
       VAR_13->tx_mw_dma_addr, VAR_13->tx_mw_size,
       VAR_0, 0);
 if (VAR_13->tx_dma_chan)
  FUNC_9(VAR_13->tx_dma_chan);
 if (VAR_13->rx_dma_chan)
  FUNC_9(VAR_13->rx_dma_chan);
 VAR_11->qp_bitmap_free |= VAR_14;
err:
 return ((void*)0);
}
