
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor_erase_type {int size_mask; } ;
struct spi_nor_erase_region {int size; } ;


 int const FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct spi_nor_erase_region*) ;

__attribute__((used)) static void
FUNC_2(struct spi_nor_erase_region *VAR_1,
        const struct spi_nor_erase_type *VAR_2,
        const u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_3 & FUNC_0(VAR_4)))
   continue;
  if (VAR_1->size & VAR_2[VAR_4].size_mask) {
   FUNC_1(VAR_1);
   return;
  }
 }
}
