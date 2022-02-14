
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_dma_device {unsigned int desc_pool_cnt; int irq; int desc_pool; struct kpc_dma_descriptor* desc_pool_first; } ;
struct kpc_dma_descriptor {int DescNextDescPtr; struct kpc_dma_descriptor* Next; int MyDMAAddr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct kpc_dma_descriptor*,int ) ;
 int FUNC_2 (int ,struct kpc_dma_device*) ;
 int FUNC_3 (struct kpc_dma_device*) ;

void FUNC_4(struct kpc_dma_device *VAR_0)
{
 struct kpc_dma_descriptor *VAR_1;
 dma_addr_t VAR_2;
 unsigned int VAR_3;

 FUNC_3(VAR_0);

 VAR_1 = VAR_0->desc_pool_first;
 VAR_2 = VAR_0->desc_pool_first->MyDMAAddr;

 for (VAR_3 = 0 ; VAR_3 < VAR_0->desc_pool_cnt ; VAR_3++) {
  struct kpc_dma_descriptor *VAR_4 = VAR_1->Next;
  dma_addr_t VAR_5 = VAR_1->DescNextDescPtr;

  FUNC_1(VAR_0->desc_pool, VAR_1, VAR_2);
  VAR_2 = VAR_5;
  VAR_1 = VAR_4;
 }

 FUNC_0(VAR_0->desc_pool);

 FUNC_2(VAR_0->irq, VAR_0);
}
