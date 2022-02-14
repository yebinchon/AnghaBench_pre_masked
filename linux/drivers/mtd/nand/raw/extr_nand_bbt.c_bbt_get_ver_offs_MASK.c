
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct nand_bbt_descr {int options; int veroffs; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static u32 FUNC_1(struct nand_chip *VAR_1, struct nand_bbt_descr *VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_2->veroffs;

 if (!(VAR_2->options & VAR_0))
  VAR_4 += VAR_3->writesize;
 return VAR_4;
}
