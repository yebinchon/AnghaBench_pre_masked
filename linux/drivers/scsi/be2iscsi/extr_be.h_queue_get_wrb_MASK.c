
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* va; } ;
struct be_queue_info {unsigned int entry_size; TYPE_1__ dma_mem; } ;



__attribute__((used)) static inline void *FUNC_0(struct be_queue_info *VAR_0, unsigned int VAR_1)
{
 return VAR_0->dma_mem.va + VAR_1 * VAR_0->entry_size;
}
