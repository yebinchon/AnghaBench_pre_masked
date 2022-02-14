
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int page_shift; int pagemask; int options; } ;
struct mtd_info {int erasesize; int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtd_info* FUNC_0 (struct nand_chip*) ;

int FUNC_1(struct nand_chip *VAR_4, int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = ((VAR_6->erasesize - VAR_6->writesize) >>
    VAR_4->page_shift) & VAR_4->pagemask;

 if (VAR_5 == 0 && VAR_4->options & VAR_1)
  return 0;
 else if (VAR_5 <= 1 && VAR_4->options & VAR_3)
  return 1;
 else if (VAR_5 <= VAR_7 && VAR_4->options & VAR_2)
  return VAR_7;

 return -VAR_0;
}
