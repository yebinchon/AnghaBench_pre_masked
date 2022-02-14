
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt_erase_shift; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nand_chip*,int) ;

int FUNC_1(struct nand_chip *VAR_1, loff_t VAR_2)
{
 int VAR_3;

 VAR_3 = (int)(VAR_2 >> VAR_1->bbt_erase_shift);
 return FUNC_0(VAR_1, VAR_3) == VAR_0;
}
