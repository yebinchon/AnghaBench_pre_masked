
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_iommu_prereg {int next; int mem; } ;
struct tce_container {int mm; } ;


 int FUNC_0 (struct tce_iommu_prereg*) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int ,int ) ;

__attribute__((used)) static long FUNC_3(struct tce_container *VAR_0,
  struct tce_iommu_prereg *VAR_1)
{
 long VAR_2;

 VAR_2 = FUNC_2(VAR_0->mm, VAR_1->mem);
 if (VAR_2)
  return VAR_2;

 FUNC_1(&VAR_1->next);
 FUNC_0(VAR_1);

 return 0;
}
