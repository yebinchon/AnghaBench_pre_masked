
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kpc_dma_device {struct kpc_dma_descriptor* desc_completed; struct kpc_dma_descriptor* desc_next; } ;
struct kpc_dma_descriptor {struct kpc_dma_descriptor* Next; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct kpc_dma_device *VAR_0)
{
 u32 VAR_1 = 0;
 struct kpc_dma_descriptor *VAR_2 = VAR_0->desc_next;

 while (VAR_2 != VAR_0->desc_completed) {
  FUNC_0(VAR_2 == ((void*)0));
  VAR_1++;
  VAR_2 = VAR_2->Next;
 }
 return VAR_1;
}
