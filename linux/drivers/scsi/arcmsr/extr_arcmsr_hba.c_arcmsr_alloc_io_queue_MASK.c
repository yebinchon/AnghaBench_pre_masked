
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_dev {int dev; } ;
struct deliver_completeQ {int dummy; } ;
struct MessageUnit_D {int dummy; } ;
struct MessageUnit_B {int dummy; } ;
struct AdapterControlBlock {int adapter_type; int ioqueue_size; int completionQ_entry; int doneq_index; void* pCompletionQ; void* dma_coherent2; void* dma_coherent_handle2; TYPE_1__* host; struct MessageUnit_D* pmuD; struct MessageUnit_B* pmuB; struct pci_dev* pdev; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int host_no; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 void* FUNC_2 (int *,int,void**,int ) ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int,int) ;

__attribute__((used)) static bool FUNC_5(struct AdapterControlBlock *VAR_2)
{
 bool VAR_3 = 1;
 void *VAR_4;
 dma_addr_t VAR_5;
 struct pci_dev *VAR_6 = VAR_2->pdev;

 switch (VAR_2->adapter_type) {
 case 130: {
  VAR_2->ioqueue_size = FUNC_4(sizeof(struct MessageUnit_B), 32);
  VAR_4 = FUNC_2(&VAR_6->dev, VAR_2->ioqueue_size,
   &VAR_5, VAR_1);
  if (!VAR_4) {
   FUNC_3("arcmsr%d: DMA allocation failed\n", VAR_2->host->host_no);
   return 0;
  }
  VAR_2->dma_coherent_handle2 = VAR_5;
  VAR_2->dma_coherent2 = VAR_4;
  VAR_2->pmuB = (struct MessageUnit_B *)VAR_4;
  FUNC_0(VAR_2);
  }
  break;
 case 129: {
  VAR_2->ioqueue_size = FUNC_4(sizeof(struct MessageUnit_D), 32);
  VAR_4 = FUNC_2(&VAR_6->dev, VAR_2->ioqueue_size,
   &VAR_5, VAR_1);
  if (!VAR_4) {
   FUNC_3("arcmsr%d: DMA allocation failed\n", VAR_2->host->host_no);
   return 0;
  }
  VAR_2->dma_coherent_handle2 = VAR_5;
  VAR_2->dma_coherent2 = VAR_4;
  VAR_2->pmuD = (struct MessageUnit_D *)VAR_4;
  FUNC_1(VAR_2);
  }
  break;
 case 128: {
  uint32_t VAR_7;
  VAR_7 = sizeof(struct deliver_completeQ) * VAR_0 + 128;
  VAR_2->ioqueue_size = FUNC_4(VAR_7, 32);
  VAR_4 = FUNC_2(&VAR_6->dev, VAR_2->ioqueue_size,
   &VAR_5, VAR_1);
  if (!VAR_4){
   FUNC_3("arcmsr%d: DMA allocation failed\n", VAR_2->host->host_no);
   return 0;
  }
  VAR_2->dma_coherent_handle2 = VAR_5;
  VAR_2->dma_coherent2 = VAR_4;
  VAR_2->pCompletionQ = VAR_4;
  VAR_2->completionQ_entry = VAR_2->ioqueue_size / sizeof(struct deliver_completeQ);
  VAR_2->doneq_index = 0;
  }
  break;
 default:
  break;
 }
 return VAR_3;
}
