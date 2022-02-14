
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct nand_chip {int options; } ;
struct mtd_info {unsigned int writesize; unsigned int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2, u8 *VAR_3,
       unsigned int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_2);


 if (VAR_4 > VAR_5->writesize + VAR_5->oobsize)
  return -VAR_0;






 if (VAR_5->writesize <= 512 && VAR_4 >= VAR_5->writesize)
  VAR_4 -= VAR_5->writesize;





 if (VAR_2->options & VAR_1) {
  if (FUNC_0(VAR_4 % 2))
   return -VAR_0;

  VAR_4 /= 2;
 }

 VAR_3[0] = VAR_4;





 if (VAR_5->writesize <= 512)
  return 1;

 VAR_3[1] = VAR_4 >> 8;

 return 2;
}
