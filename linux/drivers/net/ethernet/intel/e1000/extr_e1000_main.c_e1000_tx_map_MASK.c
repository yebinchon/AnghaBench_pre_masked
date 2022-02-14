
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int data; unsigned int len; int data_len; } ;
struct pci_dev {int dev; } ;
struct e1000_tx_ring {unsigned int next_to_use; int last_tx_tso; unsigned int count; struct e1000_tx_buffer* buffer_info; } ;
struct e1000_tx_buffer {unsigned int length; int mapped_as_page; unsigned int next_to_watch; unsigned int segs; unsigned int bytecount; scalar_t__ dma; struct sk_buff* skb; void* time_stamp; } ;
struct e1000_hw {scalar_t__ bus_type; } ;
struct e1000_adapter {scalar_t__ pcix_82544; struct pci_dev* pdev; struct e1000_hw hw; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {scalar_t__ gso_segs; int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct e1000_adapter*,struct e1000_tx_buffer*) ;
 void* VAR_2 ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int const*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (int const*) ;
 unsigned int FUNC_8 (int const*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct e1000_adapter *VAR_3,
   struct e1000_tx_ring *VAR_4,
   struct sk_buff *VAR_5, unsigned int VAR_6,
   unsigned int VAR_7, unsigned int VAR_8,
   unsigned int VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_3->hw;
 struct pci_dev *VAR_11 = VAR_3->pdev;
 struct e1000_tx_buffer *VAR_12;
 unsigned int VAR_13 = FUNC_9(VAR_5);
 unsigned int VAR_14 = 0, VAR_15, VAR_16 = 0, VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20;

 VAR_17 = VAR_4->next_to_use;

 while (VAR_13) {
  VAR_12 = &VAR_4->buffer_info[VAR_17];
  VAR_15 = FUNC_4(VAR_13, VAR_7);





  if (!VAR_5->data_len && VAR_4->last_tx_tso &&
      !FUNC_10(VAR_5)) {
   VAR_4->last_tx_tso = 0;
   VAR_15 -= 4;
  }




  if (FUNC_12(VAR_9 && !VAR_8 && VAR_15 == VAR_13 && VAR_15 > 8))
   VAR_15 -= 4;





  if (FUNC_12((VAR_10->bus_type == VAR_1) &&
        (VAR_15 > 2015) && VAR_16 == 0))
   VAR_15 = 2015;




  if (FUNC_12(VAR_3->pcix_82544 &&
     !((unsigned long)(VAR_5->data + VAR_14 + VAR_15 - 1) & 4) &&
     VAR_15 > 4))
   VAR_15 -= 4;

  VAR_12->length = VAR_15;

  VAR_12->time_stamp = VAR_2;
  VAR_12->mapped_as_page = 0;
  VAR_12->dma = FUNC_1(&VAR_11->dev,
        VAR_5->data + VAR_14,
        VAR_15, VAR_0);
  if (FUNC_2(&VAR_11->dev, VAR_12->dma))
   goto dma_error;
  VAR_12->next_to_watch = VAR_17;

  VAR_13 -= VAR_15;
  VAR_14 += VAR_15;
  VAR_16++;
  if (VAR_13) {
   VAR_17++;
   if (FUNC_12(VAR_17 == VAR_4->count))
    VAR_17 = 0;
  }
 }

 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  const skb_frag_t *VAR_21 = &FUNC_11(VAR_5)->frags[VAR_18];

  VAR_13 = FUNC_8(VAR_21);
  VAR_14 = 0;

  while (VAR_13) {
   unsigned long VAR_22;
   VAR_17++;
   if (FUNC_12(VAR_17 == VAR_4->count))
    VAR_17 = 0;

   VAR_12 = &VAR_4->buffer_info[VAR_17];
   VAR_15 = FUNC_4(VAR_13, VAR_7);



   if (FUNC_12(VAR_9 && VAR_18 == (VAR_8-1) &&
       VAR_15 == VAR_13 && VAR_15 > 8))
    VAR_15 -= 4;




   VAR_22 = (unsigned long)
    FUNC_5(FUNC_7(VAR_21));
   VAR_22 += VAR_14 + VAR_15 - 1;
   if (FUNC_12(VAR_3->pcix_82544 &&
         !(VAR_22 & 4) &&
         VAR_15 > 4))
    VAR_15 -= 4;

   VAR_12->length = VAR_15;
   VAR_12->time_stamp = VAR_2;
   VAR_12->mapped_as_page = 1;
   VAR_12->dma = FUNC_6(&VAR_11->dev, VAR_21,
      VAR_14, VAR_15, VAR_0);
   if (FUNC_2(&VAR_11->dev, VAR_12->dma))
    goto dma_error;
   VAR_12->next_to_watch = VAR_17;

   VAR_13 -= VAR_15;
   VAR_14 += VAR_15;
   VAR_16++;
  }
 }

 VAR_20 = FUNC_11(VAR_5)->gso_segs ?: 1;

 VAR_19 = ((VAR_20 - 1) * FUNC_9(VAR_5)) + VAR_5->len;

 VAR_4->buffer_info[VAR_17].skb = VAR_5;
 VAR_4->buffer_info[VAR_17].segs = VAR_20;
 VAR_4->buffer_info[VAR_17].bytecount = VAR_19;
 VAR_4->buffer_info[VAR_6].next_to_watch = VAR_17;

 return VAR_16;

dma_error:
 FUNC_0(&VAR_11->dev, "TX DMA map failed\n");
 VAR_12->dma = 0;
 if (VAR_16)
  VAR_16--;

 while (VAR_16--) {
  if (VAR_17 == 0)
   VAR_17 += VAR_4->count;
  VAR_17--;
  VAR_12 = &VAR_4->buffer_info[VAR_17];
  FUNC_3(VAR_3, VAR_12);
 }

 return 0;
}
