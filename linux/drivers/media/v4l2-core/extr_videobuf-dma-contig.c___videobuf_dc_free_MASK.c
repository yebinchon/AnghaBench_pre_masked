
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dma_contig_memory {int * vaddr; int dma_handle; int size; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
          struct videobuf_dma_contig_memory *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->size, VAR_1->vaddr, VAR_1->dma_handle);

 VAR_1->vaddr = ((void*)0);
}
