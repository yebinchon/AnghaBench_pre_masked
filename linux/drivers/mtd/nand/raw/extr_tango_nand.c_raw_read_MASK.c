
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bytes; int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct nand_chip*,int **,int const,int*) ;
 struct mtd_info* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_1(VAR_2);
 u8 *VAR_6 = VAR_4;
 const int VAR_7 = VAR_5->writesize;
 const int VAR_8 = VAR_2->ecc.bytes;
 const int VAR_9 = VAR_2->ecc.size;
 int VAR_10 = 0;
 int VAR_11 = VAR_7;

 if (VAR_4)
  VAR_4 += VAR_0;

 FUNC_0(VAR_2, &VAR_4, VAR_1, &VAR_10);

 while (VAR_11 > VAR_9) {
  FUNC_0(VAR_2, &VAR_3, VAR_9, &VAR_10);
  FUNC_0(VAR_2, &VAR_4, VAR_8, &VAR_10);
  VAR_11 = VAR_7 - VAR_10;
 }

 FUNC_0(VAR_2, &VAR_3, VAR_11, &VAR_10);
 FUNC_0(VAR_2, &VAR_6, VAR_0, &VAR_10);
 FUNC_0(VAR_2, &VAR_3, VAR_9 - VAR_11, &VAR_10);
 FUNC_0(VAR_2, &VAR_4, VAR_8, &VAR_10);
}
