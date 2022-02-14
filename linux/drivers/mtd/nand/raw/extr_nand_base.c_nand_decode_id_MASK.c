
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_memory_organization {int pages_per_eraseblock; int pagesize; int oobsize; int bits_per_cell; } ;
struct nand_flash_dev {int erasesize; int pagesize; } ;
struct nand_chip {int base; } ;
struct mtd_info {int erasesize; int writesize; int oobsize; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, struct nand_flash_dev *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_0(VAR_0);
 struct nand_memory_organization *VAR_3;

 VAR_3 = FUNC_1(&VAR_0->base);

 VAR_3->pages_per_eraseblock = VAR_1->erasesize / VAR_1->pagesize;
 VAR_2->erasesize = VAR_1->erasesize;
 VAR_3->pagesize = VAR_1->pagesize;
 VAR_2->writesize = VAR_3->pagesize;
 VAR_3->oobsize = VAR_3->pagesize / 32;
 VAR_2->oobsize = VAR_3->oobsize;


 VAR_3->bits_per_cell = 1;
}
