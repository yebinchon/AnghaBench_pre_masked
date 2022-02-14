
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {scalar_t__ size; int erasesize; } ;
struct spi_nor {TYPE_1__* info; struct mtd_info mtd; int erase_opcode; int flags; } ;
struct TYPE_2__ {int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct spi_nor *VAR_3)
{
 struct mtd_info *VAR_4 = &VAR_3->mtd;

 if (VAR_4->size <= VAR_2)
  return;

 VAR_3->flags |= VAR_0;

 VAR_3->erase_opcode = VAR_1;
 VAR_3->mtd.erasesize = VAR_3->info->sector_size;
}
