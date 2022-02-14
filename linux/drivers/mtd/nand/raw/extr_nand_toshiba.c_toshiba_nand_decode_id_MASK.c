
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_memory_organization {int oobsize; int pagesize; } ;
struct TYPE_5__ {int step_size; int strength; } ;
struct TYPE_6__ {TYPE_2__ eccreq; } ;
struct TYPE_4__ {int len; int* data; } ;
struct nand_chip {TYPE_3__ base; TYPE_1__ id; } ;
struct mtd_info {int oobsize; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct nand_chip*) ;
 scalar_t__ FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_3(VAR_0);
 struct nand_memory_organization *VAR_2;

 VAR_2 = FUNC_4(&VAR_0->base);

 FUNC_1(VAR_0);
 if (VAR_0->id.len >= 6 && FUNC_2(VAR_0) &&
     (VAR_0->id.data[5] & 0x7) == 0x6 &&
     !(VAR_0->id.data[4] & 0x80) ) {
  VAR_2->oobsize = 32 * VAR_2->pagesize >> 9;
  VAR_1->oobsize = VAR_2->oobsize;
 }
 if (VAR_0->id.len >= 6 && FUNC_2(VAR_0)) {
  VAR_0->base.eccreq.step_size = 512;
  switch (VAR_0->id.data[5] & 0x7) {
  case 0x4:
   VAR_0->base.eccreq.strength = 1;
   break;
  case 0x5:
   VAR_0->base.eccreq.strength = 4;
   break;
  case 0x6:
   VAR_0->base.eccreq.strength = 8;
   break;
  default:
   FUNC_0(1, "Could not get ECC info");
   VAR_0->base.eccreq.step_size = 0;
   break;
  }
 }
}
