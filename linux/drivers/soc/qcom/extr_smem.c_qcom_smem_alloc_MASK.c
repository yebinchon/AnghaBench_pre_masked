
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smem_partition_header {int dummy; } ;
struct TYPE_4__ {unsigned int item_count; int hwlock; struct smem_partition_header* global_partition; struct smem_partition_header** partitions; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned long*) ;
 int FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (TYPE_1__*,unsigned int,size_t) ;
 int FUNC_5 (TYPE_1__*,struct smem_partition_header*,unsigned int,size_t) ;

int FUNC_6(unsigned VAR_6, unsigned VAR_7, size_t VAR_8)
{
 struct smem_partition_header *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (!VAR_5)
  return -VAR_1;

 if (VAR_7 < VAR_4) {
  FUNC_1(VAR_5->dev,
   "Rejecting allocation of static entry %d\n", VAR_7);
  return -VAR_0;
 }

 if (FUNC_0(VAR_7 >= VAR_5->item_count))
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_5->hwlock,
       VAR_2,
       &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_6 < VAR_3 && VAR_5->partitions[VAR_6]) {
  VAR_9 = VAR_5->partitions[VAR_6];
  VAR_11 = FUNC_5(VAR_5, VAR_9, VAR_7, VAR_8);
 } else if (VAR_5->global_partition) {
  VAR_9 = VAR_5->global_partition;
  VAR_11 = FUNC_5(VAR_5, VAR_9, VAR_7, VAR_8);
 } else {
  VAR_11 = FUNC_4(VAR_5, VAR_7, VAR_8);
 }

 FUNC_3(VAR_5->hwlock, &VAR_10);

 return VAR_11;
}
