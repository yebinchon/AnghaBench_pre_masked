
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt_erase_shift; } ;
typedef int loff_t ;





 int FUNC_0 (struct nand_chip*,int) ;
 int FUNC_1 (char*,unsigned int,int,int) ;

int FUNC_2(struct nand_chip *VAR_0, loff_t VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = (int)(VAR_1 >> VAR_0->bbt_erase_shift);
 VAR_4 = FUNC_0(VAR_0, VAR_3);

 FUNC_1("nand_isbad_bbt(): bbt info for offs 0x%08x: (block %d) 0x%02x\n",
   (unsigned int)VAR_1, VAR_3, VAR_4);

 switch (VAR_4) {
 case 130:
  return 0;
 case 128:
  return 1;
 case 129:
  return VAR_2 ? 0 : 1;
 }
 return 1;
}
