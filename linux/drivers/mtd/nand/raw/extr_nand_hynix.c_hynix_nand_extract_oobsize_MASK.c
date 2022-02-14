
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_memory_organization {int oobsize; int pagesize; } ;
struct TYPE_2__ {int* data; } ;
struct nand_chip {TYPE_1__ id; int base; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_1,
           bool VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_1(VAR_1);
 struct nand_memory_organization *VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_2(&VAR_1->base);

 VAR_5 = ((VAR_1->id.data[3] >> 2) & 0x3) |
    ((VAR_1->id.data[3] >> 4) & 0x4);

 if (VAR_2) {
  switch (VAR_5) {
  case 0:
   VAR_4->oobsize = 2048;
   break;
  case 1:
   VAR_4->oobsize = 1664;
   break;
  case 2:
   VAR_4->oobsize = 1024;
   break;
  case 3:
   VAR_4->oobsize = 640;
   break;
  default:






   FUNC_0(1, "Invalid OOB size");
   break;
  }
 } else {
  switch (VAR_5) {
  case 0:
   VAR_4->oobsize = 128;
   break;
  case 1:
   VAR_4->oobsize = 224;
   break;
  case 2:
   VAR_4->oobsize = 448;
   break;
  case 3:
   VAR_4->oobsize = 64;
   break;
  case 4:
   VAR_4->oobsize = 32;
   break;
  case 5:
   VAR_4->oobsize = 16;
   break;
  case 6:
   VAR_4->oobsize = 640;
   break;
  default:






   FUNC_0(1, "Invalid OOB size");
   break;
  }
  if (VAR_1->id.data[1] == 0xde)
   VAR_4->oobsize *= VAR_4->pagesize / VAR_0;
 }

 VAR_3->oobsize = VAR_4->oobsize;
}
