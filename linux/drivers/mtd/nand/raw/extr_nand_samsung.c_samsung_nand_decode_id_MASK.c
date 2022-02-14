
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nand_memory_organization {int pagesize; int oobsize; int pages_per_eraseblock; } ;
struct TYPE_5__ {int len; int* data; } ;
struct TYPE_4__ {int step_size; int strength; } ;
struct TYPE_6__ {TYPE_1__ eccreq; } ;
struct nand_chip {int options; TYPE_2__ id; TYPE_3__ base; } ;
struct mtd_info {int writesize; int oobsize; int erasesize; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct nand_chip*) ;
 scalar_t__ FUNC_3 (struct nand_chip*) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_4(VAR_1);
 struct nand_memory_organization *VAR_3;

 VAR_3 = FUNC_5(&VAR_1->base);


 if (VAR_1->id.len == 6 && !FUNC_3(VAR_1) &&
     VAR_1->id.data[5] != 0x00) {
  u8 VAR_4 = VAR_1->id.data[3];


  VAR_3->pagesize = 2048 << (VAR_4 & 0x03);
  VAR_2->writesize = VAR_3->pagesize;

  VAR_4 >>= 2;


  switch (((VAR_4 >> 2) & 0x4) | (VAR_4 & 0x3)) {
  case 1:
   VAR_3->oobsize = 128;
   break;
  case 2:
   VAR_3->oobsize = 218;
   break;
  case 3:
   VAR_3->oobsize = 400;
   break;
  case 4:
   VAR_3->oobsize = 436;
   break;
  case 5:
   VAR_3->oobsize = 512;
   break;
  case 6:
   VAR_3->oobsize = 640;
   break;
  default:






   FUNC_1(1, "Invalid OOB size value");
   break;
  }

  VAR_2->oobsize = VAR_3->oobsize;


  VAR_4 >>= 2;
  VAR_3->pages_per_eraseblock = (128 * 1024) <<
            (((VAR_4 >> 1) & 0x04) |
      (VAR_4 & 0x03)) /
            VAR_3->pagesize;
  VAR_2->erasesize = (128 * 1024) <<
     (((VAR_4 >> 1) & 0x04) | (VAR_4 & 0x03));


  VAR_4 = (VAR_1->id.data[4] >> 4) & 0x07;
  if (VAR_4 < 5) {
   VAR_1->base.eccreq.step_size = 512;
   VAR_1->base.eccreq.strength = 1 << VAR_4;
  } else {
   VAR_1->base.eccreq.step_size = 1024;
   switch (VAR_4) {
   case 5:
    VAR_1->base.eccreq.strength = 24;
    break;
   case 6:
    VAR_1->base.eccreq.strength = 40;
    break;
   case 7:
    VAR_1->base.eccreq.strength = 60;
    break;
   default:
    FUNC_1(1, "Could not decode ECC info");
    VAR_1->base.eccreq.step_size = 0;
   }
  }
 } else {
  FUNC_2(VAR_1);

  if (FUNC_3(VAR_1)) {
   switch (VAR_1->id.data[1]) {

   case 0xDC:
    VAR_1->base.eccreq.step_size = 512;
    VAR_1->base.eccreq.strength = 1;
    break;


   case 0xF1:
    if (VAR_1->id.len > 4 &&
        (VAR_1->id.data[4] & FUNC_0(1, 0)) == 0x1)
     VAR_1->options |= VAR_0;
    break;
   default:
    break;
   }
  }
 }
}
