
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_markbad; } ;
struct nand_chip {int badblockpos; int badblockbits; TYPE_1__ legacy; } ;
struct mtd_info {scalar_t__ writesize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_1(VAR_6);


 VAR_6->badblockpos = 0x05;
 VAR_6->badblockbits = 7;
 VAR_6->legacy.block_markbad = VAR_5;


 if (VAR_7->writesize == VAR_1)
  FUNC_0(VAR_7, &VAR_3);
 else if (VAR_7->writesize == VAR_2)
  FUNC_0(VAR_7, &VAR_4);
 else
  return -VAR_0;

 return 0;
}
