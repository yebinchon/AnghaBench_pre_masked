
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {scalar_t__ v2; int mm; } ;
struct iommu_table {int it_level_size; scalar_t__ it_userspace; scalar_t__ it_indirect_levels; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int __be64 ;


 int VAR_0 ;
 int * FUNC_0 (struct iommu_table*,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (struct iommu_table*,unsigned long,unsigned long) ;
 long FUNC_3 (int ,struct iommu_table*,unsigned long,unsigned long*,int*) ;
 int FUNC_4 (struct tce_container*,unsigned long) ;
 int FUNC_5 (struct tce_container*,struct iommu_table*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct tce_container *VAR_1,
  struct iommu_table *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 long VAR_6;
 enum dma_data_direction VAR_7;
 unsigned long VAR_8 = VAR_3 + VAR_4, VAR_9 = VAR_3;

 for ( ; VAR_3 < VAR_8; ++VAR_3) {
  if (VAR_2->it_indirect_levels && VAR_2->it_userspace) {
   __be64 *VAR_10 = FUNC_0(VAR_2,
     VAR_3);
   if (!VAR_10) {

    VAR_3 |= VAR_2->it_level_size - 1;
    continue;
   }
  }

  FUNC_1();

  VAR_7 = VAR_0;
  VAR_5 = 0;
  VAR_6 = FUNC_3(VAR_1->mm, VAR_2, VAR_3, &VAR_5,
    &VAR_7);
  if (VAR_6)
   continue;

  if (VAR_7 == VAR_0)
   continue;

  if (VAR_1->v2) {
   FUNC_5(VAR_1, VAR_2, VAR_3);
   continue;
  }

  FUNC_4(VAR_1, VAR_5);
 }

 FUNC_2(VAR_2, VAR_9, VAR_4);

 return 0;
}
