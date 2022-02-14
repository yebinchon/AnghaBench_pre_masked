
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tce_container {scalar_t__* tables; } ;
struct iommu_table_group {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* release_ownership ) (struct iommu_table_group*) ;int (* unset_window ) (struct iommu_table_group*,long) ;} ;


 long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iommu_table_group*,long) ;
 int FUNC_2 (struct iommu_table_group*) ;

__attribute__((used)) static void FUNC_3(struct tce_container *VAR_1,
  struct iommu_table_group *VAR_2)
{
 long VAR_3;

 if (!VAR_2->ops->unset_window) {
  FUNC_0(1);
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  if (VAR_1->tables[VAR_3])
   VAR_2->ops->unset_window(VAR_2, VAR_3);

 VAR_2->ops->release_ownership(VAR_2);
}
