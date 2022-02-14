
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct brcmf_pub {TYPE_2__* bus_if; TYPE_1__* proto; } ;
struct brcmf_msgbuf {int ioctbuf_phys_hi; int ioctbuf_phys_lo; scalar_t__ max_flowrings; scalar_t__ max_rxbufpost; scalar_t__ rxbufpost; scalar_t__ ioctbuf_handle; scalar_t__ ioctbuf; struct brcmf_msgbuf* flowring_dma_handle; struct brcmf_msgbuf* txstatus_done_map; struct brcmf_msgbuf* flow_map; int work_queue; int flowring_work_lock; int flowring_work; int max_ioctlrespbuf; int max_eventbuf; int flow; void* rx_pktids; void* tx_pktids; int rx_dataoffset; struct brcmf_commonring** flowrings; struct brcmf_commonring** commonrings; int ioctl_resp_wait; struct brcmf_pub* drvr; int txflow_work; int * txflow_wq; } ;
struct brcmf_commonring {int dummy; } ;
struct brcmf_bus_msgbuf {scalar_t__ max_flowrings; scalar_t__ max_rxbufpost; int rx_dataoffset; scalar_t__ flowrings; scalar_t__ commonrings; } ;
struct TYPE_4__ {int dev; struct brcmf_bus_msgbuf* msgbuf; } ;
struct TYPE_3__ {struct brcmf_msgbuf* pd; int debugfs_create; int rxreorder; int add_tdls_peer; int delete_peer; int configure_addr_mode; int tx_queue_data; int set_dcmd; int query_dcmd; int hdrpull; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct brcmf_pub*,char*,...) ;
 int FUNC_4 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_6 (int ,int ) ;
 int VAR_17 ;
 int FUNC_7 (struct brcmf_msgbuf*) ;
 int FUNC_8 (struct brcmf_msgbuf*) ;
 int FUNC_9 (struct brcmf_msgbuf*) ;
 int FUNC_10 (struct brcmf_msgbuf*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int ,int ,scalar_t__*,int ) ;
 int FUNC_13 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (int *) ;
 struct brcmf_msgbuf* FUNC_15 (scalar_t__,int,int ) ;
 int FUNC_16 (struct brcmf_msgbuf*) ;
 void* FUNC_17 (int,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct brcmf_pub *VAR_22)
{
 struct brcmf_bus_msgbuf *VAR_23;
 struct brcmf_msgbuf *VAR_24;
 u64 VAR_25;
 u32 VAR_26;

 VAR_23 = VAR_22->bus_if->msgbuf;

 if (VAR_23->max_flowrings >= VAR_0) {
  FUNC_3(VAR_22, "driver not configured for this many flowrings %d\n",
    VAR_23->max_flowrings);
  VAR_23->max_flowrings = VAR_0 - 1;
 }

 VAR_24 = FUNC_17(sizeof(*VAR_24), VAR_7);
 if (!VAR_24)
  goto fail;

 VAR_24->txflow_wq = FUNC_11("msgbuf_txflow");
 if (VAR_24->txflow_wq == ((void*)0)) {
  FUNC_3(VAR_22, "workqueue creation failed\n");
  goto fail;
 }
 FUNC_2(&VAR_24->txflow_work, VAR_21);
 VAR_26 = FUNC_0(VAR_23->max_flowrings);
 VAR_26 = VAR_26 * sizeof(unsigned long);
 VAR_24->flow_map = FUNC_17(VAR_26, VAR_7);
 if (!VAR_24->flow_map)
  goto fail;

 VAR_24->txstatus_done_map = FUNC_17(VAR_26, VAR_7);
 if (!VAR_24->txstatus_done_map)
  goto fail;

 VAR_24->drvr = VAR_22;
 VAR_24->ioctbuf = FUNC_12(VAR_22->bus_if->dev,
          VAR_3,
          &VAR_24->ioctbuf_handle,
          VAR_7);
 if (!VAR_24->ioctbuf)
  goto fail;
 VAR_25 = (u64)VAR_24->ioctbuf_handle;
 VAR_24->ioctbuf_phys_hi = VAR_25 >> 32;
 VAR_24->ioctbuf_phys_lo = VAR_25 & 0xffffffff;

 VAR_22->proto->hdrpull = VAR_16;
 VAR_22->proto->query_dcmd = VAR_17;
 VAR_22->proto->set_dcmd = VAR_19;
 VAR_22->proto->tx_queue_data = VAR_20;
 VAR_22->proto->configure_addr_mode = VAR_12;
 VAR_22->proto->delete_peer = VAR_14;
 VAR_22->proto->add_tdls_peer = VAR_11;
 VAR_22->proto->rxreorder = VAR_18;
 VAR_22->proto->debugfs_create = VAR_13;
 VAR_22->proto->pd = VAR_24;

 FUNC_14(&VAR_24->ioctl_resp_wait);

 VAR_24->commonrings =
  (struct brcmf_commonring **)VAR_23->commonrings;
 VAR_24->flowrings = (struct brcmf_commonring **)VAR_23->flowrings;
 VAR_24->max_flowrings = VAR_23->max_flowrings;
 VAR_24->flowring_dma_handle =
  FUNC_15(VAR_24->max_flowrings,
   sizeof(*VAR_24->flowring_dma_handle), VAR_7);
 if (!VAR_24->flowring_dma_handle)
  goto fail;

 VAR_24->rx_dataoffset = VAR_23->rx_dataoffset;
 VAR_24->max_rxbufpost = VAR_23->max_rxbufpost;

 VAR_24->max_ioctlrespbuf = VAR_2;
 VAR_24->max_eventbuf = VAR_1;

 VAR_24->tx_pktids = FUNC_6(VAR_10,
           VAR_5);
 if (!VAR_24->tx_pktids)
  goto fail;
 VAR_24->rx_pktids = FUNC_6(VAR_9,
           VAR_4);
 if (!VAR_24->rx_pktids)
  goto fail;

 VAR_24->flow = FUNC_5(VAR_22->bus_if->dev,
          VAR_23->max_flowrings);
 if (!VAR_24->flow)
  goto fail;


 FUNC_4(VAR_8, "Feeding buffers, rx data %d, rx event %d, rx ioctl resp %d\n",
    VAR_24->max_rxbufpost, VAR_24->max_eventbuf,
    VAR_24->max_ioctlrespbuf);
 VAR_26 = 0;
 do {
  FUNC_8(VAR_24);
  if (VAR_24->max_rxbufpost != VAR_24->rxbufpost)
   FUNC_18(10);
  else
   break;
  VAR_26++;
 } while (VAR_26 < 10);
 FUNC_9(VAR_24);
 FUNC_10(VAR_24);

 FUNC_2(&VAR_24->flowring_work, VAR_15);
 FUNC_19(&VAR_24->flowring_work_lock);
 FUNC_1(&VAR_24->work_queue);

 return 0;

fail:
 if (VAR_24) {
  FUNC_16(VAR_24->flow_map);
  FUNC_16(VAR_24->txstatus_done_map);
  FUNC_7(VAR_24);
  FUNC_16(VAR_24->flowring_dma_handle);
  if (VAR_24->ioctbuf)
   FUNC_13(VAR_22->bus_if->dev,
       VAR_3,
       VAR_24->ioctbuf,
       VAR_24->ioctbuf_handle);
  FUNC_16(VAR_24);
 }
 return -VAR_6;
}
