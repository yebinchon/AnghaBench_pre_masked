
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ data; } ;
struct macb_tx_skb {unsigned int size; int mapped_as_page; void* mapping; struct sk_buff* skb; } ;
struct macb_queue {unsigned int tx_head; struct macb_tx_skb* tx_skb; } ;
struct macb_dma_desc {scalar_t__ ctrl; } ;
struct macb {int tx_ring_size; TYPE_3__* dev; TYPE_1__* pdev; int max_tx_length; } ;
typedef int skb_frag_t ;
typedef void* dma_addr_t ;
struct TYPE_8__ {scalar_t__ protocol; } ;
struct TYPE_7__ {int features; } ;
struct TYPE_6__ {unsigned int nr_frags; unsigned int gso_size; int * frags; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_2 (int *,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct macb*,struct macb_dma_desc*,void*) ;
 struct macb_dma_desc* FUNC_6 (struct macb_queue*,unsigned int) ;
 unsigned int FUNC_7 (struct macb*,unsigned int) ;
 struct macb_tx_skb* FUNC_8 (struct macb_queue*,unsigned int) ;
 int FUNC_9 (struct macb*,struct macb_tx_skb*) ;
 unsigned int FUNC_10 (unsigned int,int ) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 void* FUNC_12 (int *,int const*,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_13 (int const*) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 TYPE_2__* FUNC_15 (struct sk_buff*) ;
 unsigned int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 () ;

__attribute__((used)) static unsigned int FUNC_19(struct macb *VAR_14,
    struct macb_queue *VAR_15,
    struct sk_buff *VAR_16,
    unsigned int VAR_17)
{
 dma_addr_t VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22 = VAR_15->tx_head;
 struct macb_tx_skb *VAR_23 = ((void*)0);
 struct macb_dma_desc *VAR_24;
 unsigned int VAR_25, VAR_26, VAR_27 = 0;
 unsigned int VAR_28, VAR_29 = FUNC_15(VAR_16)->nr_frags;
 unsigned int VAR_30 = 1, VAR_31 = 0;
 u32 VAR_32, VAR_33 = 0, VAR_34 = 0;


 if (FUNC_15(VAR_16)->gso_size != 0) {
  if (FUNC_4(VAR_16)->protocol == VAR_3)

   VAR_33 = VAR_5;
  else

   VAR_33 = VAR_4;
 }


 VAR_19 = FUNC_14(VAR_16);


 VAR_26 = VAR_17;

 VAR_25 = 0;
 while (VAR_19) {
  VAR_20 = FUNC_7(VAR_14, VAR_22);
  VAR_23 = &VAR_15->tx_skb[VAR_20];

  VAR_18 = FUNC_2(&VAR_14->pdev->dev,
      VAR_16->data + VAR_25,
      VAR_26, VAR_1);
  if (FUNC_3(&VAR_14->pdev->dev, VAR_18))
   goto dma_error;


  VAR_23->skb = ((void*)0);
  VAR_23->mapping = VAR_18;
  VAR_23->size = VAR_26;
  VAR_23->mapped_as_page = 0;

  VAR_19 -= VAR_26;
  VAR_25 += VAR_26;
  VAR_27++;
  VAR_22++;

  VAR_26 = FUNC_10(VAR_19, VAR_14->max_tx_length);
 }


 for (VAR_28 = 0; VAR_28 < VAR_29; VAR_28++) {
  const skb_frag_t *VAR_35 = &FUNC_15(VAR_16)->frags[VAR_28];

  VAR_19 = FUNC_13(VAR_35);
  VAR_25 = 0;
  while (VAR_19) {
   VAR_26 = FUNC_10(VAR_19, VAR_14->max_tx_length);
   VAR_20 = FUNC_7(VAR_14, VAR_22);
   VAR_23 = &VAR_15->tx_skb[VAR_20];

   VAR_18 = FUNC_12(&VAR_14->pdev->dev, VAR_35,
         VAR_25, VAR_26, VAR_1);
   if (FUNC_3(&VAR_14->pdev->dev, VAR_18))
    goto dma_error;


   VAR_23->skb = ((void*)0);
   VAR_23->mapping = VAR_18;
   VAR_23->size = VAR_26;
   VAR_23->mapped_as_page = 1;

   VAR_19 -= VAR_26;
   VAR_25 += VAR_26;
   VAR_27++;
   VAR_22++;
  }
 }


 if (FUNC_17(!VAR_23)) {
  FUNC_11(VAR_14->dev, "BUG! empty skb!\n");
  return 0;
 }


 VAR_23->skb = VAR_16;
 VAR_21 = VAR_22;
 VAR_20 = FUNC_7(VAR_14, VAR_21);
 VAR_32 = FUNC_1(VAR_12);
 VAR_24 = FUNC_6(VAR_15, VAR_20);
 VAR_24->ctrl = VAR_32;

 if (VAR_33) {
  if (VAR_33 == VAR_5)

   VAR_31 = FUNC_15(VAR_16)->gso_size +
     FUNC_16(VAR_16) +
     VAR_2;
  else {
   VAR_31 = FUNC_15(VAR_16)->gso_size;



   VAR_34 = 0;
  }
 }

 do {
  VAR_21--;
  VAR_20 = FUNC_7(VAR_14, VAR_21);
  VAR_23 = &VAR_15->tx_skb[VAR_20];
  VAR_24 = FUNC_6(VAR_15, VAR_20);

  VAR_32 = (u32)VAR_23->size;
  if (VAR_30) {
   VAR_32 |= FUNC_1(VAR_8);
   VAR_30 = 0;
  }
  if (FUNC_17(VAR_20 == (VAR_14->tx_ring_size - 1)))
   VAR_32 |= FUNC_1(VAR_13);


  if (VAR_21 == VAR_15->tx_head) {
   VAR_32 |= FUNC_0(VAR_9, VAR_33);
   VAR_32 |= FUNC_0(VAR_11, VAR_34);
   if ((VAR_14->dev->features & VAR_7) &&
       VAR_16->ip_summed != VAR_0 && !VAR_33)
    VAR_32 |= FUNC_1(VAR_10);
  } else



   VAR_32 |= FUNC_0(VAR_6, VAR_31);


  FUNC_5(VAR_14, VAR_24, VAR_23->mapping);



  FUNC_18();
  VAR_24->ctrl = VAR_32;
 } while (VAR_21 != VAR_15->tx_head);

 VAR_15->tx_head = VAR_22;

 return VAR_27;

dma_error:
 FUNC_11(VAR_14->dev, "TX DMA map failed\n");

 for (VAR_21 = VAR_15->tx_head; VAR_21 != VAR_22; VAR_21++) {
  VAR_23 = FUNC_8(VAR_15, VAR_21);

  FUNC_9(VAR_14, VAR_23);
 }

 return 0;
}
