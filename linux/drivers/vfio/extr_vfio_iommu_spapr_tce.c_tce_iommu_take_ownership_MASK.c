
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {struct iommu_table** tables; } ;
struct iommu_table_group {struct iommu_table** tables; } ;
struct iommu_table {int it_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_table*) ;
 int FUNC_1 (struct iommu_table*) ;

__attribute__((used)) static int FUNC_2(struct tce_container *VAR_1,
  struct iommu_table_group *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  struct iommu_table *VAR_6 = VAR_2->tables[VAR_3];

  if (!VAR_6 || !VAR_6->it_map)
   continue;

  VAR_5 = FUNC_1(VAR_6);
  if (VAR_5) {
   for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    FUNC_0(
      VAR_2->tables[VAR_4]);

   return VAR_5;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  VAR_1->tables[VAR_3] = VAR_2->tables[VAR_3];

 return 0;
}
