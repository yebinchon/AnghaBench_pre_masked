
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_dma_contig_memory {unsigned long size; int vaddr; int dma_handle; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,unsigned long) ;
 int FUNC_1 (struct device*,char*,unsigned long) ;
 int FUNC_2 (struct device*,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
          struct videobuf_dma_contig_memory *VAR_2,
          unsigned long VAR_3, gfp_t VAR_4)
{
 VAR_2->size = VAR_3;
 VAR_2->vaddr = FUNC_2(VAR_1, VAR_2->size,
     &VAR_2->dma_handle, VAR_4);

 if (!VAR_2->vaddr) {
  FUNC_1(VAR_1, "memory alloc size %ld failed\n", VAR_2->size);
  return -VAR_0;
 }

 FUNC_0(VAR_1, "dma mapped data is at %p (%ld)\n", VAR_2->vaddr, VAR_2->size);

 return 0;
}
