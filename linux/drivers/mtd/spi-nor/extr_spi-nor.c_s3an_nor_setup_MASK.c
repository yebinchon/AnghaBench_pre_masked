
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_nor_hwcaps {int dummy; } ;
struct TYPE_5__ {int writebufsize; int size; int erasesize; } ;
struct TYPE_4__ {int convert_addr; } ;
struct spi_nor {int* bouncebuf; int page_size; TYPE_3__* info; TYPE_2__ mtd; TYPE_1__ params; int flags; int read_opcode; int program_opcode; int erase_opcode; int dev; } ;
struct TYPE_6__ {int n_sectors; int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_1 (struct spi_nor*,int*) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_6,
     const struct spi_nor_hwcaps *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_6->bouncebuf);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "error %d reading XRDSR\n", (int) VAR_8);
  return VAR_8;
 }

 VAR_6->erase_opcode = VAR_3;
 VAR_6->program_opcode = VAR_2;
 VAR_6->read_opcode = VAR_1;
 VAR_6->flags |= VAR_0;
 if (VAR_6->bouncebuf[0] & VAR_4) {

  VAR_6->page_size = (VAR_6->page_size == 264) ? 256 : 512;
  VAR_6->mtd.writebufsize = VAR_6->page_size;
  VAR_6->mtd.size = 8 * VAR_6->page_size * VAR_6->info->n_sectors;
  VAR_6->mtd.erasesize = 8 * VAR_6->page_size;
 } else {

  VAR_6->params.convert_addr = VAR_5;
  VAR_6->mtd.erasesize = VAR_6->info->sector_size;
 }

 return 0;
}
