
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_mapping {scalar_t__ size; } ;



__attribute__((used)) static inline bool FUNC_0(struct dma_mapping *VAR_0)
{
 if (!VAR_0)
  return 0;
 return VAR_0->size != 0;
}
