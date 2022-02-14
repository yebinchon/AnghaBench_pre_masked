
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef struct spi_nor_erase_type {scalar_t__ const size; } const spi_nor_erase_type ;
struct spi_nor_erase_map {int uniform_erase_type; struct spi_nor_erase_type const* erase_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static const struct spi_nor_erase_type *
FUNC_1(struct spi_nor_erase_map *VAR_2,
        const u32 VAR_3)
{
 const struct spi_nor_erase_type *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;
 u8 VAR_7 = VAR_2->uniform_erase_type;

 for (VAR_6 = VAR_1 - 1; VAR_6 >= 0; VAR_6--) {
  if (!(VAR_7 & FUNC_0(VAR_6)))
   continue;

  VAR_4 = &VAR_2->erase_type[VAR_6];





  if (VAR_4->size == VAR_3) {
   VAR_5 = VAR_4;
   break;
  }





  if (!VAR_5 && VAR_4->size)
   VAR_5 = VAR_4;

 }

 if (!VAR_5)
  return ((void*)0);


 VAR_2->uniform_erase_type &= ~VAR_0;
 VAR_2->uniform_erase_type |= FUNC_0(VAR_5 - VAR_2->erase_type);
 return VAR_5;
}
