
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct spi_nor_erase_type {scalar_t__ size; int opcode; } ;
struct spi_nor_erase_map {struct spi_nor_erase_type* erase_type; } ;
struct mtd_info {scalar_t__ erasesize; } ;
struct TYPE_3__ {struct spi_nor_erase_map erase_map; } ;
struct spi_nor {int erase_opcode; TYPE_2__* info; struct mtd_info mtd; TYPE_1__ params; } ;
struct TYPE_4__ {unsigned int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct spi_nor*) ;
 struct spi_nor_erase_type* FUNC_1 (struct spi_nor_erase_map*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_2)
{
 struct spi_nor_erase_map *VAR_3 = &VAR_2->params.erase_map;
 const struct spi_nor_erase_type *VAR_4 = ((void*)0);
 struct mtd_info *VAR_5 = &VAR_2->mtd;
 u32 VAR_6 = VAR_2->info->sector_size;
 int VAR_7;
 if (FUNC_0(VAR_2)) {
  VAR_4 = FUNC_1(VAR_3, VAR_6);
  if (!VAR_4)
   return -VAR_0;
  VAR_2->erase_opcode = VAR_4->opcode;
  VAR_5->erasesize = VAR_4->size;
  return 0;
 }





 for (VAR_7 = VAR_1 - 1; VAR_7 >= 0; VAR_7--) {
  if (VAR_3->erase_type[VAR_7].size) {
   VAR_4 = &VAR_3->erase_type[VAR_7];
   break;
  }
 }

 if (!VAR_4)
  return -VAR_0;

 VAR_5->erasesize = VAR_4->size;
 return 0;
}
