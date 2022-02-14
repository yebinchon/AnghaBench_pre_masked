
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes; int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_oob_region {int offset; int length; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_2, int VAR_3,
      struct mtd_oob_region *VAR_4)
{
 struct nand_chip *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = VAR_0;

 if (VAR_3)
  return -VAR_1;





 VAR_6 += ((VAR_5->ecc.bytes + 1) * VAR_5->ecc.steps);
 if (VAR_6 >= VAR_2->oobsize)
  return -VAR_1;

 VAR_4->offset = VAR_6;
 VAR_4->length = VAR_2->oobsize - VAR_6;

 return 0;
}
