
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct e1000_tx_ring {int count; int size; void* desc; scalar_t__ next_to_clean; scalar_t__ next_to_use; int buffer_info; int dma; } ;
struct e1000_tx_desc {int dummy; } ;
struct e1000_tx_buffer {int dummy; } ;
struct e1000_adapter {struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,void*,int ) ;
 int FUNC_3 (struct e1000_adapter*,void*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (void*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct e1000_adapter *VAR_4,
        struct e1000_tx_ring *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->pdev;
 int VAR_7;

 VAR_7 = sizeof(struct e1000_tx_buffer) * VAR_5->count;
 VAR_5->buffer_info = FUNC_7(VAR_7);
 if (!VAR_5->buffer_info)
  return -VAR_0;



 VAR_5->size = VAR_5->count * sizeof(struct e1000_tx_desc);
 VAR_5->size = FUNC_0(VAR_5->size, 4096);

 VAR_5->desc = FUNC_1(&VAR_6->dev, VAR_5->size, &VAR_5->dma,
     VAR_1);
 if (!VAR_5->desc) {
setup_tx_desc_die:
  FUNC_6(VAR_5->buffer_info);
  return -VAR_0;
 }


 if (!FUNC_3(VAR_4, VAR_5->desc, VAR_5->size)) {
  void *VAR_8 = VAR_5->desc;
  dma_addr_t VAR_9 = VAR_5->dma;
  FUNC_4(VAR_3, "txdr align check failed: %u bytes at %p\n",
        VAR_5->size, VAR_5->desc);

  VAR_5->desc = FUNC_1(&VAR_6->dev, VAR_5->size,
      &VAR_5->dma, VAR_1);

  if (!VAR_5->desc) {
   FUNC_2(&VAR_6->dev, VAR_5->size, VAR_8,
       VAR_9);
   goto setup_tx_desc_die;
  }

  if (!FUNC_3(VAR_4, VAR_5->desc, VAR_5->size)) {

   FUNC_2(&VAR_6->dev, VAR_5->size, VAR_5->desc,
       VAR_5->dma);
   FUNC_2(&VAR_6->dev, VAR_5->size, VAR_8,
       VAR_9);
   FUNC_4(VAR_2, "Unable to allocate aligned memory "
         "for the transmit descriptor ring\n");
   FUNC_6(VAR_5->buffer_info);
   return -VAR_0;
  } else {

   FUNC_2(&VAR_6->dev, VAR_5->size, VAR_8,
       VAR_9);
  }
 }
 FUNC_5(VAR_5->desc, 0, VAR_5->size);

 VAR_5->next_to_use = 0;
 VAR_5->next_to_clean = 0;

 return 0;
}
