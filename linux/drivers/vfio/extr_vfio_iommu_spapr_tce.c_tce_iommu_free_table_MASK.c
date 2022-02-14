
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {int mm; } ;
struct iommu_table {unsigned long it_allocated_size; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (struct iommu_table*) ;

__attribute__((used)) static void FUNC_2(struct tce_container *VAR_1,
  struct iommu_table *VAR_2)
{
 unsigned long VAR_3 = VAR_2->it_allocated_size >> VAR_0;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1->mm, VAR_3, 0);
}
