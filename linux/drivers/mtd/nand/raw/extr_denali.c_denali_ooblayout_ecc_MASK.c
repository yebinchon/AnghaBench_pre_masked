
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int total; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_oob_region {int length; int offset; } ;
struct mtd_info {int dummy; } ;
struct denali_controller {int oob_skip_bytes; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct denali_controller* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
    struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct denali_controller *VAR_5 = FUNC_1(VAR_4);

 if (VAR_2 > 0)
  return -VAR_0;

 VAR_3->offset = VAR_5->oob_skip_bytes;
 VAR_3->length = VAR_4->ecc.total;

 return 0;
}
