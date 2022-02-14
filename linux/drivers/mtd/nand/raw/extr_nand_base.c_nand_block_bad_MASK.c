
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* read_oob ) (struct nand_chip*,int) ;} ;
struct nand_chip {int page_shift; int pagemask; int* oob_poi; size_t badblockpos; int badblockbits; TYPE_1__ ecc; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nand_chip*,int) ;
 int FUNC_3 (struct nand_chip*,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, loff_t VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4;
 u8 VAR_5;

 VAR_2 = (int)(VAR_1 >> VAR_0->page_shift) & VAR_0->pagemask;
 VAR_3 = FUNC_2(VAR_0, 0);

 while (VAR_3 >= 0) {
  VAR_4 = VAR_0->ecc.read_oob(VAR_0, VAR_2 + VAR_3);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_5 = VAR_0->oob_poi[VAR_0->badblockpos];

  if (FUNC_1(VAR_0->badblockbits == 8))
   VAR_4 = VAR_5 != 0xFF;
  else
   VAR_4 = FUNC_0(VAR_5) < VAR_0->badblockbits;
  if (VAR_4)
   return VAR_4;

  VAR_3 = FUNC_2(VAR_0, VAR_3 + 1);
 }

 return 0;
}
