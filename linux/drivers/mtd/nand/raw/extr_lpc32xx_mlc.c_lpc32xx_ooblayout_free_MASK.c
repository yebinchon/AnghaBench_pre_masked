
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int steps; scalar_t__ bytes; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_oob_region {int offset; scalar_t__ length; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, int VAR_2,
      struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_4->ecc.steps)
  return -VAR_0;

 VAR_3->offset = 16 * VAR_2;
 VAR_3->length = 16 - VAR_4->ecc.bytes;

 return 0;
}
