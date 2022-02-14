
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_rx_ring {unsigned int next_to_use; unsigned int count; scalar_t__ rdt; struct e1000_rx_buffer* buffer_info; } ;
struct e1000_rx_desc {int buffer_addr; } ;
struct TYPE_2__ {int * data; } ;
struct e1000_rx_buffer {scalar_t__ dma; TYPE_1__ rxbuf; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct e1000_adapter {unsigned int rx_buffer_len; int alloc_rx_buff_failed; struct pci_dev* pdev; struct e1000_hw hw; } ;


 int VAR_0 ;
 struct e1000_rx_desc* FUNC_0 (struct e1000_rx_ring,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,void*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,unsigned int,int ) ;
 int FUNC_5 () ;
 void* FUNC_6 (struct e1000_adapter*) ;
 int FUNC_7 (struct e1000_adapter*,void*,unsigned int) ;
 int FUNC_8 (int ,char*,unsigned int,void*) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_1 ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct e1000_adapter *VAR_2,
       struct e1000_rx_ring *VAR_3,
       int VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_2->hw;
 struct pci_dev *VAR_6 = VAR_2->pdev;
 struct e1000_rx_desc *VAR_7;
 struct e1000_rx_buffer *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_2->rx_buffer_len;

 VAR_9 = VAR_3->next_to_use;
 VAR_8 = &VAR_3->buffer_info[VAR_9];

 while (VAR_4--) {
  void *VAR_11;

  if (VAR_8->rxbuf.data)
   goto skip;

  VAR_11 = FUNC_6(VAR_2);
  if (!VAR_11) {

   VAR_2->alloc_rx_buff_failed++;
   break;
  }


  if (!FUNC_7(VAR_2, VAR_11, VAR_10)) {
   void *VAR_12 = VAR_11;
   FUNC_8(VAR_1, "skb align check failed: %u bytes at "
         "%p\n", VAR_10, VAR_11);

   VAR_11 = FUNC_6(VAR_2);

   if (!VAR_11) {
    FUNC_10(VAR_12);
    VAR_2->alloc_rx_buff_failed++;
    break;
   }

   if (!FUNC_7(VAR_2, VAR_11, VAR_10)) {

    FUNC_10(VAR_11);
    FUNC_10(VAR_12);
    VAR_2->alloc_rx_buff_failed++;
    break;
   }


   FUNC_10(VAR_12);
  }
  VAR_8->dma = FUNC_2(&VAR_6->dev,
        VAR_11,
        VAR_2->rx_buffer_len,
        VAR_0);
  if (FUNC_3(&VAR_6->dev, VAR_8->dma)) {
   FUNC_10(VAR_11);
   VAR_8->dma = 0;
   VAR_2->alloc_rx_buff_failed++;
   break;
  }






  if (!FUNC_7(VAR_2,
     (void *)(unsigned long)VAR_8->dma,
     VAR_2->rx_buffer_len)) {
   FUNC_8(VAR_1, "dma align check failed: %u bytes at "
         "%p\n", VAR_2->rx_buffer_len,
         (void *)(unsigned long)VAR_8->dma);

   FUNC_4(&VAR_6->dev, VAR_8->dma,
      VAR_2->rx_buffer_len,
      VAR_0);

   FUNC_10(VAR_11);
   VAR_8->rxbuf.data = ((void*)0);
   VAR_8->dma = 0;

   VAR_2->alloc_rx_buff_failed++;
   break;
  }
  VAR_8->rxbuf.data = VAR_11;
 skip:
  VAR_7 = FUNC_0(*VAR_3, VAR_9);
  VAR_7->buffer_addr = FUNC_1(VAR_8->dma);

  if (FUNC_11(++VAR_9 == VAR_3->count))
   VAR_9 = 0;
  VAR_8 = &VAR_3->buffer_info[VAR_9];
 }

 if (FUNC_9(VAR_3->next_to_use != VAR_9)) {
  VAR_3->next_to_use = VAR_9;
  if (FUNC_11(VAR_9-- == 0))
   VAR_9 = (VAR_3->count - 1);






  FUNC_5();
  FUNC_12(VAR_9, VAR_5->hw_addr + VAR_3->rdt);
 }
}
