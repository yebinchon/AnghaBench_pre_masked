
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt_erase_shift; int bbt_options; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*,int,int ) ;
 int FUNC_1 (struct nand_chip*,int) ;

int FUNC_2(struct nand_chip *VAR_2, loff_t VAR_3)
{
 int VAR_4, VAR_5 = 0;

 VAR_4 = (int)(VAR_3 >> VAR_2->bbt_erase_shift);


 FUNC_0(VAR_2, VAR_4, VAR_0);


 if (VAR_2->bbt_options & VAR_1)
  VAR_5 = FUNC_1(VAR_2, VAR_3);

 return VAR_5;
}
