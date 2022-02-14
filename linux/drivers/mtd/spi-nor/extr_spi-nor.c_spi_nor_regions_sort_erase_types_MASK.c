
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor_erase_region {int offset; } ;
struct spi_nor_erase_map {struct spi_nor_erase_region* regions; } ;


 int VAR_0 ;
 struct spi_nor_erase_region* FUNC_0 (struct spi_nor_erase_region*) ;
 int FUNC_1 (struct spi_nor_erase_map*,int) ;

__attribute__((used)) static void FUNC_2(struct spi_nor_erase_map *VAR_1)
{
 struct spi_nor_erase_region *VAR_2 = VAR_1->regions;
 u8 VAR_3, VAR_4;

 while (VAR_2) {
  VAR_3 = VAR_2->offset & VAR_0;

  VAR_4 = FUNC_1(VAR_1,
           VAR_3);


  VAR_2->offset = (VAR_2->offset & ~VAR_0) |
     VAR_4;

  VAR_2 = FUNC_0(VAR_2);
 }
}
