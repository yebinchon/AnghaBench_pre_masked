
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_memory_organization {int pagesize; int oobsize; int pages_per_eraseblock; int bits_per_cell; } ;
struct TYPE_2__ {int* data; } ;
struct nand_chip {int options; int base; TYPE_1__ id; } ;
struct mtd_info {int writesize; int oobsize; int erasesize; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_2 (int *) ;

void FUNC_3(struct nand_chip *VAR_1)
{
 struct nand_memory_organization *VAR_2;
 struct mtd_info *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;
 u8 *VAR_5 = VAR_1->id.data;

 VAR_2 = FUNC_2(&VAR_1->base);


 VAR_2->bits_per_cell = FUNC_0(VAR_5[2]);

 VAR_4 = VAR_5[3];


 VAR_2->pagesize = 1024 << (VAR_4 & 0x03);
 VAR_3->writesize = VAR_2->pagesize;
 VAR_4 >>= 2;

 VAR_2->oobsize = (8 << (VAR_4 & 0x01)) * (VAR_3->writesize >> 9);
 VAR_3->oobsize = VAR_2->oobsize;
 VAR_4 >>= 2;

 VAR_2->pages_per_eraseblock = ((64 * 1024) << (VAR_4 & 0x03)) /
           VAR_2->pagesize;
 VAR_3->erasesize = (64 * 1024) << (VAR_4 & 0x03);
 VAR_4 >>= 2;

 if (VAR_4 & 0x1)
  VAR_1->options |= VAR_0;
}
