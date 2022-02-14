
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smem_partition_header {int offset_free_uncached; int offset_free_cached; } ;
struct smem_header {int available; } ;
struct TYPE_4__ {TYPE_1__* regions; struct smem_partition_header* global_partition; struct smem_partition_header** partitions; } ;
struct TYPE_3__ {struct smem_header* virt_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned int FUNC_0 (int ) ;

int FUNC_1(unsigned VAR_3)
{
 struct smem_partition_header *VAR_4;
 struct smem_header *VAR_5;
 unsigned VAR_6;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_3 < VAR_1 && VAR_2->partitions[VAR_3]) {
  VAR_4 = VAR_2->partitions[VAR_3];
  VAR_6 = FUNC_0(VAR_4->offset_free_cached) -
        FUNC_0(VAR_4->offset_free_uncached);
 } else if (VAR_2->global_partition) {
  VAR_4 = VAR_2->global_partition;
  VAR_6 = FUNC_0(VAR_4->offset_free_cached) -
        FUNC_0(VAR_4->offset_free_uncached);
 } else {
  VAR_5 = VAR_2->regions[0].virt_base;
  VAR_6 = FUNC_0(VAR_5->available);
 }

 return VAR_6;
}
