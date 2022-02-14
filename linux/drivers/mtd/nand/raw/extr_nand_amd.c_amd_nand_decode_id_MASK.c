
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_memory_organization {int pagesize; int pages_per_eraseblock; } ;
struct TYPE_2__ {int* data; } ;
struct nand_chip {TYPE_1__ id; int base; } ;
struct mtd_info {int erasesize; } ;


 int FUNC_0 (struct nand_chip*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_1(VAR_0);
 struct nand_memory_organization *VAR_2;

 VAR_2 = FUNC_2(&VAR_0->base);

 FUNC_0(VAR_0);







 if (VAR_0->id.data[4] != 0x00 && VAR_0->id.data[5] == 0x00 &&
     VAR_0->id.data[6] == 0x00 && VAR_0->id.data[7] == 0x00 &&
     VAR_2->pagesize == 512) {
  VAR_2->pages_per_eraseblock = 256;
  VAR_2->pages_per_eraseblock <<= ((VAR_0->id.data[3] & 0x03) << 1);
  VAR_1->erasesize = VAR_2->pages_per_eraseblock *
     VAR_2->pagesize;
 }
}
