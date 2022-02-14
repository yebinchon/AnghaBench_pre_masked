
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; int badblockpos; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_3);


 if (VAR_4->writesize > 512 || (VAR_3->options & VAR_2))
  VAR_3->badblockpos = VAR_0;
 else
  VAR_3->badblockpos = VAR_1;
}
