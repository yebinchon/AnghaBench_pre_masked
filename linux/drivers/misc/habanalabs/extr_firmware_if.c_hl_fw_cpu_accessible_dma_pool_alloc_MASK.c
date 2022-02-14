
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hl_device {scalar_t__ cpu_accessible_dma_mem; scalar_t__ cpu_accessible_dma_address; int cpu_accessible_dma_pool; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (int ,size_t) ;

void *FUNC_1(struct hl_device *VAR_0, size_t VAR_1,
      dma_addr_t *VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_0(VAR_0->cpu_accessible_dma_pool, VAR_1);

 *VAR_2 = VAR_0->cpu_accessible_dma_address +
  (VAR_3 - (u64) (uintptr_t) VAR_0->cpu_accessible_dma_mem);

 return (void *) (uintptr_t) VAR_3;
}
