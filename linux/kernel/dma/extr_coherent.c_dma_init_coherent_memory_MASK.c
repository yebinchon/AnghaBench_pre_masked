
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int size; int spinlock; int pfn_base; int device_base; void* virt_base; void* bitmap; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dma_coherent_mem*) ;
 void* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ,size_t,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(phys_addr_t VAR_5,
  dma_addr_t VAR_6, size_t VAR_7,
  struct dma_coherent_mem **VAR_8)
{
 struct dma_coherent_mem *VAR_9 = ((void*)0);
 void *VAR_10 = ((void*)0);
 int VAR_11 = VAR_7 >> VAR_4;
 int VAR_12 = FUNC_0(VAR_11) * sizeof(long);
 int VAR_13;

 if (!VAR_7) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_5, VAR_7, VAR_3);
 if (!VAR_10) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_9 = FUNC_3(sizeof(struct dma_coherent_mem), VAR_2);
 if (!VAR_9) {
  VAR_13 = -VAR_1;
  goto out;
 }
 VAR_9->bitmap = FUNC_3(VAR_12, VAR_2);
 if (!VAR_9->bitmap) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_9->virt_base = VAR_10;
 VAR_9->device_base = VAR_6;
 VAR_9->pfn_base = FUNC_1(VAR_5);
 VAR_9->size = VAR_11;
 FUNC_6(&VAR_9->spinlock);

 *VAR_8 = VAR_9;
 return 0;

out:
 FUNC_2(VAR_9);
 if (VAR_10)
  FUNC_5(VAR_10);
 return VAR_13;
}
