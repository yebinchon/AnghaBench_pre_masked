
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor_erase_type {int idx; scalar_t__ size; } ;
struct spi_nor_erase_map {struct spi_nor_erase_type* erase_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static u8 FUNC_1(struct spi_nor_erase_map *VAR_1, u8 VAR_2)
{
 struct spi_nor_erase_type *VAR_3 = VAR_1->erase_type;
 int VAR_4;
 u8 VAR_5 = 0;

 if (!VAR_2)
  return 0;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3[VAR_4].size && VAR_2 & FUNC_0(VAR_3[VAR_4].idx))
   VAR_5 |= FUNC_0(VAR_4);

 return VAR_5;
}
