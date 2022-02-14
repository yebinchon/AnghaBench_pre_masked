
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int gen; void* addr; } ;
union Vmxnet3_GenericDesc {void** dword; TYPE_3__ txd; } ;
typedef int u32 ;
struct TYPE_9__ {int gen; int next2fill; union Vmxnet3_GenericDesc* base; } ;
struct TYPE_6__ {scalar_t__ basePA; } ;
struct vmxnet3_tx_queue {int txdata_desc_size; TYPE_4__ tx_ring; struct vmxnet3_tx_buf_info* buf_info; TYPE_1__ data_ring; } ;
struct vmxnet3_tx_ctx {int copy_size; union Vmxnet3_GenericDesc* sop_txd; union Vmxnet3_GenericDesc* eop_txd; } ;
struct vmxnet3_tx_buf_info {int len; int sop_idx; struct sk_buff* skb; scalar_t__ dma_addr; int map_type; } ;
struct vmxnet3_adapter {int netdev; TYPE_2__* pdev; } ;
struct sk_buff {scalar_t__ data; } ;
struct pci_dev {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_10__ {int nr_frags; int * frags; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,char*,int,int ,void*,void*) ;
 scalar_t__ FUNC_8 (int *,int const*,unsigned long,int,int ) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_5__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_13(struct sk_buff *VAR_8, struct vmxnet3_tx_ctx *VAR_9,
  struct vmxnet3_tx_queue *VAR_10, struct pci_dev *VAR_11,
  struct vmxnet3_adapter *VAR_12)
{
 u32 VAR_13, VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 union Vmxnet3_GenericDesc *VAR_17;
 struct vmxnet3_tx_buf_info *VAR_18 = ((void*)0);

 FUNC_0(VAR_9->copy_size > FUNC_10(VAR_8));


 VAR_13 = (VAR_10->tx_ring.gen ^ 0x1) << VAR_7;

 VAR_9->sop_txd = VAR_10->tx_ring.base + VAR_10->tx_ring.next2fill;
 VAR_17 = VAR_9->sop_txd;


 if (VAR_9->copy_size) {
  VAR_9->sop_txd->txd.addr = FUNC_2(VAR_10->data_ring.basePA +
     VAR_10->tx_ring.next2fill *
     VAR_10->txdata_desc_size);
  VAR_9->sop_txd->dword[2] = FUNC_1(VAR_13 | VAR_9->copy_size);
  VAR_9->sop_txd->dword[3] = 0;

  VAR_18 = VAR_10->buf_info + VAR_10->tx_ring.next2fill;
  VAR_18->map_type = VAR_3;

  FUNC_7(VAR_12->netdev,
   "txd[%u]: 0x%Lx 0x%x 0x%x\n",
   VAR_10->tx_ring.next2fill,
   FUNC_6(VAR_9->sop_txd->txd.addr),
   VAR_9->sop_txd->dword[2], VAR_9->sop_txd->dword[3]);
  FUNC_12(&VAR_10->tx_ring);


  VAR_13 = VAR_10->tx_ring.gen << VAR_7;
 }


 VAR_14 = FUNC_10(VAR_8) - VAR_9->copy_size;
 VAR_15 = VAR_9->copy_size;
 while (VAR_14) {
  u32 VAR_19;

  if (VAR_14 < VAR_6) {
   VAR_19 = VAR_14;
   VAR_13 |= VAR_14;
  } else {
   VAR_19 = VAR_6;

  }

  VAR_18 = VAR_10->buf_info + VAR_10->tx_ring.next2fill;
  VAR_18->map_type = VAR_5;
  VAR_18->dma_addr = FUNC_3(&VAR_12->pdev->dev,
    VAR_8->data + VAR_15, VAR_19,
    VAR_2);
  if (FUNC_4(&VAR_12->pdev->dev, VAR_18->dma_addr))
   return -VAR_1;

  VAR_18->len = VAR_19;

  VAR_17 = VAR_10->tx_ring.base + VAR_10->tx_ring.next2fill;
  FUNC_0(VAR_17->txd.gen == VAR_10->tx_ring.gen);

  VAR_17->txd.addr = FUNC_2(VAR_18->dma_addr);
  VAR_17->dword[2] = FUNC_1(VAR_13);
  VAR_17->dword[3] = 0;

  FUNC_7(VAR_12->netdev,
   "txd[%u]: 0x%Lx 0x%x 0x%x\n",
   VAR_10->tx_ring.next2fill, FUNC_6(VAR_17->txd.addr),
   FUNC_5(VAR_17->dword[2]), VAR_17->dword[3]);
  FUNC_12(&VAR_10->tx_ring);
  VAR_13 = VAR_10->tx_ring.gen << VAR_7;

  VAR_14 -= VAR_19;
  VAR_15 += VAR_19;
 }

 for (VAR_16 = 0; VAR_16 < FUNC_11(VAR_8)->nr_frags; VAR_16++) {
  const skb_frag_t *VAR_20 = &FUNC_11(VAR_8)->frags[VAR_16];
  u32 VAR_21;

  VAR_15 = 0;
  VAR_14 = FUNC_9(VAR_20);
  while (VAR_14) {
   VAR_18 = VAR_10->buf_info + VAR_10->tx_ring.next2fill;
   if (VAR_14 < VAR_6) {
    VAR_21 = VAR_14;
    VAR_13 |= VAR_14;
   } else {
    VAR_21 = VAR_6;

   }
   VAR_18->map_type = VAR_4;
   VAR_18->dma_addr = FUNC_8(&VAR_12->pdev->dev, VAR_20,
        VAR_15, VAR_21,
        VAR_0);
   if (FUNC_4(&VAR_12->pdev->dev, VAR_18->dma_addr))
    return -VAR_1;

   VAR_18->len = VAR_21;

   VAR_17 = VAR_10->tx_ring.base + VAR_10->tx_ring.next2fill;
   FUNC_0(VAR_17->txd.gen == VAR_10->tx_ring.gen);

   VAR_17->txd.addr = FUNC_2(VAR_18->dma_addr);
   VAR_17->dword[2] = FUNC_1(VAR_13);
   VAR_17->dword[3] = 0;

   FUNC_7(VAR_12->netdev,
    "txd[%u]: 0x%llx %u %u\n",
    VAR_10->tx_ring.next2fill, FUNC_6(VAR_17->txd.addr),
    FUNC_5(VAR_17->dword[2]), VAR_17->dword[3]);
   FUNC_12(&VAR_10->tx_ring);
   VAR_13 = VAR_10->tx_ring.gen << VAR_7;

   VAR_14 -= VAR_21;
   VAR_15 += VAR_21;
  }
 }

 VAR_9->eop_txd = VAR_17;


 VAR_18->skb = VAR_8;
 VAR_18->sop_idx = VAR_9->sop_txd - VAR_10->tx_ring.base;

 return 0;
}
