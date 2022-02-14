
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct pci_dev {int dev; } ;
struct ixgb_desc_ring {unsigned int next_to_use; unsigned int count; struct ixgb_buffer* buffer_info; } ;
struct ixgb_buffer {unsigned int length; scalar_t__ dma; int mapped_as_page; unsigned int next_to_watch; struct sk_buff* skb; void* time_stamp; } ;
struct ixgb_adapter {struct pci_dev* pdev; struct ixgb_desc_ring tx_ring; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {unsigned int gso_size; unsigned int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct ixgb_adapter*,struct ixgb_buffer*) ;
 void* VAR_2 ;
 unsigned int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int *,int const*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct ixgb_adapter *VAR_3, struct sk_buff *VAR_4,
     unsigned int VAR_5)
{
 struct ixgb_desc_ring *VAR_6 = &VAR_3->tx_ring;
 struct pci_dev *VAR_7 = VAR_3->pdev;
 struct ixgb_buffer *VAR_8;
 int VAR_9 = FUNC_8(VAR_4);
 unsigned int VAR_10 = 0, VAR_11, VAR_12 = 0, VAR_13;
 unsigned int VAR_14 = FUNC_9(VAR_4)->gso_size;
 unsigned int VAR_15 = FUNC_9(VAR_4)->nr_frags;
 unsigned int VAR_16;

 VAR_13 = VAR_6->next_to_use;

 while (VAR_9) {
  VAR_8 = &VAR_6->buffer_info[VAR_13];
  VAR_11 = FUNC_5(VAR_9, VAR_1);


  if (FUNC_10(VAR_14 && !VAR_15 && VAR_11 == VAR_9 && VAR_11 > 8))
   VAR_11 -= 4;

  VAR_8->length = VAR_11;
  FUNC_0(VAR_8->dma != 0);
  VAR_8->time_stamp = VAR_2;
  VAR_8->mapped_as_page = 0;
  VAR_8->dma = FUNC_2(&VAR_7->dev,
        VAR_4->data + VAR_10,
        VAR_11, VAR_0);
  if (FUNC_3(&VAR_7->dev, VAR_8->dma))
   goto dma_error;
  VAR_8->next_to_watch = 0;

  VAR_9 -= VAR_11;
  VAR_10 += VAR_11;
  VAR_12++;
  if (VAR_9) {
   VAR_13++;
   if (VAR_13 == VAR_6->count)
    VAR_13 = 0;
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  const skb_frag_t *VAR_17 = &FUNC_9(VAR_4)->frags[VAR_16];
  VAR_9 = FUNC_7(VAR_17);
  VAR_10 = 0;

  while (VAR_9) {
   VAR_13++;
   if (VAR_13 == VAR_6->count)
    VAR_13 = 0;

   VAR_8 = &VAR_6->buffer_info[VAR_13];
   VAR_11 = FUNC_5(VAR_9, VAR_1);



   if (FUNC_10(VAR_14 && (VAR_16 == (VAR_15 - 1))
         && VAR_11 == VAR_9 && VAR_11 > 8))
    VAR_11 -= 4;

   VAR_8->length = VAR_11;
   VAR_8->time_stamp = VAR_2;
   VAR_8->mapped_as_page = 1;
   VAR_8->dma =
    FUNC_6(&VAR_7->dev, VAR_17, VAR_10, VAR_11,
       VAR_0);
   if (FUNC_3(&VAR_7->dev, VAR_8->dma))
    goto dma_error;
   VAR_8->next_to_watch = 0;

   VAR_9 -= VAR_11;
   VAR_10 += VAR_11;
   VAR_12++;
  }
 }
 VAR_6->buffer_info[VAR_13].skb = VAR_4;
 VAR_6->buffer_info[VAR_5].next_to_watch = VAR_13;

 return VAR_12;

dma_error:
 FUNC_1(&VAR_7->dev, "TX DMA map failed\n");
 VAR_8->dma = 0;
 if (VAR_12)
  VAR_12--;

 while (VAR_12--) {
  if (VAR_13==0)
   VAR_13 += VAR_6->count;
  VAR_13--;
  VAR_8 = &VAR_6->buffer_info[VAR_13];
  FUNC_4(VAR_3, VAR_8);
 }

 return 0;
}
