
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int addr; } ;
union Vmxnet3_GenericDesc {int * dword; TYPE_3__ rxd; } ;
typedef size_t u32 ;
struct TYPE_7__ {int rx_buf_alloc_failure; } ;
struct vmxnet3_rx_queue {TYPE_2__ stats; struct vmxnet3_cmd_ring* rx_ring; struct vmxnet3_rx_buf_info** buf_info; } ;
struct vmxnet3_rx_buf_info {scalar_t__ buf_type; int len; int dma_addr; int * page; TYPE_4__* skb; } ;
struct vmxnet3_cmd_ring {int next2fill; int gen; scalar_t__ next2comp; union Vmxnet3_GenericDesc* base; } ;
struct vmxnet3_adapter {int netdev; TYPE_1__* pdev; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_4__* FUNC_1 (int ,int,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,int *,int ,int,int ) ;
 int FUNC_7 (int *,int ,int,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*,int,int,scalar_t__) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct vmxnet3_cmd_ring*) ;

__attribute__((used)) static int
FUNC_13(struct vmxnet3_rx_queue *VAR_10, u32 VAR_11,
   int VAR_12, struct vmxnet3_adapter *VAR_13)
{
 int VAR_14 = 0;
 struct vmxnet3_rx_buf_info *VAR_15 = VAR_10->buf_info[VAR_11];
 struct vmxnet3_cmd_ring *VAR_16 = &VAR_10->rx_ring[VAR_11];
 u32 VAR_17;

 while (VAR_14 <= VAR_12) {
  struct vmxnet3_rx_buf_info *VAR_18;
  union Vmxnet3_GenericDesc *VAR_19;

  VAR_18 = VAR_15 + VAR_16->next2fill;
  VAR_19 = VAR_16->base + VAR_16->next2fill;

  if (VAR_18->buf_type == VAR_9) {
   if (VAR_18->skb == ((void*)0)) {
    VAR_18->skb = FUNC_1(VAR_13->netdev,
               VAR_18->len,
               VAR_1);
    if (FUNC_11(VAR_18->skb == ((void*)0))) {
     VAR_10->stats.rx_buf_alloc_failure++;
     break;
    }

    VAR_18->dma_addr = FUNC_7(
      &VAR_13->pdev->dev,
      VAR_18->skb->data, VAR_18->len,
      VAR_3);
    if (FUNC_8(&VAR_13->pdev->dev,
            VAR_18->dma_addr)) {
     FUNC_5(VAR_18->skb);
     VAR_10->stats.rx_buf_alloc_failure++;
     break;
    }
   } else {

   }
   VAR_17 = VAR_5 << VAR_6;
  } else {
   FUNC_0(VAR_18->buf_type != VAR_8 ||
          VAR_18->len != VAR_2);

   if (VAR_18->page == ((void*)0)) {
    VAR_18->page = FUNC_2(VAR_0);
    if (FUNC_11(VAR_18->page == ((void*)0))) {
     VAR_10->stats.rx_buf_alloc_failure++;
     break;
    }
    VAR_18->dma_addr = FUNC_6(
      &VAR_13->pdev->dev,
      VAR_18->page, 0, VAR_2,
      VAR_3);
    if (FUNC_8(&VAR_13->pdev->dev,
            VAR_18->dma_addr)) {
     FUNC_10(VAR_18->page);
     VAR_10->stats.rx_buf_alloc_failure++;
     break;
    }
   } else {

   }
   VAR_17 = VAR_4 << VAR_6;
  }

  VAR_19->rxd.addr = FUNC_4(VAR_18->dma_addr);
  VAR_19->dword[2] = FUNC_3((!VAR_16->gen << VAR_7)
        | VAR_17 | VAR_18->len);



  if (VAR_14 == VAR_12)
   break;

  VAR_19->dword[2] |= FUNC_3(VAR_16->gen << VAR_7);
  VAR_14++;
  FUNC_12(VAR_16);
 }

 FUNC_9(VAR_13->netdev,
  "alloc_rx_buf: %d allocated, next2fill %u, next2comp %u\n",
  VAR_14, VAR_16->next2fill, VAR_16->next2comp);


 FUNC_0(VAR_14 != 0 && VAR_16->next2fill == VAR_16->next2comp);

 return VAR_14;
}
