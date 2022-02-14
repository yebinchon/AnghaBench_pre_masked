
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {struct iommu_table** tables; } ;
struct iommu_table_group {int dummy; } ;
struct iommu_table {scalar_t__ it_map; int it_size; int it_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_table*) ;
 int FUNC_1 (struct tce_container*,struct iommu_table*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tce_container *VAR_1,
  struct iommu_table_group *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  struct iommu_table *VAR_4 = VAR_1->tables[VAR_3];

  if (!VAR_4)
   continue;

  FUNC_1(VAR_1, VAR_4, VAR_4->it_offset, VAR_4->it_size);
  if (VAR_4->it_map)
   FUNC_0(VAR_4);

  VAR_1->tables[VAR_3] = ((void*)0);
 }
}
