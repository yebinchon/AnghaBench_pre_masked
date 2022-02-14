
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; scalar_t__ protocol; int* data; void* csum; } ;
struct pch_gbe_tx_ring {unsigned int next_to_use; unsigned int count; scalar_t__ dma; struct pch_gbe_buffer* buffer_info; } ;
struct pch_gbe_tx_desc {size_t length; size_t tx_words_eob; unsigned int tx_frame_ctrl; int gbec_status; scalar_t__ buffer_addr; } ;
struct pch_gbe_hw {TYPE_2__* reg; } ;
struct pch_gbe_buffer {size_t length; int mapped; scalar_t__ dma; scalar_t__ time_stamp; struct sk_buff* skb; } ;
struct pch_gbe_adapter {int netdev; TYPE_1__* pdev; struct pch_gbe_hw hw; } ;
struct iphdr {scalar_t__ protocol; int daddr; int saddr; } ;
struct TYPE_8__ {void* check; } ;
struct TYPE_7__ {void* check; } ;
struct TYPE_6__ {int TX_DSC_SW_P; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 struct pch_gbe_tx_desc* FUNC_0 (struct pch_gbe_tx_ring,unsigned int) ;
 void* FUNC_1 (int ,int ,scalar_t__,scalar_t__,void*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int *,int*,size_t,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int *) ;
 struct iphdr* FUNC_7 (struct sk_buff*) ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (int*,int*,size_t) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct pch_gbe_adapter*,struct sk_buff*) ;
 void* FUNC_11 (struct sk_buff*,unsigned int,scalar_t__,int ) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 TYPE_4__* FUNC_13 (struct sk_buff*) ;
 TYPE_3__* FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct pch_gbe_adapter *VAR_11,
         struct pch_gbe_tx_ring *VAR_12,
         struct sk_buff *VAR_13)
{
 struct pch_gbe_hw *VAR_14 = &VAR_11->hw;
 struct pch_gbe_tx_desc *VAR_15;
 struct pch_gbe_buffer *VAR_16;
 struct sk_buff *VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;


 VAR_18 = 0;
 if (FUNC_15(VAR_13->len < VAR_7))
  VAR_18 |= VAR_8;
 if (VAR_13->ip_summed == VAR_0)
  VAR_18 |= VAR_9;






 if (VAR_13->len < VAR_7 && VAR_13->ip_summed != VAR_0) {
  VAR_18 |= VAR_8 |
         VAR_9;
  if (VAR_13->protocol == FUNC_5(VAR_4)) {
   struct iphdr *VAR_20 = FUNC_7(VAR_13);
   unsigned int VAR_21;
   VAR_21 = FUNC_12(VAR_13);
   if (VAR_20->protocol == VAR_5) {
    VAR_13->csum = 0;
    FUNC_13(VAR_13)->check = 0;
    VAR_13->csum = FUNC_11(VAR_13, VAR_21,
        VAR_13->len - VAR_21, 0);
    FUNC_13(VAR_13)->check =
     FUNC_1(VAR_20->saddr,
         VAR_20->daddr,
         VAR_13->len - VAR_21,
         VAR_5,
         VAR_13->csum);
   } else if (VAR_20->protocol == VAR_6) {
    VAR_13->csum = 0;
    FUNC_14(VAR_13)->check = 0;
    VAR_13->csum =
     FUNC_11(VAR_13, VAR_21,
           VAR_13->len - VAR_21, 0);
    FUNC_14(VAR_13)->check =
     FUNC_1(VAR_20->saddr,
         VAR_20->daddr,
         VAR_13->len - VAR_21,
         VAR_6,
         VAR_13->csum);
   }
  }
 }

 VAR_19 = VAR_12->next_to_use;
 if (FUNC_15((VAR_19 + 1) == VAR_12->count))
  VAR_12->next_to_use = 0;
 else
  VAR_12->next_to_use = VAR_19 + 1;


 VAR_16 = &VAR_12->buffer_info[VAR_19];
 VAR_17 = VAR_16->skb;


 FUNC_8(VAR_17->data, VAR_13->data, VAR_3);
 VAR_17->data[VAR_3] = 0x00;
 VAR_17->data[VAR_3 + 1] = 0x00;
 VAR_17->len = VAR_13->len;
 FUNC_8(&VAR_17->data[VAR_3 + 2], &VAR_13->data[VAR_3],
        (VAR_13->len - VAR_3));

 VAR_16->length = VAR_17->len;
 VAR_16->dma = FUNC_3(&VAR_11->pdev->dev, VAR_17->data,
       VAR_16->length,
       VAR_1);
 if (FUNC_4(&VAR_11->pdev->dev, VAR_16->dma)) {
  FUNC_9(VAR_11->netdev, "TX DMA map failed\n");
  VAR_16->dma = 0;
  VAR_16->time_stamp = 0;
  VAR_12->next_to_use = VAR_19;
  return;
 }
 VAR_16->mapped = 1;
 VAR_16->time_stamp = VAR_10;


 VAR_15 = FUNC_0(*VAR_12, VAR_19);
 VAR_15->buffer_addr = (VAR_16->dma);
 VAR_15->length = (VAR_17->len);
 VAR_15->tx_words_eob = ((VAR_17->len + 3));
 VAR_15->tx_frame_ctrl = (VAR_18);
 VAR_15->gbec_status = (VAR_2);

 if (FUNC_15(++VAR_19 == VAR_12->count))
  VAR_19 = 0;


 FUNC_6(VAR_12->dma +
    (int)sizeof(struct pch_gbe_tx_desc) * VAR_19,
    &VAR_14->reg->TX_DSC_SW_P);

 FUNC_10(VAR_11, VAR_13);

 FUNC_2(VAR_13);
}
