
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {int mm; } ;
struct mm_iommu_table_group_mem_t {int dummy; } ;


 int VAR_0 ;
 struct mm_iommu_table_group_mem_t* FUNC_0 (int ,unsigned long,unsigned long long) ;
 long FUNC_1 (struct mm_iommu_table_group_mem_t*,unsigned long,unsigned long,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct tce_container *VAR_1,
  unsigned long VAR_2, unsigned long VAR_3,
  unsigned long *VAR_4, struct mm_iommu_table_group_mem_t **VAR_5)
{
 long VAR_6 = 0;
 struct mm_iommu_table_group_mem_t *VAR_7;

 VAR_7 = FUNC_0(VAR_1->mm, VAR_2, 1ULL << VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return -VAR_0;

 *VAR_5 = VAR_7;

 return 0;
}
