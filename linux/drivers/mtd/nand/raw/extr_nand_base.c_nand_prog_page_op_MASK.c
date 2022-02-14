
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* waitfunc ) (struct nand_chip*) ;int (* cmdfunc ) (struct nand_chip*,int ,int,int) ;int (* write_buf ) (struct nand_chip*,void const*,unsigned int) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nand_chip*,unsigned int,unsigned int,void const*,unsigned int,int) ;
 scalar_t__ FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct nand_chip*,void const*,unsigned int) ;
 int FUNC_5 (struct nand_chip*,int ,int,int) ;
 int FUNC_6 (struct nand_chip*) ;

int FUNC_7(struct nand_chip *VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, const void *VAR_8,
        unsigned int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;

 if (!VAR_9 || !VAR_8)
  return -VAR_0;

 if (VAR_7 + VAR_9 > VAR_10->writesize + VAR_10->oobsize)
  return -VAR_0;

 if (FUNC_1(VAR_5)) {
  VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9, 1);
 } else {
  VAR_5->legacy.cmdfunc(VAR_5, VAR_3, VAR_7,
         VAR_6);
  VAR_5->legacy.write_buf(VAR_5, VAR_8, VAR_9);
  VAR_5->legacy.cmdfunc(VAR_5, VAR_2, -1, -1);
  VAR_11 = VAR_5->legacy.waitfunc(VAR_5);
 }

 if (VAR_11 & VAR_4)
  return -VAR_1;

 return 0;
}
