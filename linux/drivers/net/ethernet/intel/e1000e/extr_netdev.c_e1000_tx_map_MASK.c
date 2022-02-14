
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct pci_dev {int dev; } ;
struct e1000_ring {unsigned int next_to_use; unsigned int count; struct e1000_buffer* buffer_info; struct e1000_adapter* adapter; } ;
struct e1000_buffer {unsigned int length; unsigned int next_to_watch; int mapped_as_page; unsigned int segs; unsigned int bytecount; scalar_t__ dma; struct sk_buff* skb; void* time_stamp; } ;
struct e1000_adapter {struct pci_dev* pdev; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {scalar_t__ gso_segs; int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct e1000_ring*,struct e1000_buffer*,int) ;
 void* VAR_1 ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (int *,int const*,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_6 (int const*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct e1000_ring *VAR_2, struct sk_buff *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5,
   unsigned int VAR_6)
{
 struct e1000_adapter *VAR_7 = VAR_2->adapter;
 struct pci_dev *VAR_8 = VAR_7->pdev;
 struct e1000_buffer *VAR_9;
 unsigned int VAR_10 = FUNC_7(VAR_3);
 unsigned int VAR_11 = 0, VAR_12, VAR_13 = 0, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;

 VAR_14 = VAR_2->next_to_use;

 while (VAR_10) {
  VAR_9 = &VAR_2->buffer_info[VAR_14];
  VAR_12 = FUNC_4(VAR_10, VAR_5);

  VAR_9->length = VAR_12;
  VAR_9->time_stamp = VAR_1;
  VAR_9->next_to_watch = VAR_14;
  VAR_9->dma = FUNC_1(&VAR_8->dev,
        VAR_3->data + VAR_11,
        VAR_12, VAR_0);
  VAR_9->mapped_as_page = 0;
  if (FUNC_2(&VAR_8->dev, VAR_9->dma))
   goto dma_error;

  VAR_10 -= VAR_12;
  VAR_11 += VAR_12;
  VAR_13++;

  if (VAR_10) {
   VAR_14++;
   if (VAR_14 == VAR_2->count)
    VAR_14 = 0;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  const skb_frag_t *VAR_18 = &FUNC_8(VAR_3)->frags[VAR_15];

  VAR_10 = FUNC_6(VAR_18);
  VAR_11 = 0;

  while (VAR_10) {
   VAR_14++;
   if (VAR_14 == VAR_2->count)
    VAR_14 = 0;

   VAR_9 = &VAR_2->buffer_info[VAR_14];
   VAR_12 = FUNC_4(VAR_10, VAR_5);

   VAR_9->length = VAR_12;
   VAR_9->time_stamp = VAR_1;
   VAR_9->next_to_watch = VAR_14;
   VAR_9->dma = FUNC_5(&VAR_8->dev, VAR_18,
           VAR_11, VAR_12,
           VAR_0);
   VAR_9->mapped_as_page = 1;
   if (FUNC_2(&VAR_8->dev, VAR_9->dma))
    goto dma_error;

   VAR_10 -= VAR_12;
   VAR_11 += VAR_12;
   VAR_13++;
  }
 }

 VAR_17 = FUNC_8(VAR_3)->gso_segs ? : 1;

 VAR_16 = ((VAR_17 - 1) * FUNC_7(VAR_3)) + VAR_3->len;

 VAR_2->buffer_info[VAR_14].skb = VAR_3;
 VAR_2->buffer_info[VAR_14].segs = VAR_17;
 VAR_2->buffer_info[VAR_14].bytecount = VAR_16;
 VAR_2->buffer_info[VAR_4].next_to_watch = VAR_14;

 return VAR_13;

dma_error:
 FUNC_0(&VAR_8->dev, "Tx DMA map failed\n");
 VAR_9->dma = 0;
 if (VAR_13)
  VAR_13--;

 while (VAR_13--) {
  if (VAR_14 == 0)
   VAR_14 += VAR_2->count;
  VAR_14--;
  VAR_9 = &VAR_2->buffer_info[VAR_14];
  FUNC_3(VAR_2, VAR_9, 1);
 }

 return 0;
}
