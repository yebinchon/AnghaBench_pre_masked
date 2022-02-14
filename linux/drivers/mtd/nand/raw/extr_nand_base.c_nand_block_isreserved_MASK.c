
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1)
{
 struct nand_chip *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->bbt)
  return 0;

 return FUNC_1(VAR_2, VAR_1);
}
