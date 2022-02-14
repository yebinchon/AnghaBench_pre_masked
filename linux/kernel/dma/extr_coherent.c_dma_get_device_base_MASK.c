
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_coherent_mem {int pfn_base; int device_base; scalar_t__ use_dev_dma_pfn_offset; } ;
struct device {int dma_pfn_offset; } ;
typedef int dma_addr_t ;


 int VAR_0 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(struct device *VAR_1,
          struct dma_coherent_mem * VAR_2)
{
 if (VAR_2->use_dev_dma_pfn_offset)
  return (VAR_2->pfn_base - VAR_1->dma_pfn_offset) << VAR_0;
 else
  return VAR_2->device_base;
}
