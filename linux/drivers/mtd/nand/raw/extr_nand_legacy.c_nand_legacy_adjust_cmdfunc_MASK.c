
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdfunc; } ;
struct nand_chip {TYPE_1__ legacy; } ;
struct mtd_info {int writesize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;

void FUNC_1(struct nand_chip *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_0(VAR_2);


 if (VAR_3->writesize > 512 && VAR_2->legacy.cmdfunc == VAR_0)
  VAR_2->legacy.cmdfunc = VAR_1;
}
