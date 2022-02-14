
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total; } ;
struct nand_chip {int options; TYPE_1__ ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int writesize; int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, int VAR_3,
      struct mtd_oob_region *VAR_4)
{
 struct nand_chip *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 > 1)
  return -VAR_0;

 if (VAR_2->writesize == 512 &&
     !(VAR_5->options & VAR_1)) {
  if (!VAR_3) {
   VAR_4->offset = 0;
   VAR_4->length = 5;
  } else {
   VAR_4->offset = 6;
   VAR_4->length = 2;
  }

  return 0;
 }

 if (!VAR_3) {
  VAR_4->offset = 2;
  VAR_4->length = 6;
 } else {
  VAR_4->offset = VAR_5->ecc.total + 8;
  VAR_4->length = VAR_2->oobsize - VAR_4->offset;
 }

 return 0;
}
