
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct smem_region {void* virt_base; int size; scalar_t__ aux_base; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {unsigned int num_regions; struct smem_region* regions; } ;


 TYPE_1__* VAR_0 ;

phys_addr_t FUNC_0(void *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_regions; VAR_2++) {
  struct smem_region *VAR_3 = &VAR_0->regions[VAR_2];

  if (VAR_1 < VAR_3->virt_base)
   continue;
  if (VAR_1 < VAR_3->virt_base + VAR_3->size) {
   u64 VAR_4 = VAR_1 - VAR_3->virt_base;

   return (phys_addr_t)VAR_3->aux_base + VAR_4;
  }
 }

 return 0;
}
