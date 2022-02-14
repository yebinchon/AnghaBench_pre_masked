
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smem_partition_header {int dummy; } ;
struct TYPE_4__ {unsigned int item_count; size_t* cacheline; size_t global_cacheline; int hwlock; struct smem_partition_header* global_partition; struct smem_partition_header** partitions; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,int ,unsigned long*) ;
 int FUNC_3 (int ,unsigned long*) ;
 void* FUNC_4 (TYPE_1__*,unsigned int,size_t*) ;
 void* FUNC_5 (TYPE_1__*,struct smem_partition_header*,size_t,unsigned int,size_t*) ;

void *FUNC_6(unsigned VAR_5, unsigned VAR_6, size_t *VAR_7)
{
 struct smem_partition_header *VAR_8;
 unsigned long VAR_9;
 size_t VAR_10;
 int VAR_11;
 void *VAR_12 = FUNC_0(-VAR_1);

 if (!VAR_4)
  return VAR_12;

 if (FUNC_1(VAR_6 >= VAR_4->item_count))
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_2(VAR_4->hwlock,
       VAR_2,
       &VAR_9);
 if (VAR_11)
  return FUNC_0(VAR_11);

 if (VAR_5 < VAR_3 && VAR_4->partitions[VAR_5]) {
  VAR_8 = VAR_4->partitions[VAR_5];
  VAR_10 = VAR_4->cacheline[VAR_5];
  VAR_12 = FUNC_5(VAR_4, VAR_8, VAR_10, VAR_6, VAR_7);
 } else if (VAR_4->global_partition) {
  VAR_8 = VAR_4->global_partition;
  VAR_10 = VAR_4->global_cacheline;
  VAR_12 = FUNC_5(VAR_4, VAR_8, VAR_10, VAR_6, VAR_7);
 } else {
  VAR_12 = FUNC_4(VAR_4, VAR_6, VAR_7);
 }

 FUNC_3(VAR_4->hwlock, &VAR_9);

 return VAR_12;

}
