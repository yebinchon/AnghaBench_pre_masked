
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct spi_nor_erase_region {scalar_t__ offset; scalar_t__ size; } ;
struct spi_nor_erase_map {struct spi_nor_erase_region* regions; } ;


 int VAR_0 ;
 struct spi_nor_erase_region* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct spi_nor_erase_region* FUNC_1 (struct spi_nor_erase_region*) ;

__attribute__((used)) static struct spi_nor_erase_region *
FUNC_2(const struct spi_nor_erase_map *VAR_2, u64 VAR_3)
{
 struct spi_nor_erase_region *VAR_4 = VAR_2->regions;
 u64 VAR_5 = VAR_4->offset & ~VAR_1;
 u64 VAR_6 = VAR_5 + VAR_4->size;

 while (VAR_3 < VAR_5 || VAR_3 >= VAR_6) {
  VAR_4 = FUNC_1(VAR_4);
  if (!VAR_4)
   return FUNC_0(-VAR_0);

  VAR_5 = VAR_4->offset & ~VAR_1;
  VAR_6 = VAR_5 + VAR_4->size;
 }

 return VAR_4;
}
