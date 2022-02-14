
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tce_container {int mm; } ;
struct iommu_table_group {TYPE_2__* ops; } ;
struct iommu_table {long it_allocated_size; TYPE_1__* it_ops; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_4__ {long (* get_table_size ) (int ,int ,int ) ;long (* create_table ) (struct iommu_table_group*,int,int ,int ,int ,struct iommu_table**) ;} ;
struct TYPE_3__ {int free; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int) ;
 long FUNC_1 (int ,long,int) ;
 long FUNC_2 (int ,int ,int ) ;
 long FUNC_3 (struct iommu_table_group*,int,int ,int ,int ,struct iommu_table**) ;

__attribute__((used)) static long FUNC_4(struct tce_container *VAR_2,
   struct iommu_table_group *VAR_3,
   int VAR_4,
   __u32 VAR_5,
   __u64 VAR_6,
   __u32 VAR_7,
   struct iommu_table **VAR_8)
{
 long VAR_9, VAR_10;

 VAR_10 = VAR_3->ops->get_table_size(VAR_5, VAR_6,
   VAR_7);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_2->mm, VAR_10 >> VAR_1, 1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_3->ops->create_table(VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_0(!VAR_9 && !(*VAR_8)->it_ops->free);
 FUNC_0(!VAR_9 && ((*VAR_8)->it_allocated_size > VAR_10));

 return VAR_9;
}
