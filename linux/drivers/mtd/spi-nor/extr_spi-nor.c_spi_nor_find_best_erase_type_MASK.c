
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct spi_nor_erase_type {scalar_t__ size; } ;
struct spi_nor_erase_region {int offset; } ;
struct spi_nor_erase_map {struct spi_nor_erase_type* erase_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct spi_nor_erase_type const*,int ,scalar_t__*) ;

__attribute__((used)) static const struct spi_nor_erase_type *
FUNC_2(const struct spi_nor_erase_map *VAR_3,
        const struct spi_nor_erase_region *VAR_4,
        u64 VAR_5, u32 VAR_6)
{
 const struct spi_nor_erase_type *VAR_7;
 u32 VAR_8;
 int VAR_9;
 u8 VAR_10 = VAR_4->offset & VAR_0;





 for (VAR_9 = VAR_1 - 1; VAR_9 >= 0; VAR_9--) {

  if (!(VAR_10 & FUNC_0(VAR_9)))
   continue;

  VAR_7 = &VAR_3->erase_type[VAR_9];


  if (VAR_7->size > VAR_6)
   continue;


  if (VAR_4->offset & VAR_2)
   return VAR_7;

  FUNC_1(VAR_7, VAR_5, &VAR_8);
  if (VAR_8)
   continue;
  else
   return VAR_7;
 }

 return ((void*)0);
}
