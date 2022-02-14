
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt_erase_shift; } ;
struct nand_bbt_descr {int* pages; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,int,int ) ;
 int FUNC_1 (struct nand_chip*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_1,
          struct nand_bbt_descr *VAR_2,
          int VAR_3, int VAR_4)
{
 loff_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, VAR_4, VAR_0);

 VAR_5 = (loff_t)VAR_4 << VAR_1->bbt_erase_shift;
 VAR_6 = FUNC_1(VAR_1, VAR_5);
 if (VAR_6)
  FUNC_2("nand_bbt: error %d while marking block %d bad\n",
   VAR_6, VAR_4);

 VAR_2->pages[VAR_3] = -1;
}
