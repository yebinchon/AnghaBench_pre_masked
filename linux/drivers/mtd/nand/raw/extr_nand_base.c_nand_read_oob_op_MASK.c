
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_buf ) (struct nand_chip*,void*,unsigned int) ;int (* cmdfunc ) (struct nand_chip*,int ,unsigned int,unsigned int) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
struct mtd_info {unsigned int oobsize; scalar_t__ writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,unsigned int,scalar_t__,void*,unsigned int) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct nand_chip*,void*,unsigned int) ;

int FUNC_5(struct nand_chip *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, void *VAR_5, unsigned int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_2(VAR_2);

 if (VAR_6 && !VAR_5)
  return -VAR_0;

 if (VAR_4 + VAR_6 > VAR_7->oobsize)
  return -VAR_0;

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2, VAR_3,
      VAR_7->writesize + VAR_4,
      VAR_5, VAR_6);

 VAR_2->legacy.cmdfunc(VAR_2, VAR_1, VAR_4, VAR_3);
 if (VAR_6)
  VAR_2->legacy.read_buf(VAR_2, VAR_5, VAR_6);

 return 0;
}
