
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tce_container {struct iommu_table** tables; } ;
struct iommu_table_group {TYPE_1__* ops; } ;
struct iommu_table {int dummy; } ;
struct TYPE_2__ {long (* set_window ) (struct iommu_table_group*,long,struct iommu_table*) ;int (* release_ownership ) (struct iommu_table_group*) ;int (* unset_window ) (struct iommu_table_group*,long) ;int (* take_ownership ) (struct iommu_table_group*) ;int create_table; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iommu_table_group*) ;
 long FUNC_2 (struct iommu_table_group*,long,struct iommu_table*) ;
 int FUNC_3 (struct iommu_table_group*,long) ;
 int FUNC_4 (struct iommu_table_group*) ;

__attribute__((used)) static long FUNC_5(struct tce_container *VAR_2,
  struct iommu_table_group *VAR_3)
{
 long VAR_4, VAR_5 = 0;

 if (!VAR_3->ops->create_table || !VAR_3->ops->set_window ||
   !VAR_3->ops->release_ownership) {
  FUNC_0(1);
  return -VAR_0;
 }

 VAR_3->ops->take_ownership(VAR_3);


 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
  struct iommu_table *VAR_6 = VAR_2->tables[VAR_4];

  if (!VAR_6)
   continue;

  VAR_5 = VAR_3->ops->set_window(VAR_3, VAR_4, VAR_6);
  if (VAR_5)
   goto release_exit;
 }

 return 0;

release_exit:
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  VAR_3->ops->unset_window(VAR_3, VAR_4);

 VAR_3->ops->release_ownership(VAR_3);

 return VAR_5;
}
