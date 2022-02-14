
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {struct iommu_table** tables; } ;
struct iommu_table {unsigned long it_page_shift; unsigned long it_offset; unsigned long it_size; } ;
typedef unsigned long phys_addr_t ;


 long VAR_0 ;

__attribute__((used)) static long FUNC_0(struct tce_container *VAR_1,
  phys_addr_t VAR_2, struct iommu_table **VAR_3)
{
 long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct iommu_table *VAR_5 = VAR_1->tables[VAR_4];

  if (VAR_5) {
   unsigned long VAR_6 = VAR_2 >> VAR_5->it_page_shift;
   unsigned long VAR_7 = VAR_5->it_offset;
   unsigned long VAR_8 = VAR_7 + VAR_5->it_size;

   if ((VAR_7 <= VAR_6) && (VAR_6 < VAR_8)) {
    *VAR_3 = VAR_5;
    return VAR_4;
   }
  }
 }

 return -1;
}
